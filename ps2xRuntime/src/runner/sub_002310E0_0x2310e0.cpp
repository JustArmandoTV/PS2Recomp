#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002310E0
// Address: 0x2310e0 - 0x2315b0
void sub_002310E0_0x2310e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002310E0_0x2310e0");
#endif

    switch (ctx->pc) {
        case 0x2310e0u: goto label_2310e0;
        case 0x2310e4u: goto label_2310e4;
        case 0x2310e8u: goto label_2310e8;
        case 0x2310ecu: goto label_2310ec;
        case 0x2310f0u: goto label_2310f0;
        case 0x2310f4u: goto label_2310f4;
        case 0x2310f8u: goto label_2310f8;
        case 0x2310fcu: goto label_2310fc;
        case 0x231100u: goto label_231100;
        case 0x231104u: goto label_231104;
        case 0x231108u: goto label_231108;
        case 0x23110cu: goto label_23110c;
        case 0x231110u: goto label_231110;
        case 0x231114u: goto label_231114;
        case 0x231118u: goto label_231118;
        case 0x23111cu: goto label_23111c;
        case 0x231120u: goto label_231120;
        case 0x231124u: goto label_231124;
        case 0x231128u: goto label_231128;
        case 0x23112cu: goto label_23112c;
        case 0x231130u: goto label_231130;
        case 0x231134u: goto label_231134;
        case 0x231138u: goto label_231138;
        case 0x23113cu: goto label_23113c;
        case 0x231140u: goto label_231140;
        case 0x231144u: goto label_231144;
        case 0x231148u: goto label_231148;
        case 0x23114cu: goto label_23114c;
        case 0x231150u: goto label_231150;
        case 0x231154u: goto label_231154;
        case 0x231158u: goto label_231158;
        case 0x23115cu: goto label_23115c;
        case 0x231160u: goto label_231160;
        case 0x231164u: goto label_231164;
        case 0x231168u: goto label_231168;
        case 0x23116cu: goto label_23116c;
        case 0x231170u: goto label_231170;
        case 0x231174u: goto label_231174;
        case 0x231178u: goto label_231178;
        case 0x23117cu: goto label_23117c;
        case 0x231180u: goto label_231180;
        case 0x231184u: goto label_231184;
        case 0x231188u: goto label_231188;
        case 0x23118cu: goto label_23118c;
        case 0x231190u: goto label_231190;
        case 0x231194u: goto label_231194;
        case 0x231198u: goto label_231198;
        case 0x23119cu: goto label_23119c;
        case 0x2311a0u: goto label_2311a0;
        case 0x2311a4u: goto label_2311a4;
        case 0x2311a8u: goto label_2311a8;
        case 0x2311acu: goto label_2311ac;
        case 0x2311b0u: goto label_2311b0;
        case 0x2311b4u: goto label_2311b4;
        case 0x2311b8u: goto label_2311b8;
        case 0x2311bcu: goto label_2311bc;
        case 0x2311c0u: goto label_2311c0;
        case 0x2311c4u: goto label_2311c4;
        case 0x2311c8u: goto label_2311c8;
        case 0x2311ccu: goto label_2311cc;
        case 0x2311d0u: goto label_2311d0;
        case 0x2311d4u: goto label_2311d4;
        case 0x2311d8u: goto label_2311d8;
        case 0x2311dcu: goto label_2311dc;
        case 0x2311e0u: goto label_2311e0;
        case 0x2311e4u: goto label_2311e4;
        case 0x2311e8u: goto label_2311e8;
        case 0x2311ecu: goto label_2311ec;
        case 0x2311f0u: goto label_2311f0;
        case 0x2311f4u: goto label_2311f4;
        case 0x2311f8u: goto label_2311f8;
        case 0x2311fcu: goto label_2311fc;
        case 0x231200u: goto label_231200;
        case 0x231204u: goto label_231204;
        case 0x231208u: goto label_231208;
        case 0x23120cu: goto label_23120c;
        case 0x231210u: goto label_231210;
        case 0x231214u: goto label_231214;
        case 0x231218u: goto label_231218;
        case 0x23121cu: goto label_23121c;
        case 0x231220u: goto label_231220;
        case 0x231224u: goto label_231224;
        case 0x231228u: goto label_231228;
        case 0x23122cu: goto label_23122c;
        case 0x231230u: goto label_231230;
        case 0x231234u: goto label_231234;
        case 0x231238u: goto label_231238;
        case 0x23123cu: goto label_23123c;
        case 0x231240u: goto label_231240;
        case 0x231244u: goto label_231244;
        case 0x231248u: goto label_231248;
        case 0x23124cu: goto label_23124c;
        case 0x231250u: goto label_231250;
        case 0x231254u: goto label_231254;
        case 0x231258u: goto label_231258;
        case 0x23125cu: goto label_23125c;
        case 0x231260u: goto label_231260;
        case 0x231264u: goto label_231264;
        case 0x231268u: goto label_231268;
        case 0x23126cu: goto label_23126c;
        case 0x231270u: goto label_231270;
        case 0x231274u: goto label_231274;
        case 0x231278u: goto label_231278;
        case 0x23127cu: goto label_23127c;
        case 0x231280u: goto label_231280;
        case 0x231284u: goto label_231284;
        case 0x231288u: goto label_231288;
        case 0x23128cu: goto label_23128c;
        case 0x231290u: goto label_231290;
        case 0x231294u: goto label_231294;
        case 0x231298u: goto label_231298;
        case 0x23129cu: goto label_23129c;
        case 0x2312a0u: goto label_2312a0;
        case 0x2312a4u: goto label_2312a4;
        case 0x2312a8u: goto label_2312a8;
        case 0x2312acu: goto label_2312ac;
        case 0x2312b0u: goto label_2312b0;
        case 0x2312b4u: goto label_2312b4;
        case 0x2312b8u: goto label_2312b8;
        case 0x2312bcu: goto label_2312bc;
        case 0x2312c0u: goto label_2312c0;
        case 0x2312c4u: goto label_2312c4;
        case 0x2312c8u: goto label_2312c8;
        case 0x2312ccu: goto label_2312cc;
        case 0x2312d0u: goto label_2312d0;
        case 0x2312d4u: goto label_2312d4;
        case 0x2312d8u: goto label_2312d8;
        case 0x2312dcu: goto label_2312dc;
        case 0x2312e0u: goto label_2312e0;
        case 0x2312e4u: goto label_2312e4;
        case 0x2312e8u: goto label_2312e8;
        case 0x2312ecu: goto label_2312ec;
        case 0x2312f0u: goto label_2312f0;
        case 0x2312f4u: goto label_2312f4;
        case 0x2312f8u: goto label_2312f8;
        case 0x2312fcu: goto label_2312fc;
        case 0x231300u: goto label_231300;
        case 0x231304u: goto label_231304;
        case 0x231308u: goto label_231308;
        case 0x23130cu: goto label_23130c;
        case 0x231310u: goto label_231310;
        case 0x231314u: goto label_231314;
        case 0x231318u: goto label_231318;
        case 0x23131cu: goto label_23131c;
        case 0x231320u: goto label_231320;
        case 0x231324u: goto label_231324;
        case 0x231328u: goto label_231328;
        case 0x23132cu: goto label_23132c;
        case 0x231330u: goto label_231330;
        case 0x231334u: goto label_231334;
        case 0x231338u: goto label_231338;
        case 0x23133cu: goto label_23133c;
        case 0x231340u: goto label_231340;
        case 0x231344u: goto label_231344;
        case 0x231348u: goto label_231348;
        case 0x23134cu: goto label_23134c;
        case 0x231350u: goto label_231350;
        case 0x231354u: goto label_231354;
        case 0x231358u: goto label_231358;
        case 0x23135cu: goto label_23135c;
        case 0x231360u: goto label_231360;
        case 0x231364u: goto label_231364;
        case 0x231368u: goto label_231368;
        case 0x23136cu: goto label_23136c;
        case 0x231370u: goto label_231370;
        case 0x231374u: goto label_231374;
        case 0x231378u: goto label_231378;
        case 0x23137cu: goto label_23137c;
        case 0x231380u: goto label_231380;
        case 0x231384u: goto label_231384;
        case 0x231388u: goto label_231388;
        case 0x23138cu: goto label_23138c;
        case 0x231390u: goto label_231390;
        case 0x231394u: goto label_231394;
        case 0x231398u: goto label_231398;
        case 0x23139cu: goto label_23139c;
        case 0x2313a0u: goto label_2313a0;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313a8u: goto label_2313a8;
        case 0x2313acu: goto label_2313ac;
        case 0x2313b0u: goto label_2313b0;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313bcu: goto label_2313bc;
        case 0x2313c0u: goto label_2313c0;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313ccu: goto label_2313cc;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313d4u: goto label_2313d4;
        case 0x2313d8u: goto label_2313d8;
        case 0x2313dcu: goto label_2313dc;
        case 0x2313e0u: goto label_2313e0;
        case 0x2313e4u: goto label_2313e4;
        case 0x2313e8u: goto label_2313e8;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f0u: goto label_2313f0;
        case 0x2313f4u: goto label_2313f4;
        case 0x2313f8u: goto label_2313f8;
        case 0x2313fcu: goto label_2313fc;
        case 0x231400u: goto label_231400;
        case 0x231404u: goto label_231404;
        case 0x231408u: goto label_231408;
        case 0x23140cu: goto label_23140c;
        case 0x231410u: goto label_231410;
        case 0x231414u: goto label_231414;
        case 0x231418u: goto label_231418;
        case 0x23141cu: goto label_23141c;
        case 0x231420u: goto label_231420;
        case 0x231424u: goto label_231424;
        case 0x231428u: goto label_231428;
        case 0x23142cu: goto label_23142c;
        case 0x231430u: goto label_231430;
        case 0x231434u: goto label_231434;
        case 0x231438u: goto label_231438;
        case 0x23143cu: goto label_23143c;
        case 0x231440u: goto label_231440;
        case 0x231444u: goto label_231444;
        case 0x231448u: goto label_231448;
        case 0x23144cu: goto label_23144c;
        case 0x231450u: goto label_231450;
        case 0x231454u: goto label_231454;
        case 0x231458u: goto label_231458;
        case 0x23145cu: goto label_23145c;
        case 0x231460u: goto label_231460;
        case 0x231464u: goto label_231464;
        case 0x231468u: goto label_231468;
        case 0x23146cu: goto label_23146c;
        case 0x231470u: goto label_231470;
        case 0x231474u: goto label_231474;
        case 0x231478u: goto label_231478;
        case 0x23147cu: goto label_23147c;
        case 0x231480u: goto label_231480;
        case 0x231484u: goto label_231484;
        case 0x231488u: goto label_231488;
        case 0x23148cu: goto label_23148c;
        case 0x231490u: goto label_231490;
        case 0x231494u: goto label_231494;
        case 0x231498u: goto label_231498;
        case 0x23149cu: goto label_23149c;
        case 0x2314a0u: goto label_2314a0;
        case 0x2314a4u: goto label_2314a4;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314acu: goto label_2314ac;
        case 0x2314b0u: goto label_2314b0;
        case 0x2314b4u: goto label_2314b4;
        case 0x2314b8u: goto label_2314b8;
        case 0x2314bcu: goto label_2314bc;
        case 0x2314c0u: goto label_2314c0;
        case 0x2314c4u: goto label_2314c4;
        case 0x2314c8u: goto label_2314c8;
        case 0x2314ccu: goto label_2314cc;
        case 0x2314d0u: goto label_2314d0;
        case 0x2314d4u: goto label_2314d4;
        case 0x2314d8u: goto label_2314d8;
        case 0x2314dcu: goto label_2314dc;
        case 0x2314e0u: goto label_2314e0;
        case 0x2314e4u: goto label_2314e4;
        case 0x2314e8u: goto label_2314e8;
        case 0x2314ecu: goto label_2314ec;
        case 0x2314f0u: goto label_2314f0;
        case 0x2314f4u: goto label_2314f4;
        case 0x2314f8u: goto label_2314f8;
        case 0x2314fcu: goto label_2314fc;
        case 0x231500u: goto label_231500;
        case 0x231504u: goto label_231504;
        case 0x231508u: goto label_231508;
        case 0x23150cu: goto label_23150c;
        case 0x231510u: goto label_231510;
        case 0x231514u: goto label_231514;
        case 0x231518u: goto label_231518;
        case 0x23151cu: goto label_23151c;
        case 0x231520u: goto label_231520;
        case 0x231524u: goto label_231524;
        case 0x231528u: goto label_231528;
        case 0x23152cu: goto label_23152c;
        case 0x231530u: goto label_231530;
        case 0x231534u: goto label_231534;
        case 0x231538u: goto label_231538;
        case 0x23153cu: goto label_23153c;
        case 0x231540u: goto label_231540;
        case 0x231544u: goto label_231544;
        case 0x231548u: goto label_231548;
        case 0x23154cu: goto label_23154c;
        case 0x231550u: goto label_231550;
        case 0x231554u: goto label_231554;
        case 0x231558u: goto label_231558;
        case 0x23155cu: goto label_23155c;
        case 0x231560u: goto label_231560;
        case 0x231564u: goto label_231564;
        case 0x231568u: goto label_231568;
        case 0x23156cu: goto label_23156c;
        case 0x231570u: goto label_231570;
        case 0x231574u: goto label_231574;
        case 0x231578u: goto label_231578;
        case 0x23157cu: goto label_23157c;
        case 0x231580u: goto label_231580;
        case 0x231584u: goto label_231584;
        case 0x231588u: goto label_231588;
        case 0x23158cu: goto label_23158c;
        case 0x231590u: goto label_231590;
        case 0x231594u: goto label_231594;
        case 0x231598u: goto label_231598;
        case 0x23159cu: goto label_23159c;
        case 0x2315a0u: goto label_2315a0;
        case 0x2315a4u: goto label_2315a4;
        case 0x2315a8u: goto label_2315a8;
        case 0x2315acu: goto label_2315ac;
        default: break;
    }

    ctx->pc = 0x2310e0u;

