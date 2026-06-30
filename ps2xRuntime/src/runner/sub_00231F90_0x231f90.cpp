#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231F90
// Address: 0x231f90 - 0x2323f0
void sub_00231F90_0x231f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231F90_0x231f90");
#endif

    switch (ctx->pc) {
        case 0x231f90u: goto label_231f90;
        case 0x231f94u: goto label_231f94;
        case 0x231f98u: goto label_231f98;
        case 0x231f9cu: goto label_231f9c;
        case 0x231fa0u: goto label_231fa0;
        case 0x231fa4u: goto label_231fa4;
        case 0x231fa8u: goto label_231fa8;
        case 0x231facu: goto label_231fac;
        case 0x231fb0u: goto label_231fb0;
        case 0x231fb4u: goto label_231fb4;
        case 0x231fb8u: goto label_231fb8;
        case 0x231fbcu: goto label_231fbc;
        case 0x231fc0u: goto label_231fc0;
        case 0x231fc4u: goto label_231fc4;
        case 0x231fc8u: goto label_231fc8;
        case 0x231fccu: goto label_231fcc;
        case 0x231fd0u: goto label_231fd0;
        case 0x231fd4u: goto label_231fd4;
        case 0x231fd8u: goto label_231fd8;
        case 0x231fdcu: goto label_231fdc;
        case 0x231fe0u: goto label_231fe0;
        case 0x231fe4u: goto label_231fe4;
        case 0x231fe8u: goto label_231fe8;
        case 0x231fecu: goto label_231fec;
        case 0x231ff0u: goto label_231ff0;
        case 0x231ff4u: goto label_231ff4;
        case 0x231ff8u: goto label_231ff8;
        case 0x231ffcu: goto label_231ffc;
        case 0x232000u: goto label_232000;
        case 0x232004u: goto label_232004;
        case 0x232008u: goto label_232008;
        case 0x23200cu: goto label_23200c;
        case 0x232010u: goto label_232010;
        case 0x232014u: goto label_232014;
        case 0x232018u: goto label_232018;
        case 0x23201cu: goto label_23201c;
        case 0x232020u: goto label_232020;
        case 0x232024u: goto label_232024;
        case 0x232028u: goto label_232028;
        case 0x23202cu: goto label_23202c;
        case 0x232030u: goto label_232030;
        case 0x232034u: goto label_232034;
        case 0x232038u: goto label_232038;
        case 0x23203cu: goto label_23203c;
        case 0x232040u: goto label_232040;
        case 0x232044u: goto label_232044;
        case 0x232048u: goto label_232048;
        case 0x23204cu: goto label_23204c;
        case 0x232050u: goto label_232050;
        case 0x232054u: goto label_232054;
        case 0x232058u: goto label_232058;
        case 0x23205cu: goto label_23205c;
        case 0x232060u: goto label_232060;
        case 0x232064u: goto label_232064;
        case 0x232068u: goto label_232068;
        case 0x23206cu: goto label_23206c;
        case 0x232070u: goto label_232070;
        case 0x232074u: goto label_232074;
        case 0x232078u: goto label_232078;
        case 0x23207cu: goto label_23207c;
        case 0x232080u: goto label_232080;
        case 0x232084u: goto label_232084;
        case 0x232088u: goto label_232088;
        case 0x23208cu: goto label_23208c;
        case 0x232090u: goto label_232090;
        case 0x232094u: goto label_232094;
        case 0x232098u: goto label_232098;
        case 0x23209cu: goto label_23209c;
        case 0x2320a0u: goto label_2320a0;
        case 0x2320a4u: goto label_2320a4;
        case 0x2320a8u: goto label_2320a8;
        case 0x2320acu: goto label_2320ac;
        case 0x2320b0u: goto label_2320b0;
        case 0x2320b4u: goto label_2320b4;
        case 0x2320b8u: goto label_2320b8;
        case 0x2320bcu: goto label_2320bc;
        case 0x2320c0u: goto label_2320c0;
        case 0x2320c4u: goto label_2320c4;
        case 0x2320c8u: goto label_2320c8;
        case 0x2320ccu: goto label_2320cc;
        case 0x2320d0u: goto label_2320d0;
        case 0x2320d4u: goto label_2320d4;
        case 0x2320d8u: goto label_2320d8;
        case 0x2320dcu: goto label_2320dc;
        case 0x2320e0u: goto label_2320e0;
        case 0x2320e4u: goto label_2320e4;
        case 0x2320e8u: goto label_2320e8;
        case 0x2320ecu: goto label_2320ec;
        case 0x2320f0u: goto label_2320f0;
        case 0x2320f4u: goto label_2320f4;
        case 0x2320f8u: goto label_2320f8;
        case 0x2320fcu: goto label_2320fc;
        case 0x232100u: goto label_232100;
        case 0x232104u: goto label_232104;
        case 0x232108u: goto label_232108;
        case 0x23210cu: goto label_23210c;
        case 0x232110u: goto label_232110;
        case 0x232114u: goto label_232114;
        case 0x232118u: goto label_232118;
        case 0x23211cu: goto label_23211c;
        case 0x232120u: goto label_232120;
        case 0x232124u: goto label_232124;
        case 0x232128u: goto label_232128;
        case 0x23212cu: goto label_23212c;
        case 0x232130u: goto label_232130;
        case 0x232134u: goto label_232134;
        case 0x232138u: goto label_232138;
        case 0x23213cu: goto label_23213c;
        case 0x232140u: goto label_232140;
        case 0x232144u: goto label_232144;
        case 0x232148u: goto label_232148;
        case 0x23214cu: goto label_23214c;
        case 0x232150u: goto label_232150;
        case 0x232154u: goto label_232154;
        case 0x232158u: goto label_232158;
        case 0x23215cu: goto label_23215c;
        case 0x232160u: goto label_232160;
        case 0x232164u: goto label_232164;
        case 0x232168u: goto label_232168;
        case 0x23216cu: goto label_23216c;
        case 0x232170u: goto label_232170;
        case 0x232174u: goto label_232174;
        case 0x232178u: goto label_232178;
        case 0x23217cu: goto label_23217c;
        case 0x232180u: goto label_232180;
        case 0x232184u: goto label_232184;
        case 0x232188u: goto label_232188;
        case 0x23218cu: goto label_23218c;
        case 0x232190u: goto label_232190;
        case 0x232194u: goto label_232194;
        case 0x232198u: goto label_232198;
        case 0x23219cu: goto label_23219c;
        case 0x2321a0u: goto label_2321a0;
        case 0x2321a4u: goto label_2321a4;
        case 0x2321a8u: goto label_2321a8;
        case 0x2321acu: goto label_2321ac;
        case 0x2321b0u: goto label_2321b0;
        case 0x2321b4u: goto label_2321b4;
        case 0x2321b8u: goto label_2321b8;
        case 0x2321bcu: goto label_2321bc;
        case 0x2321c0u: goto label_2321c0;
        case 0x2321c4u: goto label_2321c4;
        case 0x2321c8u: goto label_2321c8;
        case 0x2321ccu: goto label_2321cc;
        case 0x2321d0u: goto label_2321d0;
        case 0x2321d4u: goto label_2321d4;
        case 0x2321d8u: goto label_2321d8;
        case 0x2321dcu: goto label_2321dc;
        case 0x2321e0u: goto label_2321e0;
        case 0x2321e4u: goto label_2321e4;
        case 0x2321e8u: goto label_2321e8;
        case 0x2321ecu: goto label_2321ec;
        case 0x2321f0u: goto label_2321f0;
        case 0x2321f4u: goto label_2321f4;
        case 0x2321f8u: goto label_2321f8;
        case 0x2321fcu: goto label_2321fc;
        case 0x232200u: goto label_232200;
        case 0x232204u: goto label_232204;
        case 0x232208u: goto label_232208;
        case 0x23220cu: goto label_23220c;
        case 0x232210u: goto label_232210;
        case 0x232214u: goto label_232214;
        case 0x232218u: goto label_232218;
        case 0x23221cu: goto label_23221c;
        case 0x232220u: goto label_232220;
        case 0x232224u: goto label_232224;
        case 0x232228u: goto label_232228;
        case 0x23222cu: goto label_23222c;
        case 0x232230u: goto label_232230;
        case 0x232234u: goto label_232234;
        case 0x232238u: goto label_232238;
        case 0x23223cu: goto label_23223c;
        case 0x232240u: goto label_232240;
        case 0x232244u: goto label_232244;
        case 0x232248u: goto label_232248;
        case 0x23224cu: goto label_23224c;
        case 0x232250u: goto label_232250;
        case 0x232254u: goto label_232254;
        case 0x232258u: goto label_232258;
        case 0x23225cu: goto label_23225c;
        case 0x232260u: goto label_232260;
        case 0x232264u: goto label_232264;
        case 0x232268u: goto label_232268;
        case 0x23226cu: goto label_23226c;
        case 0x232270u: goto label_232270;
        case 0x232274u: goto label_232274;
        case 0x232278u: goto label_232278;
        case 0x23227cu: goto label_23227c;
        case 0x232280u: goto label_232280;
        case 0x232284u: goto label_232284;
        case 0x232288u: goto label_232288;
        case 0x23228cu: goto label_23228c;
        case 0x232290u: goto label_232290;
        case 0x232294u: goto label_232294;
        case 0x232298u: goto label_232298;
        case 0x23229cu: goto label_23229c;
        case 0x2322a0u: goto label_2322a0;
        case 0x2322a4u: goto label_2322a4;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322acu: goto label_2322ac;
        case 0x2322b0u: goto label_2322b0;
        case 0x2322b4u: goto label_2322b4;
        case 0x2322b8u: goto label_2322b8;
        case 0x2322bcu: goto label_2322bc;
        case 0x2322c0u: goto label_2322c0;
        case 0x2322c4u: goto label_2322c4;
        case 0x2322c8u: goto label_2322c8;
        case 0x2322ccu: goto label_2322cc;
        case 0x2322d0u: goto label_2322d0;
        case 0x2322d4u: goto label_2322d4;
        case 0x2322d8u: goto label_2322d8;
        case 0x2322dcu: goto label_2322dc;
        case 0x2322e0u: goto label_2322e0;
        case 0x2322e4u: goto label_2322e4;
        case 0x2322e8u: goto label_2322e8;
        case 0x2322ecu: goto label_2322ec;
        case 0x2322f0u: goto label_2322f0;
        case 0x2322f4u: goto label_2322f4;
        case 0x2322f8u: goto label_2322f8;
        case 0x2322fcu: goto label_2322fc;
        case 0x232300u: goto label_232300;
        case 0x232304u: goto label_232304;
        case 0x232308u: goto label_232308;
        case 0x23230cu: goto label_23230c;
        case 0x232310u: goto label_232310;
        case 0x232314u: goto label_232314;
        case 0x232318u: goto label_232318;
        case 0x23231cu: goto label_23231c;
        case 0x232320u: goto label_232320;
        case 0x232324u: goto label_232324;
        case 0x232328u: goto label_232328;
        case 0x23232cu: goto label_23232c;
        case 0x232330u: goto label_232330;
        case 0x232334u: goto label_232334;
        case 0x232338u: goto label_232338;
        case 0x23233cu: goto label_23233c;
        case 0x232340u: goto label_232340;
        case 0x232344u: goto label_232344;
        case 0x232348u: goto label_232348;
        case 0x23234cu: goto label_23234c;
        case 0x232350u: goto label_232350;
        case 0x232354u: goto label_232354;
        case 0x232358u: goto label_232358;
        case 0x23235cu: goto label_23235c;
        case 0x232360u: goto label_232360;
        case 0x232364u: goto label_232364;
        case 0x232368u: goto label_232368;
        case 0x23236cu: goto label_23236c;
        case 0x232370u: goto label_232370;
        case 0x232374u: goto label_232374;
        case 0x232378u: goto label_232378;
        case 0x23237cu: goto label_23237c;
        case 0x232380u: goto label_232380;
        case 0x232384u: goto label_232384;
        case 0x232388u: goto label_232388;
        case 0x23238cu: goto label_23238c;
        case 0x232390u: goto label_232390;
        case 0x232394u: goto label_232394;
        case 0x232398u: goto label_232398;
        case 0x23239cu: goto label_23239c;
        case 0x2323a0u: goto label_2323a0;
        case 0x2323a4u: goto label_2323a4;
        case 0x2323a8u: goto label_2323a8;
        case 0x2323acu: goto label_2323ac;
        case 0x2323b0u: goto label_2323b0;
        case 0x2323b4u: goto label_2323b4;
        case 0x2323b8u: goto label_2323b8;
        case 0x2323bcu: goto label_2323bc;
        case 0x2323c0u: goto label_2323c0;
        case 0x2323c4u: goto label_2323c4;
        case 0x2323c8u: goto label_2323c8;
        case 0x2323ccu: goto label_2323cc;
        case 0x2323d0u: goto label_2323d0;
        case 0x2323d4u: goto label_2323d4;
        case 0x2323d8u: goto label_2323d8;
        case 0x2323dcu: goto label_2323dc;
        case 0x2323e0u: goto label_2323e0;
        case 0x2323e4u: goto label_2323e4;
        case 0x2323e8u: goto label_2323e8;
        case 0x2323ecu: goto label_2323ec;
        default: break;
    }

    ctx->pc = 0x231f90u;

