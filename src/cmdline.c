/*
  File autogenerated by gengetopt version 2.22.1
  generated with the following command:
  gengetopt -F cmdline --unamed-opts --no-handle-version --no-handle-help --no-handle-error 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "getopt.h"

#include "cmdline.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: " CMDLINE_PARSER_PACKAGE " [OPTIONS]... [FILES]...";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "  -h, --help               Print help and exit",
  "  -V, --version            Print version and exit",
  "  -o, --outfile=STRING     Output filename",
  "  -g, --gtf                GTF output  (default=off)",
  "  -t, --tabular            Tab delimited output  (default=off)",
  "  -b, --best-only          Print only best hit per alignment  (default=off)",
  "  -r, --best-region        Print all best non-overlapping hits per alignment  \n                             (default=off)",
  "  -c, --pars=STRING        String with parameters",
  "  -s, --stop-early         Don't calculate p-values if below cutoff  \n                             (default=off)",
  "  -n, --num-samples=INT    Number of samples",
  "  -p, --cutoff=FLOAT       p-value cutoff",
  "  -z, --debug-file=STRING  Debug file",
  "  -e, --eps                Postscript output  (default=off)",
  "  -i, --eps-cutoff=FLOAT   Postscript output p-value cutoff",
  "  -d, --eps-dir=STRING     Postscript directory",
  "  -l, --limit=STRING       limit to species",
  "  -m, --blosum=INT         BLOSUM matrix version",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_INT
  , ARG_FLOAT
} cmdline_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->outfile_given = 0 ;
  args_info->gtf_given = 0 ;
  args_info->tabular_given = 0 ;
  args_info->best_only_given = 0 ;
  args_info->best_region_given = 0 ;
  args_info->pars_given = 0 ;
  args_info->stop_early_given = 0 ;
  args_info->num_samples_given = 0 ;
  args_info->cutoff_given = 0 ;
  args_info->debug_file_given = 0 ;
  args_info->eps_given = 0 ;
  args_info->eps_cutoff_given = 0 ;
  args_info->eps_dir_given = 0 ;
  args_info->limit_given = 0 ;
  args_info->blosum_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  args_info->outfile_arg = NULL;
  args_info->outfile_orig = NULL;
  args_info->gtf_flag = 0;
  args_info->tabular_flag = 0;
  args_info->best_only_flag = 0;
  args_info->best_region_flag = 0;
  args_info->pars_arg = NULL;
  args_info->pars_orig = NULL;
  args_info->stop_early_flag = 0;
  args_info->num_samples_orig = NULL;
  args_info->cutoff_orig = NULL;
  args_info->debug_file_arg = NULL;
  args_info->debug_file_orig = NULL;
  args_info->eps_flag = 0;
  args_info->eps_cutoff_orig = NULL;
  args_info->eps_dir_arg = NULL;
  args_info->eps_dir_orig = NULL;
  args_info->limit_arg = NULL;
  args_info->limit_orig = NULL;
  args_info->blosum_orig = NULL;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->outfile_help = gengetopt_args_info_help[2] ;
  args_info->gtf_help = gengetopt_args_info_help[3] ;
  args_info->tabular_help = gengetopt_args_info_help[4] ;
  args_info->best_only_help = gengetopt_args_info_help[5] ;
  args_info->best_region_help = gengetopt_args_info_help[6] ;
  args_info->pars_help = gengetopt_args_info_help[7] ;
  args_info->stop_early_help = gengetopt_args_info_help[8] ;
  args_info->num_samples_help = gengetopt_args_info_help[9] ;
  args_info->cutoff_help = gengetopt_args_info_help[10] ;
  args_info->debug_file_help = gengetopt_args_info_help[11] ;
  args_info->eps_help = gengetopt_args_info_help[12] ;
  args_info->eps_cutoff_help = gengetopt_args_info_help[13] ;
  args_info->eps_dir_help = gengetopt_args_info_help[14] ;
  args_info->limit_help = gengetopt_args_info_help[15] ;
  args_info->blosum_help = gengetopt_args_info_help[16] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n", CMDLINE_PARSER_PACKAGE, CMDLINE_PARSER_VERSION);
}

static void print_help_common(void) {
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  if (strlen(gengetopt_args_info_usage) > 0)
    printf("\n%s\n", gengetopt_args_info_usage);

  printf("\n");

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n\n", gengetopt_args_info_description);
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = NULL;
  args_info->inputs_num = 0;
}

void
cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct cmdline_parser_params *
cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params = 
    (struct cmdline_parser_params *)malloc(sizeof(struct cmdline_parser_params));
  cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->outfile_arg));
  free_string_field (&(args_info->outfile_orig));
  free_string_field (&(args_info->pars_arg));
  free_string_field (&(args_info->pars_orig));
  free_string_field (&(args_info->num_samples_orig));
  free_string_field (&(args_info->cutoff_orig));
  free_string_field (&(args_info->debug_file_arg));
  free_string_field (&(args_info->debug_file_orig));
  free_string_field (&(args_info->eps_cutoff_orig));
  free_string_field (&(args_info->eps_dir_arg));
  free_string_field (&(args_info->eps_dir_orig));
  free_string_field (&(args_info->limit_arg));
  free_string_field (&(args_info->limit_orig));
  free_string_field (&(args_info->blosum_orig));
  
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);

  if (args_info->inputs_num)
    free (args_info->inputs);

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, char *values[])
{
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
cmdline_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->outfile_given)
    write_into_file(outfile, "outfile", args_info->outfile_orig, 0);
  if (args_info->gtf_given)
    write_into_file(outfile, "gtf", 0, 0 );
  if (args_info->tabular_given)
    write_into_file(outfile, "tabular", 0, 0 );
  if (args_info->best_only_given)
    write_into_file(outfile, "best-only", 0, 0 );
  if (args_info->best_region_given)
    write_into_file(outfile, "best-region", 0, 0 );
  if (args_info->pars_given)
    write_into_file(outfile, "pars", args_info->pars_orig, 0);
  if (args_info->stop_early_given)
    write_into_file(outfile, "stop-early", 0, 0 );
  if (args_info->num_samples_given)
    write_into_file(outfile, "num-samples", args_info->num_samples_orig, 0);
  if (args_info->cutoff_given)
    write_into_file(outfile, "cutoff", args_info->cutoff_orig, 0);
  if (args_info->debug_file_given)
    write_into_file(outfile, "debug-file", args_info->debug_file_orig, 0);
  if (args_info->eps_given)
    write_into_file(outfile, "eps", 0, 0 );
  if (args_info->eps_cutoff_given)
    write_into_file(outfile, "eps-cutoff", args_info->eps_cutoff_orig, 0);
  if (args_info->eps_dir_given)
    write_into_file(outfile, "eps-dir", args_info->eps_dir_orig, 0);
  if (args_info->limit_given)
    write_into_file(outfile, "limit", args_info->limit_orig, 0);
  if (args_info->blosum_given)
    write_into_file(outfile, "blosum", args_info->blosum_orig, 0);
  

  i = EXIT_SUCCESS;
  return i;
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = NULL;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser_ext (int argc, char * const *argv, struct gengetopt_args_info *args_info,
                   struct cmdline_parser_params *params)
{
  int result;
  result = cmdline_parser_internal (argc, argv, args_info, params, NULL);

  return result;
}

int
cmdline_parser2 (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = cmdline_parser_internal (argc, argv, args_info, &params, NULL);

  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  return EXIT_SUCCESS;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see cmdline_parser_params.check_ambiguity
 * @param override @see cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, char *possible_values[], const char *default_value,
               cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_FLOAT:
    if (val) *((float *)field) = (float)strtod (val, &stop_char);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_INT:
  case ARG_FLOAT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "outfile",	1, NULL, 'o' },
        { "gtf",	0, NULL, 'g' },
        { "tabular",	0, NULL, 't' },
        { "best-only",	0, NULL, 'b' },
        { "best-region",	0, NULL, 'r' },
        { "pars",	1, NULL, 'c' },
        { "stop-early",	0, NULL, 's' },
        { "num-samples",	1, NULL, 'n' },
        { "cutoff",	1, NULL, 'p' },
        { "debug-file",	1, NULL, 'z' },
        { "eps",	0, NULL, 'e' },
        { "eps-cutoff",	1, NULL, 'i' },
        { "eps-dir",	1, NULL, 'd' },
        { "limit",	1, NULL, 'l' },
        { "blosum",	1, NULL, 'm' },
        { NULL,	0, NULL, 0 }
      };

      c = getopt_long (argc, argv, "hVo:gtbrc:sn:p:z:ei:d:l:m:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->help_given),
              &(local_args_info.help_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "help", 'h',
              additional_error))
            goto failure;
          cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'V':	/* Print version and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->version_given),
              &(local_args_info.version_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "version", 'V',
              additional_error))
            goto failure;
          cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'o':	/* Output filename.  */
        
        
          if (update_arg( (void *)&(args_info->outfile_arg), 
               &(args_info->outfile_orig), &(args_info->outfile_given),
              &(local_args_info.outfile_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "outfile", 'o',
              additional_error))
            goto failure;
        
          break;
        case 'g':	/* GTF output.  */
        
        
          if (update_arg((void *)&(args_info->gtf_flag), 0, &(args_info->gtf_given),
              &(local_args_info.gtf_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "gtf", 'g',
              additional_error))
            goto failure;
        
          break;
        case 't':	/* Tab delimited output.  */
        
        
          if (update_arg((void *)&(args_info->tabular_flag), 0, &(args_info->tabular_given),
              &(local_args_info.tabular_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "tabular", 't',
              additional_error))
            goto failure;
        
          break;
        case 'b':	/* Print only best hit per alignment.  */
        
        
          if (update_arg((void *)&(args_info->best_only_flag), 0, &(args_info->best_only_given),
              &(local_args_info.best_only_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "best-only", 'b',
              additional_error))
            goto failure;
        
          break;
        case 'r':	/* Print all best non-overlapping hits per alignment.  */
        
        
          if (update_arg((void *)&(args_info->best_region_flag), 0, &(args_info->best_region_given),
              &(local_args_info.best_region_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "best-region", 'r',
              additional_error))
            goto failure;
        
          break;
        case 'c':	/* String with parameters.  */
        
        
          if (update_arg( (void *)&(args_info->pars_arg), 
               &(args_info->pars_orig), &(args_info->pars_given),
              &(local_args_info.pars_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "pars", 'c',
              additional_error))
            goto failure;
        
          break;
        case 's':	/* Don't calculate p-values if below cutoff.  */
        
        
          if (update_arg((void *)&(args_info->stop_early_flag), 0, &(args_info->stop_early_given),
              &(local_args_info.stop_early_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "stop-early", 's',
              additional_error))
            goto failure;
        
          break;
        case 'n':	/* Number of samples.  */
        
        
          if (update_arg( (void *)&(args_info->num_samples_arg), 
               &(args_info->num_samples_orig), &(args_info->num_samples_given),
              &(local_args_info.num_samples_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "num-samples", 'n',
              additional_error))
            goto failure;
        
          break;
        case 'p':	/* p-value cutoff.  */
        
        
          if (update_arg( (void *)&(args_info->cutoff_arg), 
               &(args_info->cutoff_orig), &(args_info->cutoff_given),
              &(local_args_info.cutoff_given), optarg, 0, 0, ARG_FLOAT,
              check_ambiguity, override, 0, 0,
              "cutoff", 'p',
              additional_error))
            goto failure;
        
          break;
        case 'z':	/* Debug file.  */
        
        
          if (update_arg( (void *)&(args_info->debug_file_arg), 
               &(args_info->debug_file_orig), &(args_info->debug_file_given),
              &(local_args_info.debug_file_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "debug-file", 'z',
              additional_error))
            goto failure;
        
          break;
        case 'e':	/* Postscript output.  */
        
        
          if (update_arg((void *)&(args_info->eps_flag), 0, &(args_info->eps_given),
              &(local_args_info.eps_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "eps", 'e',
              additional_error))
            goto failure;
        
          break;
        case 'i':	/* Postscript output p-value cutoff.  */
        
        
          if (update_arg( (void *)&(args_info->eps_cutoff_arg), 
               &(args_info->eps_cutoff_orig), &(args_info->eps_cutoff_given),
              &(local_args_info.eps_cutoff_given), optarg, 0, 0, ARG_FLOAT,
              check_ambiguity, override, 0, 0,
              "eps-cutoff", 'i',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* Postscript directory.  */
        
        
          if (update_arg( (void *)&(args_info->eps_dir_arg), 
               &(args_info->eps_dir_orig), &(args_info->eps_dir_given),
              &(local_args_info.eps_dir_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "eps-dir", 'd',
              additional_error))
            goto failure;
        
          break;
        case 'l':	/* limit to species.  */
        
        
          if (update_arg( (void *)&(args_info->limit_arg), 
               &(args_info->limit_orig), &(args_info->limit_given),
              &(local_args_info.limit_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "limit", 'l',
              additional_error))
            goto failure;
        
          break;
        case 'm':	/* BLOSUM matrix version.  */
        
        
          if (update_arg( (void *)&(args_info->blosum_arg), 
               &(args_info->blosum_orig), &(args_info->blosum_given),
              &(local_args_info.blosum_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "blosum", 'm',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */




  cmdline_parser_release (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