label_2310e0:
    // 0x2310e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2310e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2310e4:
    // 0x2310e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2310e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2310e8:
    // 0x2310e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2310e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2310ec:
    // 0x2310ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2310ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2310f0:
    // 0x2310f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2310f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2310f4:
    // 0x2310f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2310f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2310f8:
    // 0x2310f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2310f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2310fc:
    // 0x2310fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2310fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231100:
    // 0x231100: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x231100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231104:
    // 0x231104: 0x1a400122  blez        $s2, . + 4 + (0x122 << 2)
label_231108:
    if (ctx->pc == 0x231108u) {
        ctx->pc = 0x231108u;
            // 0x231108: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x23110Cu;
        goto label_23110c;
    }
    ctx->pc = 0x231104u;
    {
        const bool branch_taken_0x231104 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x231108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231104u;
            // 0x231108: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231104) {
            ctx->pc = 0x231590u;
            goto label_231590;
        }
    }
    ctx->pc = 0x23110Cu;
label_23110c:
    // 0x23110c: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x23110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_231110:
    // 0x231110: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_231114:
    if (ctx->pc == 0x231114u) {
        ctx->pc = 0x231114u;
            // 0x231114: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x231118u;
        goto label_231118;
    }
    ctx->pc = 0x231110u;
    {
        const bool branch_taken_0x231110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231110) {
            ctx->pc = 0x231114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231110u;
            // 0x231114: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231138u;
            goto label_231138;
        }
    }
    ctx->pc = 0x231118u;