label_231f90:
    // 0x231f90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x231f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_231f94:
    // 0x231f94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x231f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_231f98:
    // 0x231f98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x231f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_231f9c:
    // 0x231f9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x231f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_231fa0:
    // 0x231fa0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x231fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231fa4:
    // 0x231fa4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x231fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_231fa8:
    // 0x231fa8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x231fa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231fac:
    // 0x231fac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x231facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_231fb0:
    // 0x231fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x231fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_231fb4:
    // 0x231fb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231fb8:
    // 0x231fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231fbc:
    // 0x231fbc: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x231fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_231fc0:
    // 0x231fc0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x231fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_231fc4:
    // 0x231fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231fc8:
    // 0x231fc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231fcc:
    if (ctx->pc == 0x231FCCu) {
        ctx->pc = 0x231FCCu;
            // 0x231fcc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231FD0u;
        goto label_231fd0;
    }
    ctx->pc = 0x231FC8u;
    {
        const bool branch_taken_0x231fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231FC8u;
            // 0x231fcc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fc8) {
            ctx->pc = 0x231FF0u;
            goto label_231ff0;
        }
    }
    ctx->pc = 0x231FD0u;
label_231fd0:
    // 0x231fd0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x231fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_231fd4:
    // 0x231fd4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_231fd8:
    // 0x231fd8: 0xa3a200b0  sb          $v0, 0xB0($sp)
    ctx->pc = 0x231fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 2));