label_231118:
    // 0x231118: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x231118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23111c:
    // 0x23111c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_231120:
    // 0x231120: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x231120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
label_231124:
    // 0x231124: 0xafb30084  sw          $s3, 0x84($sp)
    ctx->pc = 0x231124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 19));
label_231128:
    // 0x231128: 0xc08d1cc  jal         func_234730
label_23112c:
    if (ctx->pc == 0x23112Cu) {
        ctx->pc = 0x23112Cu;
            // 0x23112c: 0xa7b20088  sh          $s2, 0x88($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x231130u;
        goto label_231130;
    }
    ctx->pc = 0x231128u;
    SET_GPR_U32(ctx, 31, 0x231130u);
    ctx->pc = 0x23112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231128u;
            // 0x23112c: 0xa7b20088  sh          $s2, 0x88($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231130u; }
        if (ctx->pc != 0x231130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231130u; }
        if (ctx->pc != 0x231130u) { return; }
    }
    ctx->pc = 0x231130u;
label_231130:
    // 0x231130: 0x10000118  b           . + 4 + (0x118 << 2)
label_231134:
    if (ctx->pc == 0x231134u) {
        ctx->pc = 0x231134u;
            // 0x231134: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x231138u;
        goto label_231138;
    }
    ctx->pc = 0x231130u;
    {
        const bool branch_taken_0x231130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231130u;
            // 0x231134: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231130) {
            ctx->pc = 0x231594u;
            goto label_231594;
        }
    }
    ctx->pc = 0x231138u;
label_231138:
    // 0x231138: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x231138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_23113c:
    // 0x23113c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_231140:
    // 0x231140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x231140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_231144:
    // 0x231144: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_231148:
    // 0x231148: 0xae840084  sw          $a0, 0x84($s4)
    ctx->pc = 0x231148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 4));