label_231fdc:
    // 0x231fdc: 0xafb400b4  sw          $s4, 0xB4($sp)
    ctx->pc = 0x231fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 20));
label_231fe0:
    // 0x231fe0: 0xc08d1cc  jal         func_234730
label_231fe4:
    if (ctx->pc == 0x231FE4u) {
        ctx->pc = 0x231FE4u;
            // 0x231fe4: 0xa7b600b8  sh          $s6, 0xB8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 22));
        ctx->pc = 0x231FE8u;
        goto label_231fe8;
    }
    ctx->pc = 0x231FE0u;
    SET_GPR_U32(ctx, 31, 0x231FE8u);
    ctx->pc = 0x231FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231FE0u;
            // 0x231fe4: 0xa7b600b8  sh          $s6, 0xB8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FE8u; }
        if (ctx->pc != 0x231FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FE8u; }
        if (ctx->pc != 0x231FE8u) { return; }
    }
    ctx->pc = 0x231FE8u;
label_231fe8:
    // 0x231fe8: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_231fec:
    if (ctx->pc == 0x231FECu) {
        ctx->pc = 0x231FECu;
            // 0x231fec: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x231FF0u;
        goto label_231ff0;
    }
    ctx->pc = 0x231FE8u;
    {
        const bool branch_taken_0x231fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231FE8u;
            // 0x231fec: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fe8) {
            ctx->pc = 0x2323C0u;
            goto label_2323c0;
        }
    }
    ctx->pc = 0x231FF0u;
label_231ff0:
    // 0x231ff0: 0x8ea50084  lw          $a1, 0x84($s5)
    ctx->pc = 0x231ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_231ff4:
    // 0x231ff4: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_231ff8:
    // 0x231ff8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_231ffc:
    // 0x231ffc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x231ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_232000:
    // 0x232000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_232004:
    // 0x232004: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_232008:
    // 0x232008: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x232008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23200c:
    // 0x23200c: 0xaea70084  sw          $a3, 0x84($s5)
    ctx->pc = 0x23200cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 7));
label_232010:
    // 0x232010: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x232010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_232014:
    // 0x232014: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x232014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_232018:
    // 0x232018: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x232018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
label_23201c:
    // 0x23201c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x23201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_232020:
    // 0x232020: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x232020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_232024:
    // 0x232024: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x232024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_232028:
    // 0x232028: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x232028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23202c:
    // 0x23202c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23202cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_232030:
    // 0x232030: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x232030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_232034:
    // 0x232034: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_232038:
    if (ctx->pc == 0x232038u) {
        ctx->pc = 0x232038u;
            // 0x232038: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x23203Cu;
        goto label_23203c;
    }
    ctx->pc = 0x232034u;
    {
        const bool branch_taken_0x232034 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x232038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232034u;
            // 0x232038: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232034) {
            ctx->pc = 0x232044u;
            goto label_232044;
        }
    }
    ctx->pc = 0x23203Cu;
label_23203c:
    // 0x23203c: 0x10000005  b           . + 4 + (0x5 << 2)
label_232040:
    if (ctx->pc == 0x232040u) {
        ctx->pc = 0x232040u;
            // 0x232040: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x232044u;
        goto label_232044;
    }
    ctx->pc = 0x23203Cu;
    {
        const bool branch_taken_0x23203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23203Cu;
            // 0x232040: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23203c) {
            ctx->pc = 0x232054u;
            goto label_232054;
        }
    }
    ctx->pc = 0x232044u;
label_232044:
    // 0x232044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232048:
    // 0x232048: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x232048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23204c:
    // 0x23204c: 0x320f809  jalr        $t9
label_232050:
    if (ctx->pc == 0x232050u) {
        ctx->pc = 0x232054u;
        goto label_232054;
    }
    ctx->pc = 0x23204Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232054u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x232054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232054u; }
            if (ctx->pc != 0x232054u) { return; }
        }
        }
    }
    ctx->pc = 0x232054u;
label_232054:
    // 0x232054: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x232054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_232058:
    // 0x232058: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23205c:
    // 0x23205c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x23205cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_232060:
    // 0x232060: 0x2c28025  or          $s0, $s6, $v0
    ctx->pc = 0x232060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_232064:
    // 0x232064: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x232064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_232068:
    // 0x232068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23206c:
    // 0x23206c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x23206cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_232070:
    // 0x232070: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x232070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_232074:
    // 0x232074: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x232074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_232078:
    // 0x232078: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x232078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_23207c:
    // 0x23207c: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x23207cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_232080:
    // 0x232080: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x232080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_232084:
    // 0x232084: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x232084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
label_232088:
    // 0x232088: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x232088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23208c:
    // 0x23208c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x23208cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232090:
    // 0x232090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x232090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_232094:
    // 0x232094: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x232094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_232098:
    // 0x232098: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x232098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23209c:
    // 0x23209c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23209cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2320a0:
    // 0x2320a0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2320a4:
    if (ctx->pc == 0x2320A4u) {
        ctx->pc = 0x2320A4u;
            // 0x2320a4: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2320A8u;
        goto label_2320a8;
    }
    ctx->pc = 0x2320A0u;
    {
        const bool branch_taken_0x2320a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2320A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320A0u;
            // 0x2320a4: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320a0) {
            ctx->pc = 0x2320B0u;
            goto label_2320b0;
        }
    }
    ctx->pc = 0x2320A8u;
label_2320a8:
    // 0x2320a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2320ac:
    if (ctx->pc == 0x2320ACu) {
        ctx->pc = 0x2320ACu;
            // 0x2320ac: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2320B0u;
        goto label_2320b0;
    }
    ctx->pc = 0x2320A8u;
    {
        const bool branch_taken_0x2320a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320A8u;
            // 0x2320ac: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320a8) {
            ctx->pc = 0x2320C0u;
            goto label_2320c0;
        }
    }
    ctx->pc = 0x2320B0u;
label_2320b0:
    // 0x2320b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2320b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2320b4:
    // 0x2320b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2320b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2320b8:
    // 0x2320b8: 0x320f809  jalr        $t9
label_2320bc:
    if (ctx->pc == 0x2320BCu) {
        ctx->pc = 0x2320C0u;
        goto label_2320c0;
    }
    ctx->pc = 0x2320B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2320C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2320C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2320C0u; }
            if (ctx->pc != 0x2320C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2320C0u;
label_2320c0:
    // 0x2320c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2320c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2320c4:
    // 0x2320c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2320c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2320c8:
    // 0x2320c8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2320c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_2320cc:
    // 0x2320cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2320ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2320d0:
    // 0x2320d0: 0xafb600a4  sw          $s6, 0xA4($sp)
    ctx->pc = 0x2320d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 22));
label_2320d4:
    // 0x2320d4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2320d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2320d8:
    // 0x2320d8: 0x1ac00035  blez        $s6, . + 4 + (0x35 << 2)
label_2320dc:
    if (ctx->pc == 0x2320DCu) {
        ctx->pc = 0x2320DCu;
            // 0x2320dc: 0xafb60094  sw          $s6, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 22));
        ctx->pc = 0x2320E0u;
        goto label_2320e0;
    }
    ctx->pc = 0x2320D8u;
    {
        const bool branch_taken_0x2320d8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2320DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320D8u;
            // 0x2320dc: 0xafb60094  sw          $s6, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320d8) {
            ctx->pc = 0x2321B0u;
            goto label_2321b0;
        }
    }
    ctx->pc = 0x2320E0u;