label_23114c:
    // 0x23114c: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x23114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_231150:
    // 0x231150: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x231150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_231154:
    // 0x231154: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x231154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_231158:
    // 0x231158: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23115c:
    if (ctx->pc == 0x23115Cu) {
        ctx->pc = 0x23115Cu;
            // 0x23115c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x231160u;
        goto label_231160;
    }
    ctx->pc = 0x231158u;
    {
        const bool branch_taken_0x231158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231158u;
            // 0x23115c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231158) {
            ctx->pc = 0x231194u;
            goto label_231194;
        }
    }
    ctx->pc = 0x231160u;
label_231160:
    // 0x231160: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x231160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_231164:
    // 0x231164: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x231164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_231168:
    // 0x231168: 0x2463c940  addiu       $v1, $v1, -0x36C0
    ctx->pc = 0x231168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953280));
label_23116c:
    // 0x23116c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_231170:
    // 0x231170: 0x2442c950  addiu       $v0, $v0, -0x36B0
    ctx->pc = 0x231170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
label_231174:
    // 0x231174: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x231174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_231178:
    // 0x231178: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x231178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_23117c:
    // 0x23117c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_231180:
    // 0x231180: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x231180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_231184:
    // 0x231184: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x231184u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_231188:
    // 0x231188: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x231188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23118c:
    // 0x23118c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23118cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_231190:
    // 0x231190: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x231190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_231194:
    // 0x231194: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_231198:
    // 0x231198: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23119c:
    // 0x23119c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23119cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2311a0:
    // 0x2311a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2311a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2311a4:
    // 0x2311a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2311a8:
    // 0x2311a8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2311ac:
    // 0x2311ac: 0x320f809  jalr        $t9
label_2311b0:
    if (ctx->pc == 0x2311B0u) {
        ctx->pc = 0x2311B0u;
            // 0x2311b0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2311B4u;
        goto label_2311b4;
    }
    ctx->pc = 0x2311ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2311B4u);
        ctx->pc = 0x2311B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2311ACu;
            // 0x2311b0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2311B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2311B4u; }
            if (ctx->pc != 0x2311B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2311B4u;
label_2311b4:
    // 0x2311b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2311b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2311b8:
    // 0x2311b8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2311bc:
    // 0x2311bc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2311bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2311c0:
    // 0x2311c0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2311c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2311c4:
    // 0x2311c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2311c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2311c8:
    // 0x2311c8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2311c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2311cc:
    // 0x2311cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2311d0:
    // 0x2311d0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2311d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_2311d4:
    // 0x2311d4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2311d8:
    // 0x2311d8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2311d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2311dc:
    // 0x2311dc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2311dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2311e0:
    // 0x2311e0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2311e4:
    // 0x2311e4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2311e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2311e8:
    // 0x2311e8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2311e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2311ec:
    // 0x2311ec: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2311f0:
    if (ctx->pc == 0x2311F0u) {
        ctx->pc = 0x2311F0u;
            // 0x2311f0: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2311F4u;
        goto label_2311f4;
    }
    ctx->pc = 0x2311ECu;
    {
        const bool branch_taken_0x2311ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2311F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2311ECu;
            // 0x2311f0: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311ec) {
            ctx->pc = 0x2311FCu;
            goto label_2311fc;
        }
    }
    ctx->pc = 0x2311F4u;
label_2311f4:
    // 0x2311f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2311f8:
    if (ctx->pc == 0x2311F8u) {
        ctx->pc = 0x2311F8u;
            // 0x2311f8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2311FCu;
        goto label_2311fc;
    }
    ctx->pc = 0x2311F4u;
    {
        const bool branch_taken_0x2311f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2311F4u;
            // 0x2311f8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311f4) {
            ctx->pc = 0x23120Cu;
            goto label_23120c;
        }
    }
    ctx->pc = 0x2311FCu;
label_2311fc:
    // 0x2311fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2311fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231200:
    // 0x231200: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_231204:
    // 0x231204: 0x320f809  jalr        $t9
label_231208:
    if (ctx->pc == 0x231208u) {
        ctx->pc = 0x23120Cu;
        goto label_23120c;
    }
    ctx->pc = 0x231204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23120Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23120Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23120Cu; }
            if (ctx->pc != 0x23120Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23120Cu;
label_23120c:
    // 0x23120c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23120cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_231210:
    // 0x231210: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x231210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_231214:
    // 0x231214: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_231218:
    // 0x231218: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x231218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23121c:
    // 0x23121c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x23121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_231220:
    // 0x231220: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x231220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_231224:
    // 0x231224: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x231224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_231228:
    // 0x231228: 0x12700013  beq         $s3, $s0, . + 4 + (0x13 << 2)
label_23122c:
    if (ctx->pc == 0x23122Cu) {
        ctx->pc = 0x23122Cu;
            // 0x23122c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x231230u;
        goto label_231230;
    }
    ctx->pc = 0x231228u;
    {
        const bool branch_taken_0x231228 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231228u;
            // 0x23122c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231228) {
            ctx->pc = 0x231278u;
            goto label_231278;
        }
    }
    ctx->pc = 0x231230u;
label_231230:
    // 0x231230: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x231230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_231234:
    // 0x231234: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x231234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_231238:
    // 0x231238: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x231238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_23123c:
    // 0x23123c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_231240:
    if (ctx->pc == 0x231240u) {
        ctx->pc = 0x231244u;
        goto label_231244;
    }
    ctx->pc = 0x23123Cu;
    {
        const bool branch_taken_0x23123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23123c) {
            ctx->pc = 0x231268u;
            goto label_231268;
        }
    }
    ctx->pc = 0x231244u;