label_2320e0:
    // 0x2320e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2320e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2320e4:
    // 0x2320e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2320e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2320e8:
    // 0x2320e8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2320e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2320ec:
    // 0x2320ec: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2320f0:
    // 0x2320f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2320f4:
    if (ctx->pc == 0x2320F4u) {
        ctx->pc = 0x2320F8u;
        goto label_2320f8;
    }
    ctx->pc = 0x2320F0u;
    {
        const bool branch_taken_0x2320f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2320f0) {
            ctx->pc = 0x232110u;
            goto label_232110;
        }
    }
    ctx->pc = 0x2320F8u;
label_2320f8:
    // 0x2320f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2320f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2320fc:
    // 0x2320fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2320fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232100:
    // 0x232100: 0x320f809  jalr        $t9
label_232104:
    if (ctx->pc == 0x232104u) {
        ctx->pc = 0x232104u;
            // 0x232104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232108u;
        goto label_232108;
    }
    ctx->pc = 0x232100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232108u);
        ctx->pc = 0x232104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232100u;
            // 0x232104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232108u; }
            if (ctx->pc != 0x232108u) { return; }
        }
        }
    }
    ctx->pc = 0x232108u;
label_232108:
    // 0x232108: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x232108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_23210c:
    // 0x23210c: 0x0  nop
    ctx->pc = 0x23210cu;
    // NOP
label_232110:
    // 0x232110: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x232110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
label_232114:
    // 0x232114: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x232114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_232118:
    // 0x232118: 0x26430024  addiu       $v1, $s2, 0x24
    ctx->pc = 0x232118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_23211c:
    // 0x23211c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232120:
    // 0x232120: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x232120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_232124:
    // 0x232124: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x232124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_232128:
    // 0x232128: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23212c:
    // 0x23212c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_232130:
    // 0x232130: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x232130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_232134:
    // 0x232134: 0x320f809  jalr        $t9
label_232138:
    if (ctx->pc == 0x232138u) {
        ctx->pc = 0x232138u;
            // 0x232138: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x23213Cu;
        goto label_23213c;
    }
    ctx->pc = 0x232134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23213Cu);
        ctx->pc = 0x232138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232134u;
            // 0x232138: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23213Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23213Cu; }
            if (ctx->pc != 0x23213Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23213Cu;
label_23213c:
    // 0x23213c: 0xc08d40c  jal         func_235030
label_232140:
    if (ctx->pc == 0x232140u) {
        ctx->pc = 0x232140u;
            // 0x232140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232144u;
        goto label_232144;
    }
    ctx->pc = 0x23213Cu;
    SET_GPR_U32(ctx, 31, 0x232144u);
    ctx->pc = 0x232140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23213Cu;
            // 0x232140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232144u; }
        if (ctx->pc != 0x232144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232144u; }
        if (ctx->pc != 0x232144u) { return; }
    }
    ctx->pc = 0x232144u;
label_232144:
    // 0x232144: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x232144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_232148:
    // 0x232148: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_23214c:
    // 0x23214c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_232150:
    // 0x232150: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232154:
    // 0x232154: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_232158:
    if (ctx->pc == 0x232158u) {
        ctx->pc = 0x23215Cu;
        goto label_23215c;
    }
    ctx->pc = 0x232154u;
    {
        const bool branch_taken_0x232154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x232154) {
            ctx->pc = 0x232168u;
            goto label_232168;
        }
    }
    ctx->pc = 0x23215Cu;
label_23215c:
    // 0x23215c: 0x26a400ec  addiu       $a0, $s5, 0xEC
    ctx->pc = 0x23215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 236));
label_232160:
    // 0x232160: 0xc0a728c  jal         func_29CA30
label_232164:
    if (ctx->pc == 0x232164u) {
        ctx->pc = 0x232164u;
            // 0x232164: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x232168u;
        goto label_232168;
    }
    ctx->pc = 0x232160u;
    SET_GPR_U32(ctx, 31, 0x232168u);
    ctx->pc = 0x232164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232160u;
            // 0x232164: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232168u; }
        if (ctx->pc != 0x232168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232168u; }
        if (ctx->pc != 0x232168u) { return; }
    }
    ctx->pc = 0x232168u;
label_232168:
    // 0x232168: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x232168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_23216c:
    // 0x23216c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_232170:
    // 0x232170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x232170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232174:
    // 0x232174: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x232174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_232178:
    // 0x232178: 0xaea200f0  sw          $v0, 0xF0($s5)
    ctx->pc = 0x232178u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
label_23217c:
    // 0x23217c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23217cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_232180:
    // 0x232180: 0x8ea200ec  lw          $v0, 0xEC($s5)
    ctx->pc = 0x232180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 236)));
label_232184:
    // 0x232184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232188:
    // 0x232188: 0xc08e4e0  jal         func_239380
label_23218c:
    if (ctx->pc == 0x23218Cu) {
        ctx->pc = 0x23218Cu;
            // 0x23218c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x232190u;
        goto label_232190;
    }
    ctx->pc = 0x232188u;
    SET_GPR_U32(ctx, 31, 0x232190u);
    ctx->pc = 0x23218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232188u;
            // 0x23218c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239380u;
    if (runtime->hasFunction(0x239380u)) {
        auto targetFn = runtime->lookupFunction(0x239380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232190u; }
        if (ctx->pc != 0x232190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239380_0x239380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232190u; }
        if (ctx->pc != 0x232190u) { return; }
    }
    ctx->pc = 0x232190u;
label_232190:
    // 0x232190: 0xc08ab54  jal         func_22AD50
label_232194:
    if (ctx->pc == 0x232194u) {
        ctx->pc = 0x232194u;
            // 0x232194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232198u;
        goto label_232198;
    }
    ctx->pc = 0x232190u;
    SET_GPR_U32(ctx, 31, 0x232198u);
    ctx->pc = 0x232194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232190u;
            // 0x232194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AD50u;
    if (runtime->hasFunction(0x22AD50u)) {
        auto targetFn = runtime->lookupFunction(0x22AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232198u; }
        if (ctx->pc != 0x232198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AD50_0x22ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232198u; }
        if (ctx->pc != 0x232198u) { return; }
    }
    ctx->pc = 0x232198u;
label_232198:
    // 0x232198: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x232198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23219c:
    // 0x23219c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x23219cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2321a0:
    // 0x2321a0: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x2321a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2321a4:
    // 0x2321a4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2321a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2321a8:
    // 0x2321a8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_2321ac:
    if (ctx->pc == 0x2321ACu) {
        ctx->pc = 0x2321ACu;
            // 0x2321ac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2321B0u;
        goto label_2321b0;
    }
    ctx->pc = 0x2321A8u;
    {
        const bool branch_taken_0x2321a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2321ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321A8u;
            // 0x2321ac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321a8) {
            ctx->pc = 0x2320E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2320e8;
        }
    }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x8eb00318  lw          $s0, 0x318($s5)
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 792)));
label_2321b4:
    // 0x2321b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2321b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2321b8:
    // 0x2321b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2321b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2321bc:
    // 0x2321bc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2321bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2321c0:
    // 0x2321c0: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2321c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_2321c4:
    // 0x2321c4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2321c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2321c8:
    // 0x2321c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2321cc:
    // 0x2321cc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2321ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_2321d0:
    // 0x2321d0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2321d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2321d4:
    // 0x2321d4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2321d8:
    // 0x2321d8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x2321d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2321dc:
    // 0x2321dc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2321dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2321e0:
    // 0x2321e0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2321e4:
    // 0x2321e4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2321e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2321e8:
    // 0x2321e8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2321e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2321ec:
    // 0x2321ec: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2321f0:
    if (ctx->pc == 0x2321F0u) {
        ctx->pc = 0x2321F0u;
            // 0x2321f0: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2321F4u;
        goto label_2321f4;
    }
    ctx->pc = 0x2321ECu;
    {
        const bool branch_taken_0x2321ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2321F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321ECu;
            // 0x2321f0: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321ec) {
            ctx->pc = 0x2321FCu;
            goto label_2321fc;
        }
    }
    ctx->pc = 0x2321F4u;
label_2321f4:
    // 0x2321f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2321f8:
    if (ctx->pc == 0x2321F8u) {
        ctx->pc = 0x2321F8u;
            // 0x2321f8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2321FCu;
        goto label_2321fc;
    }
    ctx->pc = 0x2321F4u;
    {
        const bool branch_taken_0x2321f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321F4u;
            // 0x2321f8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321f4) {
            ctx->pc = 0x23220Cu;
            goto label_23220c;
        }
    }
    ctx->pc = 0x2321FCu;
label_2321fc:
    // 0x2321fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2321fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232200:
    // 0x232200: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x232200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_232204:
    // 0x232204: 0x320f809  jalr        $t9
label_232208:
    if (ctx->pc == 0x232208u) {
        ctx->pc = 0x23220Cu;
        goto label_23220c;
    }
    ctx->pc = 0x232204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23220Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23220Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23220Cu; }
            if (ctx->pc != 0x23220Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23220Cu;
label_23220c:
    // 0x23220c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23220cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_232210:
    // 0x232210: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x232210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_232214:
    // 0x232214: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232218:
    // 0x232218: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x232218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23221c:
    // 0x23221c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x23221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_232220:
    // 0x232220: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x232220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_232224:
    // 0x232224: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_232228:
    // 0x232228: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x232228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23222c:
    // 0x23222c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x23222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_232230:
    // 0x232230: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232234:
    // 0x232234: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x232234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_232238:
    // 0x232238: 0x320f809  jalr        $t9
label_23223c:
    if (ctx->pc == 0x23223Cu) {
        ctx->pc = 0x23223Cu;
            // 0x23223c: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x232240u;
        goto label_232240;
    }
    ctx->pc = 0x232238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232240u);
        ctx->pc = 0x23223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232238u;
            // 0x23223c: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232240u; }
            if (ctx->pc != 0x232240u) { return; }
        }
        }
    }
    ctx->pc = 0x232240u;
label_232240:
    // 0x232240: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x232240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_232244:
    // 0x232244: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_232248:
    if (ctx->pc == 0x232248u) {
        ctx->pc = 0x232248u;
            // 0x232248: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x23224Cu;
        goto label_23224c;
    }
    ctx->pc = 0x232244u;
    {
        const bool branch_taken_0x232244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x232244) {
            ctx->pc = 0x232248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232244u;
            // 0x232248: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232254u;
            goto label_232254;
        }
    }
    ctx->pc = 0x23224Cu;
label_23224c:
    // 0x23224c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23224cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_232250:
    // 0x232250: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x232250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_232254:
    // 0x232254: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x232254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_232258:
    // 0x232258: 0xc07fb38  jal         func_1FECE0
label_23225c:
    if (ctx->pc == 0x23225Cu) {
        ctx->pc = 0x23225Cu;
            // 0x23225c: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x232260u;
        goto label_232260;
    }
    ctx->pc = 0x232258u;
    SET_GPR_U32(ctx, 31, 0x232260u);
    ctx->pc = 0x23225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232258u;
            // 0x23225c: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232260u; }
        if (ctx->pc != 0x232260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232260u; }
        if (ctx->pc != 0x232260u) { return; }
    }
    ctx->pc = 0x232260u;