label_231244:
    // 0x231244: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x231244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_231248:
    // 0x231248: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x231248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_23124c:
    // 0x23124c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x23124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_231250:
    // 0x231250: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x231250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_231254:
    // 0x231254: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_231258:
    // 0x231258: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x231258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_23125c:
    // 0x23125c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231260:
    // 0x231260: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x231260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_231264:
    // 0x231264: 0x0  nop
    ctx->pc = 0x231264u;
    // NOP
label_231268:
    // 0x231268: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x231268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_23126c:
    // 0x23126c: 0x54d0fff1  bnel        $a2, $s0, . + 4 + (-0xF << 2)
label_231270:
    if (ctx->pc == 0x231270u) {
        ctx->pc = 0x231270u;
            // 0x231270: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x231274u;
        goto label_231274;
    }
    ctx->pc = 0x23126Cu;
    {
        const bool branch_taken_0x23126c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 16));
        if (branch_taken_0x23126c) {
            ctx->pc = 0x231270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23126Cu;
            // 0x231270: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231234;
        }
    }
    ctx->pc = 0x231274u;
label_231274:
    // 0x231274: 0x0  nop
    ctx->pc = 0x231274u;
    // NOP
label_231278:
    // 0x231278: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23127c:
    // 0x23127c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_231280:
    // 0x231280: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x231280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_231284:
    // 0x231284: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x231284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_231288:
    // 0x231288: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_23128c:
    // 0x23128c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23128cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_231290:
    // 0x231290: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_231294:
    if (ctx->pc == 0x231294u) {
        ctx->pc = 0x231294u;
            // 0x231294: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x231298u;
        goto label_231298;
    }
    ctx->pc = 0x231290u;
    {
        const bool branch_taken_0x231290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231290u;
            // 0x231294: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231290) {
            ctx->pc = 0x2312C0u;
            goto label_2312c0;
        }
    }
    ctx->pc = 0x231298u;
label_231298:
    // 0x231298: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23129c:
    // 0x23129c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2312a0:
    // 0x2312a0: 0x2442c960  addiu       $v0, $v0, -0x36A0
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
label_2312a4:
    // 0x2312a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2312a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2312a8:
    // 0x2312a8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2312a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2312ac:
    // 0x2312ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2312acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2312b0:
    // 0x2312b0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2312b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2312b4:
    // 0x2312b4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2312b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2312b8:
    // 0x2312b8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2312b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2312bc:
    // 0x2312bc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2312bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2312c0:
    // 0x2312c0: 0x8e910318  lw          $s1, 0x318($s4)
    ctx->pc = 0x2312c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
label_2312c4:
    // 0x2312c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2312c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2312c8:
    // 0x2312c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2312c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2312cc:
    // 0x2312cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2312d0:
    // 0x2312d0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2312d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_2312d4:
    // 0x2312d4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2312d8:
    // 0x2312d8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2312dc:
    // 0x2312dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2312dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2312e0:
    // 0x2312e0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2312e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_2312e4:
    // 0x2312e4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2312e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2312e8:
    // 0x2312e8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2312e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_2312ec:
    // 0x2312ec: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2312ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2312f0:
    // 0x2312f0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2312f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2312f4:
    // 0x2312f4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2312f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2312f8:
    // 0x2312f8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2312f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2312fc:
    // 0x2312fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_231300:
    if (ctx->pc == 0x231300u) {
        ctx->pc = 0x231300u;
            // 0x231300: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x231304u;
        goto label_231304;
    }
    ctx->pc = 0x2312FCu;
    {
        const bool branch_taken_0x2312fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x231300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2312FCu;
            // 0x231300: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312fc) {
            ctx->pc = 0x23130Cu;
            goto label_23130c;
        }
    }
    ctx->pc = 0x231304u;
label_231304:
    // 0x231304: 0x10000005  b           . + 4 + (0x5 << 2)
label_231308:
    if (ctx->pc == 0x231308u) {
        ctx->pc = 0x231308u;
            // 0x231308: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23130Cu;
        goto label_23130c;
    }
    ctx->pc = 0x231304u;
    {
        const bool branch_taken_0x231304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231304u;
            // 0x231308: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231304) {
            ctx->pc = 0x23131Cu;
            goto label_23131c;
        }
    }
    ctx->pc = 0x23130Cu;
label_23130c:
    // 0x23130c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23130cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231310:
    // 0x231310: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x231310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_231314:
    // 0x231314: 0x320f809  jalr        $t9
label_231318:
    if (ctx->pc == 0x231318u) {
        ctx->pc = 0x23131Cu;
        goto label_23131c;
    }
    ctx->pc = 0x231314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23131Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23131Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23131Cu; }
            if (ctx->pc != 0x23131Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23131Cu;
label_23131c:
    // 0x23131c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23131cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_231320:
    // 0x231320: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x231320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_231324:
    // 0x231324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_231328:
    // 0x231328: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x231328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_23132c:
    // 0x23132c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x23132cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_231330:
    // 0x231330: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_231334:
    // 0x231334: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x231334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_231338:
    // 0x231338: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x231338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_23133c:
    // 0x23133c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23133cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231340:
    // 0x231340: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_231344:
    // 0x231344: 0x320f809  jalr        $t9
label_231348:
    if (ctx->pc == 0x231348u) {
        ctx->pc = 0x231348u;
            // 0x231348: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23134Cu;
        goto label_23134c;
    }
    ctx->pc = 0x231344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23134Cu);
        ctx->pc = 0x231348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231344u;
            // 0x231348: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23134Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23134Cu; }
            if (ctx->pc != 0x23134Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23134Cu;
label_23134c:
    // 0x23134c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_231350:
    // 0x231350: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_231354:
    // 0x231354: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x231354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_231358:
    // 0x231358: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23135c:
    // 0x23135c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x23135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_231360:
    // 0x231360: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x231360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_231364:
    // 0x231364: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_231368:
    if (ctx->pc == 0x231368u) {
        ctx->pc = 0x231368u;
            // 0x231368: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x23136Cu;
        goto label_23136c;
    }
    ctx->pc = 0x231364u;
    {
        const bool branch_taken_0x231364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231364u;
            // 0x231368: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231364) {
            ctx->pc = 0x231394u;
            goto label_231394;
        }
    }
    ctx->pc = 0x23136Cu;
label_23136c:
    // 0x23136c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_231370:
    // 0x231370: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x231370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_231374:
    // 0x231374: 0x2442c970  addiu       $v0, $v0, -0x3690
    ctx->pc = 0x231374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953328));
label_231378:
    // 0x231378: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x231378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23137c:
    // 0x23137c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_231380:
    // 0x231380: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x231380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_231384:
    // 0x231384: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_231388:
    // 0x231388: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_23138c:
    // 0x23138c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x23138cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_231390:
    // 0x231390: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x231390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_231394:
    // 0x231394: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x231394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_231398:
    // 0x231398: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23139c:
    // 0x23139c: 0xc07fb6c  jal         func_1FEDB0
label_2313a0:
    if (ctx->pc == 0x2313A0u) {
        ctx->pc = 0x2313A0u;
            // 0x2313a0: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x2313A4u;
        goto label_2313a4;
    }
    ctx->pc = 0x23139Cu;
    SET_GPR_U32(ctx, 31, 0x2313A4u);
    ctx->pc = 0x2313A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23139Cu;
            // 0x2313a0: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2313A4u; }
        if (ctx->pc != 0x2313A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2313A4u; }
        if (ctx->pc != 0x2313A4u) { return; }
    }
    ctx->pc = 0x2313A4u;
label_2313a4:
    // 0x2313a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2313a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2313a8:
    // 0x2313a8: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x2313a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2313ac:
    // 0x2313ac: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2313acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_2313b0:
    // 0x2313b0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2313b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2313b4:
    // 0x2313b4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2313b8:
    // 0x2313b8: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_2313bc:
    if (ctx->pc == 0x2313BCu) {
        ctx->pc = 0x2313BCu;
            // 0x2313bc: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x2313C0u;
        goto label_2313c0;
    }
    ctx->pc = 0x2313B8u;
    {
        const bool branch_taken_0x2313b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2313b8) {
            ctx->pc = 0x2313BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2313B8u;
            // 0x2313bc: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2313D4u;
            goto label_2313d4;
        }
    }
    ctx->pc = 0x2313C0u;
label_2313c0:
    // 0x2313c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2313c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2313c4:
    // 0x2313c4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2313c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2313c8:
    // 0x2313c8: 0x320f809  jalr        $t9
label_2313cc:
    if (ctx->pc == 0x2313CCu) {
        ctx->pc = 0x2313D0u;
        goto label_2313d0;
    }
    ctx->pc = 0x2313C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2313D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2313D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2313D0u; }
            if (ctx->pc != 0x2313D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2313D0u;
label_2313d0:
    // 0x2313d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2313d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2313d4:
    // 0x2313d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2313d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2313d8:
    // 0x2313d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2313d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2313dc:
    // 0x2313dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2313e0:
    if (ctx->pc == 0x2313E0u) {
        ctx->pc = 0x2313E4u;
        goto label_2313e4;
    }
    ctx->pc = 0x2313DCu;
    {
        const bool branch_taken_0x2313dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2313dc) {
            ctx->pc = 0x231408u;
            goto label_231408;
        }
    }
    ctx->pc = 0x2313E4u;
label_2313e4:
    // 0x2313e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2313e8:
    // 0x2313e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2313ec:
    // 0x2313ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2313ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2313f0:
    // 0x2313f0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2313f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2313f4:
    // 0x2313f4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2313f8:
    // 0x2313f8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2313f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2313fc:
    // 0x2313fc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2313fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_231400:
    // 0x231400: 0xc0a7ab4  jal         func_29EAD0
label_231404:
    if (ctx->pc == 0x231404u) {
        ctx->pc = 0x231404u;
            // 0x231404: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x231408u;
        goto label_231408;
    }
    ctx->pc = 0x231400u;
    SET_GPR_U32(ctx, 31, 0x231408u);
    ctx->pc = 0x231404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231400u;
            // 0x231404: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231408u; }
        if (ctx->pc != 0x231408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231408u; }
        if (ctx->pc != 0x231408u) { return; }
    }
    ctx->pc = 0x231408u;
label_231408:
    // 0x231408: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x231408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23140c:
    // 0x23140c: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_231410:
    // 0x231410: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_231414:
    // 0x231414: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x231414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_231418:
    // 0x231418: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x231418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23141c:
    // 0x23141c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_231420:
    if (ctx->pc == 0x231420u) {
        ctx->pc = 0x231420u;
            // 0x231420: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x231424u;
        goto label_231424;
    }
    ctx->pc = 0x23141Cu;
    {
        const bool branch_taken_0x23141c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23141c) {
            ctx->pc = 0x231420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23141Cu;
            // 0x231420: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231438u;
            goto label_231438;
        }
    }
    ctx->pc = 0x231424u;
label_231424:
    // 0x231424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231428:
    // 0x231428: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x231428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23142c:
    // 0x23142c: 0x320f809  jalr        $t9
label_231430:
    if (ctx->pc == 0x231430u) {
        ctx->pc = 0x231434u;
        goto label_231434;
    }
    ctx->pc = 0x23142Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x231434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231434u; }
            if (ctx->pc != 0x231434u) { return; }
        }
        }
    }
    ctx->pc = 0x231434u;
label_231434:
    // 0x231434: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_231438:
    // 0x231438: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23143c:
    // 0x23143c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_231440:
    // 0x231440: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_231444:
    if (ctx->pc == 0x231444u) {
        ctx->pc = 0x231448u;
        goto label_231448;
    }
    ctx->pc = 0x231440u;
    {
        const bool branch_taken_0x231440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231440) {
            ctx->pc = 0x23146Cu;
            goto label_23146c;
        }
    }
    ctx->pc = 0x231448u;