label_232260:
    // 0x232260: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_232264:
    // 0x232264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_232268:
    // 0x232268: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_23226c:
    if (ctx->pc == 0x23226Cu) {
        ctx->pc = 0x23226Cu;
            // 0x23226c: 0xaea30084  sw          $v1, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x232270u;
        goto label_232270;
    }
    ctx->pc = 0x232268u;
    {
        const bool branch_taken_0x232268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232268u;
            // 0x23226c: 0xaea30084  sw          $v1, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232268) {
            ctx->pc = 0x232290u;
            goto label_232290;
        }
    }
    ctx->pc = 0x232270u;
label_232270:
    // 0x232270: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_232274:
    // 0x232274: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_232278:
    if (ctx->pc == 0x232278u) {
        ctx->pc = 0x23227Cu;
        goto label_23227c;
    }
    ctx->pc = 0x232274u;
    {
        const bool branch_taken_0x232274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232274) {
            ctx->pc = 0x232290u;
            goto label_232290;
        }
    }
    ctx->pc = 0x23227Cu;
label_23227c:
    // 0x23227c: 0x82a3008c  lb          $v1, 0x8C($s5)
    ctx->pc = 0x23227cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
label_232280:
    // 0x232280: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_232284:
    if (ctx->pc == 0x232284u) {
        ctx->pc = 0x232288u;
        goto label_232288;
    }
    ctx->pc = 0x232280u;
    {
        const bool branch_taken_0x232280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232280) {
            ctx->pc = 0x232290u;
            goto label_232290;
        }
    }
    ctx->pc = 0x232288u;
label_232288:
    // 0x232288: 0xc08d1c4  jal         func_234710
label_23228c:
    if (ctx->pc == 0x23228Cu) {
        ctx->pc = 0x23228Cu;
            // 0x23228c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232290u;
        goto label_232290;
    }
    ctx->pc = 0x232288u;
    SET_GPR_U32(ctx, 31, 0x232290u);
    ctx->pc = 0x23228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232288u;
            // 0x23228c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232290u; }
        if (ctx->pc != 0x232290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232290u; }
        if (ctx->pc != 0x232290u) { return; }
    }
    ctx->pc = 0x232290u;
label_232290:
    // 0x232290: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x232290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_232294:
    // 0x232294: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x232294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_232298:
    // 0x232298: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23229c:
    // 0x23229c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23229cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2322a0:
    // 0x2322a0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2322a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2322a4:
    // 0x2322a4: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_2322a8:
    if (ctx->pc == 0x2322A8u) {
        ctx->pc = 0x2322A8u;
            // 0x2322a8: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->pc = 0x2322ACu;
        goto label_2322ac;
    }
    ctx->pc = 0x2322A4u;
    {
        const bool branch_taken_0x2322a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2322a4) {
            ctx->pc = 0x2322A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2322A4u;
            // 0x2322a8: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2322C0u;
            goto label_2322c0;
        }
    }
    ctx->pc = 0x2322ACu;
label_2322ac:
    // 0x2322ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2322b0:
    // 0x2322b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2322b4:
    // 0x2322b4: 0x320f809  jalr        $t9
label_2322b8:
    if (ctx->pc == 0x2322B8u) {
        ctx->pc = 0x2322BCu;
        goto label_2322bc;
    }
    ctx->pc = 0x2322B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2322BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2322BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2322BCu; }
            if (ctx->pc != 0x2322BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2322BCu;
label_2322bc:
    // 0x2322bc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2322bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2322c0:
    // 0x2322c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2322c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2322c4:
    // 0x2322c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2322c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2322c8:
    // 0x2322c8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2322cc:
    if (ctx->pc == 0x2322CCu) {
        ctx->pc = 0x2322D0u;
        goto label_2322d0;
    }
    ctx->pc = 0x2322C8u;
    {
        const bool branch_taken_0x2322c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2322c8) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x2322D0u;
label_2322d0:
    // 0x2322d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2322d4:
    // 0x2322d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2322d8:
    // 0x2322d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2322d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2322dc:
    // 0x2322dc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2322dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2322e0:
    // 0x2322e0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2322e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2322e4:
    // 0x2322e4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2322e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2322e8:
    // 0x2322e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2322e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2322ec:
    // 0x2322ec: 0xc0a7ab4  jal         func_29EAD0
label_2322f0:
    if (ctx->pc == 0x2322F0u) {
        ctx->pc = 0x2322F0u;
            // 0x2322f0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x2322F4u;
        goto label_2322f4;
    }
    ctx->pc = 0x2322ECu;
    SET_GPR_U32(ctx, 31, 0x2322F4u);
    ctx->pc = 0x2322F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322ECu;
            // 0x2322f0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322F4u; }
        if (ctx->pc != 0x2322F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322F4u; }
        if (ctx->pc != 0x2322F4u) { return; }
    }
    ctx->pc = 0x2322F4u;
label_2322f4:
    // 0x2322f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2322f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2322f8:
    // 0x2322f8: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x2322f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2322fc:
    // 0x2322fc: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2322fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_232300:
    // 0x232300: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x232300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_232304:
    // 0x232304: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x232304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_232308:
    // 0x232308: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23230c:
    if (ctx->pc == 0x23230Cu) {
        ctx->pc = 0x23230Cu;
            // 0x23230c: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->pc = 0x232310u;
        goto label_232310;
    }
    ctx->pc = 0x232308u;
    {
        const bool branch_taken_0x232308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x232308) {
            ctx->pc = 0x23230Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232308u;
            // 0x23230c: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232324u;
            goto label_232324;
        }
    }
    ctx->pc = 0x232310u;