label_231448:
    // 0x231448: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x231448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23144c:
    // 0x23144c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_231450:
    // 0x231450: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_231454:
    // 0x231454: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_231458:
    // 0x231458: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x231458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_23145c:
    // 0x23145c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_231460:
    // 0x231460: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x231460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_231464:
    // 0x231464: 0xc0a7ab4  jal         func_29EAD0
label_231468:
    if (ctx->pc == 0x231468u) {
        ctx->pc = 0x231468u;
            // 0x231468: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23146Cu;
        goto label_23146c;
    }
    ctx->pc = 0x231464u;
    SET_GPR_U32(ctx, 31, 0x23146Cu);
    ctx->pc = 0x231468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231464u;
            // 0x231468: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23146Cu; }
        if (ctx->pc != 0x23146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23146Cu; }
        if (ctx->pc != 0x23146Cu) { return; }
    }
    ctx->pc = 0x23146Cu;
label_23146c:
    // 0x23146c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23146cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_231470:
    // 0x231470: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x231470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_231474:
    // 0x231474: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_231478:
    // 0x231478: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x231478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23147c:
    // 0x23147c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x23147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_231480:
    // 0x231480: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x231480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_231484:
    // 0x231484: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_231488:
    if (ctx->pc == 0x231488u) {
        ctx->pc = 0x231488u;
            // 0x231488: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x23148Cu;
        goto label_23148c;
    }
    ctx->pc = 0x231484u;
    {
        const bool branch_taken_0x231484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231484u;
            // 0x231488: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231484) {
            ctx->pc = 0x2314B4u;
            goto label_2314b4;
        }
    }
    ctx->pc = 0x23148Cu;
label_23148c:
    // 0x23148c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x23148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_231490:
    // 0x231490: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x231490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_231494:
    // 0x231494: 0x2463c980  addiu       $v1, $v1, -0x3680
    ctx->pc = 0x231494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953344));
label_231498:
    // 0x231498: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x231498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23149c:
    // 0x23149c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2314a0:
    // 0x2314a0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2314a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2314a4:
    // 0x2314a4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2314a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_2314a8:
    // 0x2314a8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2314a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2314ac:
    // 0x2314ac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2314acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2314b0:
    // 0x2314b0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2314b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2314b4:
    // 0x2314b4: 0x12700018  beq         $s3, $s0, . + 4 + (0x18 << 2)
label_2314b8:
    if (ctx->pc == 0x2314B8u) {
        ctx->pc = 0x2314BCu;
        goto label_2314bc;
    }
    ctx->pc = 0x2314B4u;
    {
        const bool branch_taken_0x2314b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x2314b4) {
            ctx->pc = 0x231518u;
            goto label_231518;
        }
    }
    ctx->pc = 0x2314BCu;
label_2314bc:
    // 0x2314bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2314bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2314c0:
    // 0x2314c0: 0xc08e458  jal         func_239160
label_2314c4:
    if (ctx->pc == 0x2314C4u) {
        ctx->pc = 0x2314C4u;
            // 0x2314c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2314C8u;
        goto label_2314c8;
    }
    ctx->pc = 0x2314C0u;
    SET_GPR_U32(ctx, 31, 0x2314C8u);
    ctx->pc = 0x2314C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2314C0u;
            // 0x2314c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239160u;
    if (runtime->hasFunction(0x239160u)) {
        auto targetFn = runtime->lookupFunction(0x239160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314C8u; }
        if (ctx->pc != 0x2314C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239160_0x239160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314C8u; }
        if (ctx->pc != 0x2314C8u) { return; }
    }
    ctx->pc = 0x2314C8u;
label_2314c8:
    // 0x2314c8: 0xc089424  jal         func_225090
label_2314cc:
    if (ctx->pc == 0x2314CCu) {
        ctx->pc = 0x2314CCu;
            // 0x2314cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2314D0u;
        goto label_2314d0;
    }
    ctx->pc = 0x2314C8u;
    SET_GPR_U32(ctx, 31, 0x2314D0u);
    ctx->pc = 0x2314CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2314C8u;
            // 0x2314cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225090u;
    if (runtime->hasFunction(0x225090u)) {
        auto targetFn = runtime->lookupFunction(0x225090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314D0u; }
        if (ctx->pc != 0x2314D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225090_0x225090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314D0u; }
        if (ctx->pc != 0x2314D0u) { return; }
    }
    ctx->pc = 0x2314D0u;
label_2314d0:
    // 0x2314d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2314d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2314d4:
    // 0x2314d4: 0xc08f91c  jal         func_23E470
label_2314d8:
    if (ctx->pc == 0x2314D8u) {
        ctx->pc = 0x2314D8u;
            // 0x2314d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2314DCu;
        goto label_2314dc;
    }
    ctx->pc = 0x2314D4u;
    SET_GPR_U32(ctx, 31, 0x2314DCu);
    ctx->pc = 0x2314D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2314D4u;
            // 0x2314d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314DCu; }
        if (ctx->pc != 0x2314DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E470_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314DCu; }
        if (ctx->pc != 0x2314DCu) { return; }
    }
    ctx->pc = 0x2314DCu;
label_2314dc:
    // 0x2314dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2314e0:
    // 0x2314e0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2314e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2314e4:
    // 0x2314e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2314e8:
    if (ctx->pc == 0x2314E8u) {
        ctx->pc = 0x2314ECu;
        goto label_2314ec;
    }
    ctx->pc = 0x2314E4u;
    {
        const bool branch_taken_0x2314e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2314e4) {
            ctx->pc = 0x231500u;
            goto label_231500;
        }
    }
    ctx->pc = 0x2314ECu;
label_2314ec:
    // 0x2314ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2314ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2314f0:
    // 0x2314f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2314f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2314f4:
    // 0x2314f4: 0x320f809  jalr        $t9
label_2314f8:
    if (ctx->pc == 0x2314F8u) {
        ctx->pc = 0x2314FCu;
        goto label_2314fc;
    }
    ctx->pc = 0x2314F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2314FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2314FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2314FCu; }
            if (ctx->pc != 0x2314FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2314FCu;
label_2314fc:
    // 0x2314fc: 0x0  nop
    ctx->pc = 0x2314fcu;
    // NOP
label_231500:
    // 0x231500: 0xc08d414  jal         func_235050
label_231504:
    if (ctx->pc == 0x231504u) {
        ctx->pc = 0x231504u;
            // 0x231504: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x231508u;
        goto label_231508;
    }
    ctx->pc = 0x231500u;
    SET_GPR_U32(ctx, 31, 0x231508u);
    ctx->pc = 0x231504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231500u;
            // 0x231504: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231508u; }
        if (ctx->pc != 0x231508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231508u; }
        if (ctx->pc != 0x231508u) { return; }
    }
    ctx->pc = 0x231508u;
label_231508:
    // 0x231508: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x231508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_23150c:
    // 0x23150c: 0x5670ffec  bnel        $s3, $s0, . + 4 + (-0x14 << 2)
label_231510:
    if (ctx->pc == 0x231510u) {
        ctx->pc = 0x231510u;
            // 0x231510: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x231514u;
        goto label_231514;
    }
    ctx->pc = 0x23150Cu;
    {
        const bool branch_taken_0x23150c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x23150c) {
            ctx->pc = 0x231510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23150Cu;
            // 0x231510: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2314C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2314c0;
        }
    }
    ctx->pc = 0x231514u;
label_231514:
    // 0x231514: 0x0  nop
    ctx->pc = 0x231514u;
    // NOP
label_231518:
    // 0x231518: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x231518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_23151c:
    // 0x23151c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_231520:
    // 0x231520: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x231520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_231524:
    // 0x231524: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x231524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_231528:
    // 0x231528: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x231528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_23152c:
    // 0x23152c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x23152cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_231530:
    // 0x231530: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_231534:
    if (ctx->pc == 0x231534u) {
        ctx->pc = 0x231534u;
            // 0x231534: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x231538u;
        goto label_231538;
    }
    ctx->pc = 0x231530u;
    {
        const bool branch_taken_0x231530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231530u;
            // 0x231534: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231530) {
            ctx->pc = 0x231560u;
            goto label_231560;
        }
    }
    ctx->pc = 0x231538u;
label_231538:
    // 0x231538: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_23153c:
    // 0x23153c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23153cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_231540:
    // 0x231540: 0x2463c8a8  addiu       $v1, $v1, -0x3758
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953128));
label_231544:
    // 0x231544: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x231544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_231548:
    // 0x231548: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_23154c:
    // 0x23154c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23154cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_231550:
    // 0x231550: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x231550u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_231554:
    // 0x231554: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x231554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_231558:
    // 0x231558: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x231558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_23155c:
    // 0x23155c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23155cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_231560:
    // 0x231560: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x231560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_231564:
    // 0x231564: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231568:
    // 0x231568: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_23156c:
    if (ctx->pc == 0x23156Cu) {
        ctx->pc = 0x23156Cu;
            // 0x23156c: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x231570u;
        goto label_231570;
    }
    ctx->pc = 0x231568u;
    {
        const bool branch_taken_0x231568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231568u;
            // 0x23156c: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231568) {
            ctx->pc = 0x231590u;
            goto label_231590;
        }
    }
    ctx->pc = 0x231570u;
label_231570:
    // 0x231570: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x231570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_231574:
    // 0x231574: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_231578:
    if (ctx->pc == 0x231578u) {
        ctx->pc = 0x23157Cu;
        goto label_23157c;
    }
    ctx->pc = 0x231574u;
    {
        const bool branch_taken_0x231574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231574) {
            ctx->pc = 0x231590u;
            goto label_231590;
        }
    }
    ctx->pc = 0x23157Cu;
label_23157c:
    // 0x23157c: 0x8283008c  lb          $v1, 0x8C($s4)
    ctx->pc = 0x23157cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_231580:
    // 0x231580: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_231584:
    if (ctx->pc == 0x231584u) {
        ctx->pc = 0x231588u;
        goto label_231588;
    }
    ctx->pc = 0x231580u;
    {
        const bool branch_taken_0x231580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231580) {
            ctx->pc = 0x231590u;
            goto label_231590;
        }
    }
    ctx->pc = 0x231588u;
label_231588:
    // 0x231588: 0xc08d1c4  jal         func_234710
label_23158c:
    if (ctx->pc == 0x23158Cu) {
        ctx->pc = 0x23158Cu;
            // 0x23158c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231590u;
        goto label_231590;
    }
    ctx->pc = 0x231588u;
    SET_GPR_U32(ctx, 31, 0x231590u);
    ctx->pc = 0x23158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231588u;
            // 0x23158c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231590u; }
        if (ctx->pc != 0x231590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231590u; }
        if (ctx->pc != 0x231590u) { return; }
    }
    ctx->pc = 0x231590u;
label_231590:
    // 0x231590: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x231590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_231594:
    // 0x231594: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x231594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_231598:
    // 0x231598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x231598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23159c:
    // 0x23159c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23159cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2315a0:
    // 0x2315a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2315a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2315a4:
    // 0x2315a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2315a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2315a8:
    // 0x2315a8: 0x3e00008  jr          $ra
label_2315ac:
    if (ctx->pc == 0x2315ACu) {
        ctx->pc = 0x2315ACu;
            // 0x2315ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2315B0u;
        goto label_fallthrough_0x2315a8;
    }
    ctx->pc = 0x2315A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2315A8u;
            // 0x2315ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2315a8:
    ctx->pc = 0x2315B0u;
}