label_232310:
    // 0x232310: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232314:
    // 0x232314: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x232314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_232318:
    // 0x232318: 0x320f809  jalr        $t9
label_23231c:
    if (ctx->pc == 0x23231Cu) {
        ctx->pc = 0x232320u;
        goto label_232320;
    }
    ctx->pc = 0x232318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232320u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x232320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232320u; }
            if (ctx->pc != 0x232320u) { return; }
        }
        }
    }
    ctx->pc = 0x232320u;
label_232320:
    // 0x232320: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x232320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232324:
    // 0x232324: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x232324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_232328:
    // 0x232328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x232328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23232c:
    // 0x23232c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_232330:
    if (ctx->pc == 0x232330u) {
        ctx->pc = 0x232334u;
        goto label_232334;
    }
    ctx->pc = 0x23232Cu;
    {
        const bool branch_taken_0x23232c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23232c) {
            ctx->pc = 0x232358u;
            goto label_232358;
        }
    }
    ctx->pc = 0x232334u;
label_232334:
    // 0x232334: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_232338:
    // 0x232338: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x232338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23233c:
    // 0x23233c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_232340:
    // 0x232340: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x232340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_232344:
    // 0x232344: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_232348:
    // 0x232348: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23234c:
    // 0x23234c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232350:
    // 0x232350: 0xc0a7ab4  jal         func_29EAD0
label_232354:
    if (ctx->pc == 0x232354u) {
        ctx->pc = 0x232354u;
            // 0x232354: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x232358u;
        goto label_232358;
    }
    ctx->pc = 0x232350u;
    SET_GPR_U32(ctx, 31, 0x232358u);
    ctx->pc = 0x232354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232350u;
            // 0x232354: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232358u; }
        if (ctx->pc != 0x232358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232358u; }
        if (ctx->pc != 0x232358u) { return; }
    }
    ctx->pc = 0x232358u;
label_232358:
    // 0x232358: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x232358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23235c:
    // 0x23235c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x23235cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_232360:
    // 0x232360: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x232360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_232364:
    // 0x232364: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x232364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_232368:
    // 0x232368: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x232368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23236c:
    // 0x23236c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_232370:
    if (ctx->pc == 0x232370u) {
        ctx->pc = 0x232370u;
            // 0x232370: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->pc = 0x232374u;
        goto label_232374;
    }
    ctx->pc = 0x23236Cu;
    {
        const bool branch_taken_0x23236c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23236c) {
            ctx->pc = 0x232370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23236Cu;
            // 0x232370: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232388u;
            goto label_232388;
        }
    }
    ctx->pc = 0x232374u;
label_232374:
    // 0x232374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232378:
    // 0x232378: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x232378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23237c:
    // 0x23237c: 0x320f809  jalr        $t9
label_232380:
    if (ctx->pc == 0x232380u) {
        ctx->pc = 0x232384u;
        goto label_232384;
    }
    ctx->pc = 0x23237Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232384u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x232384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232384u; }
            if (ctx->pc != 0x232384u) { return; }
        }
        }
    }
    ctx->pc = 0x232384u;
label_232384:
    // 0x232384: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_232388:
    // 0x232388: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x232388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23238c:
    // 0x23238c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_232390:
    // 0x232390: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_232394:
    if (ctx->pc == 0x232394u) {
        ctx->pc = 0x232398u;
        goto label_232398;
    }
    ctx->pc = 0x232390u;
    {
        const bool branch_taken_0x232390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232390) {
            ctx->pc = 0x2323BCu;
            goto label_2323bc;
        }
    }
    ctx->pc = 0x232398u;
label_232398:
    // 0x232398: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23239c:
    // 0x23239c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x23239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2323a0:
    // 0x2323a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2323a4:
    // 0x2323a4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2323a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2323a8:
    // 0x2323a8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2323a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2323ac:
    // 0x2323ac: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2323acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2323b0:
    // 0x2323b0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2323b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2323b4:
    // 0x2323b4: 0xc0a7ab4  jal         func_29EAD0
label_2323b8:
    if (ctx->pc == 0x2323B8u) {
        ctx->pc = 0x2323B8u;
            // 0x2323b8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2323BCu;
        goto label_2323bc;
    }
    ctx->pc = 0x2323B4u;
    SET_GPR_U32(ctx, 31, 0x2323BCu);
    ctx->pc = 0x2323B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323B4u;
            // 0x2323b8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323BCu; }
        if (ctx->pc != 0x2323BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323BCu; }
        if (ctx->pc != 0x2323BCu) { return; }
    }
    ctx->pc = 0x2323BCu;
label_2323bc:
    // 0x2323bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2323bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2323c0:
    // 0x2323c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2323c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2323c4:
    // 0x2323c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2323c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2323c8:
    // 0x2323c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2323c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2323cc:
    // 0x2323cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2323ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2323d0:
    // 0x2323d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2323d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2323d4:
    // 0x2323d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2323d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2323d8:
    // 0x2323d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2323d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2323dc:
    // 0x2323dc: 0x3e00008  jr          $ra
label_2323e0:
    if (ctx->pc == 0x2323E0u) {
        ctx->pc = 0x2323E0u;
            // 0x2323e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2323E4u;
        goto label_2323e4;
    }
    ctx->pc = 0x2323DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2323E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2323DCu;
            // 0x2323e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2323E4u;
label_2323e4:
    // 0x2323e4: 0x0  nop
    ctx->pc = 0x2323e4u;
    // NOP
label_2323e8:
    // 0x2323e8: 0x0  nop
    ctx->pc = 0x2323e8u;
    // NOP
label_2323ec:
    // 0x2323ec: 0x0  nop
    ctx->pc = 0x2323ecu;
    // NOP
}
