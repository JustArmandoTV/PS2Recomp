#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048E120
// Address: 0x48e120 - 0x48e510
void sub_0048E120_0x48e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E120_0x48e120");
#endif

    switch (ctx->pc) {
        case 0x48e120u: goto label_48e120;
        case 0x48e124u: goto label_48e124;
        case 0x48e128u: goto label_48e128;
        case 0x48e12cu: goto label_48e12c;
        case 0x48e130u: goto label_48e130;
        case 0x48e134u: goto label_48e134;
        case 0x48e138u: goto label_48e138;
        case 0x48e13cu: goto label_48e13c;
        case 0x48e140u: goto label_48e140;
        case 0x48e144u: goto label_48e144;
        case 0x48e148u: goto label_48e148;
        case 0x48e14cu: goto label_48e14c;
        case 0x48e150u: goto label_48e150;
        case 0x48e154u: goto label_48e154;
        case 0x48e158u: goto label_48e158;
        case 0x48e15cu: goto label_48e15c;
        case 0x48e160u: goto label_48e160;
        case 0x48e164u: goto label_48e164;
        case 0x48e168u: goto label_48e168;
        case 0x48e16cu: goto label_48e16c;
        case 0x48e170u: goto label_48e170;
        case 0x48e174u: goto label_48e174;
        case 0x48e178u: goto label_48e178;
        case 0x48e17cu: goto label_48e17c;
        case 0x48e180u: goto label_48e180;
        case 0x48e184u: goto label_48e184;
        case 0x48e188u: goto label_48e188;
        case 0x48e18cu: goto label_48e18c;
        case 0x48e190u: goto label_48e190;
        case 0x48e194u: goto label_48e194;
        case 0x48e198u: goto label_48e198;
        case 0x48e19cu: goto label_48e19c;
        case 0x48e1a0u: goto label_48e1a0;
        case 0x48e1a4u: goto label_48e1a4;
        case 0x48e1a8u: goto label_48e1a8;
        case 0x48e1acu: goto label_48e1ac;
        case 0x48e1b0u: goto label_48e1b0;
        case 0x48e1b4u: goto label_48e1b4;
        case 0x48e1b8u: goto label_48e1b8;
        case 0x48e1bcu: goto label_48e1bc;
        case 0x48e1c0u: goto label_48e1c0;
        case 0x48e1c4u: goto label_48e1c4;
        case 0x48e1c8u: goto label_48e1c8;
        case 0x48e1ccu: goto label_48e1cc;
        case 0x48e1d0u: goto label_48e1d0;
        case 0x48e1d4u: goto label_48e1d4;
        case 0x48e1d8u: goto label_48e1d8;
        case 0x48e1dcu: goto label_48e1dc;
        case 0x48e1e0u: goto label_48e1e0;
        case 0x48e1e4u: goto label_48e1e4;
        case 0x48e1e8u: goto label_48e1e8;
        case 0x48e1ecu: goto label_48e1ec;
        case 0x48e1f0u: goto label_48e1f0;
        case 0x48e1f4u: goto label_48e1f4;
        case 0x48e1f8u: goto label_48e1f8;
        case 0x48e1fcu: goto label_48e1fc;
        case 0x48e200u: goto label_48e200;
        case 0x48e204u: goto label_48e204;
        case 0x48e208u: goto label_48e208;
        case 0x48e20cu: goto label_48e20c;
        case 0x48e210u: goto label_48e210;
        case 0x48e214u: goto label_48e214;
        case 0x48e218u: goto label_48e218;
        case 0x48e21cu: goto label_48e21c;
        case 0x48e220u: goto label_48e220;
        case 0x48e224u: goto label_48e224;
        case 0x48e228u: goto label_48e228;
        case 0x48e22cu: goto label_48e22c;
        case 0x48e230u: goto label_48e230;
        case 0x48e234u: goto label_48e234;
        case 0x48e238u: goto label_48e238;
        case 0x48e23cu: goto label_48e23c;
        case 0x48e240u: goto label_48e240;
        case 0x48e244u: goto label_48e244;
        case 0x48e248u: goto label_48e248;
        case 0x48e24cu: goto label_48e24c;
        case 0x48e250u: goto label_48e250;
        case 0x48e254u: goto label_48e254;
        case 0x48e258u: goto label_48e258;
        case 0x48e25cu: goto label_48e25c;
        case 0x48e260u: goto label_48e260;
        case 0x48e264u: goto label_48e264;
        case 0x48e268u: goto label_48e268;
        case 0x48e26cu: goto label_48e26c;
        case 0x48e270u: goto label_48e270;
        case 0x48e274u: goto label_48e274;
        case 0x48e278u: goto label_48e278;
        case 0x48e27cu: goto label_48e27c;
        case 0x48e280u: goto label_48e280;
        case 0x48e284u: goto label_48e284;
        case 0x48e288u: goto label_48e288;
        case 0x48e28cu: goto label_48e28c;
        case 0x48e290u: goto label_48e290;
        case 0x48e294u: goto label_48e294;
        case 0x48e298u: goto label_48e298;
        case 0x48e29cu: goto label_48e29c;
        case 0x48e2a0u: goto label_48e2a0;
        case 0x48e2a4u: goto label_48e2a4;
        case 0x48e2a8u: goto label_48e2a8;
        case 0x48e2acu: goto label_48e2ac;
        case 0x48e2b0u: goto label_48e2b0;
        case 0x48e2b4u: goto label_48e2b4;
        case 0x48e2b8u: goto label_48e2b8;
        case 0x48e2bcu: goto label_48e2bc;
        case 0x48e2c0u: goto label_48e2c0;
        case 0x48e2c4u: goto label_48e2c4;
        case 0x48e2c8u: goto label_48e2c8;
        case 0x48e2ccu: goto label_48e2cc;
        case 0x48e2d0u: goto label_48e2d0;
        case 0x48e2d4u: goto label_48e2d4;
        case 0x48e2d8u: goto label_48e2d8;
        case 0x48e2dcu: goto label_48e2dc;
        case 0x48e2e0u: goto label_48e2e0;
        case 0x48e2e4u: goto label_48e2e4;
        case 0x48e2e8u: goto label_48e2e8;
        case 0x48e2ecu: goto label_48e2ec;
        case 0x48e2f0u: goto label_48e2f0;
        case 0x48e2f4u: goto label_48e2f4;
        case 0x48e2f8u: goto label_48e2f8;
        case 0x48e2fcu: goto label_48e2fc;
        case 0x48e300u: goto label_48e300;
        case 0x48e304u: goto label_48e304;
        case 0x48e308u: goto label_48e308;
        case 0x48e30cu: goto label_48e30c;
        case 0x48e310u: goto label_48e310;
        case 0x48e314u: goto label_48e314;
        case 0x48e318u: goto label_48e318;
        case 0x48e31cu: goto label_48e31c;
        case 0x48e320u: goto label_48e320;
        case 0x48e324u: goto label_48e324;
        case 0x48e328u: goto label_48e328;
        case 0x48e32cu: goto label_48e32c;
        case 0x48e330u: goto label_48e330;
        case 0x48e334u: goto label_48e334;
        case 0x48e338u: goto label_48e338;
        case 0x48e33cu: goto label_48e33c;
        case 0x48e340u: goto label_48e340;
        case 0x48e344u: goto label_48e344;
        case 0x48e348u: goto label_48e348;
        case 0x48e34cu: goto label_48e34c;
        case 0x48e350u: goto label_48e350;
        case 0x48e354u: goto label_48e354;
        case 0x48e358u: goto label_48e358;
        case 0x48e35cu: goto label_48e35c;
        case 0x48e360u: goto label_48e360;
        case 0x48e364u: goto label_48e364;
        case 0x48e368u: goto label_48e368;
        case 0x48e36cu: goto label_48e36c;
        case 0x48e370u: goto label_48e370;
        case 0x48e374u: goto label_48e374;
        case 0x48e378u: goto label_48e378;
        case 0x48e37cu: goto label_48e37c;
        case 0x48e380u: goto label_48e380;
        case 0x48e384u: goto label_48e384;
        case 0x48e388u: goto label_48e388;
        case 0x48e38cu: goto label_48e38c;
        case 0x48e390u: goto label_48e390;
        case 0x48e394u: goto label_48e394;
        case 0x48e398u: goto label_48e398;
        case 0x48e39cu: goto label_48e39c;
        case 0x48e3a0u: goto label_48e3a0;
        case 0x48e3a4u: goto label_48e3a4;
        case 0x48e3a8u: goto label_48e3a8;
        case 0x48e3acu: goto label_48e3ac;
        case 0x48e3b0u: goto label_48e3b0;
        case 0x48e3b4u: goto label_48e3b4;
        case 0x48e3b8u: goto label_48e3b8;
        case 0x48e3bcu: goto label_48e3bc;
        case 0x48e3c0u: goto label_48e3c0;
        case 0x48e3c4u: goto label_48e3c4;
        case 0x48e3c8u: goto label_48e3c8;
        case 0x48e3ccu: goto label_48e3cc;
        case 0x48e3d0u: goto label_48e3d0;
        case 0x48e3d4u: goto label_48e3d4;
        case 0x48e3d8u: goto label_48e3d8;
        case 0x48e3dcu: goto label_48e3dc;
        case 0x48e3e0u: goto label_48e3e0;
        case 0x48e3e4u: goto label_48e3e4;
        case 0x48e3e8u: goto label_48e3e8;
        case 0x48e3ecu: goto label_48e3ec;
        case 0x48e3f0u: goto label_48e3f0;
        case 0x48e3f4u: goto label_48e3f4;
        case 0x48e3f8u: goto label_48e3f8;
        case 0x48e3fcu: goto label_48e3fc;
        case 0x48e400u: goto label_48e400;
        case 0x48e404u: goto label_48e404;
        case 0x48e408u: goto label_48e408;
        case 0x48e40cu: goto label_48e40c;
        case 0x48e410u: goto label_48e410;
        case 0x48e414u: goto label_48e414;
        case 0x48e418u: goto label_48e418;
        case 0x48e41cu: goto label_48e41c;
        case 0x48e420u: goto label_48e420;
        case 0x48e424u: goto label_48e424;
        case 0x48e428u: goto label_48e428;
        case 0x48e42cu: goto label_48e42c;
        case 0x48e430u: goto label_48e430;
        case 0x48e434u: goto label_48e434;
        case 0x48e438u: goto label_48e438;
        case 0x48e43cu: goto label_48e43c;
        case 0x48e440u: goto label_48e440;
        case 0x48e444u: goto label_48e444;
        case 0x48e448u: goto label_48e448;
        case 0x48e44cu: goto label_48e44c;
        case 0x48e450u: goto label_48e450;
        case 0x48e454u: goto label_48e454;
        case 0x48e458u: goto label_48e458;
        case 0x48e45cu: goto label_48e45c;
        case 0x48e460u: goto label_48e460;
        case 0x48e464u: goto label_48e464;
        case 0x48e468u: goto label_48e468;
        case 0x48e46cu: goto label_48e46c;
        case 0x48e470u: goto label_48e470;
        case 0x48e474u: goto label_48e474;
        case 0x48e478u: goto label_48e478;
        case 0x48e47cu: goto label_48e47c;
        case 0x48e480u: goto label_48e480;
        case 0x48e484u: goto label_48e484;
        case 0x48e488u: goto label_48e488;
        case 0x48e48cu: goto label_48e48c;
        case 0x48e490u: goto label_48e490;
        case 0x48e494u: goto label_48e494;
        case 0x48e498u: goto label_48e498;
        case 0x48e49cu: goto label_48e49c;
        case 0x48e4a0u: goto label_48e4a0;
        case 0x48e4a4u: goto label_48e4a4;
        case 0x48e4a8u: goto label_48e4a8;
        case 0x48e4acu: goto label_48e4ac;
        case 0x48e4b0u: goto label_48e4b0;
        case 0x48e4b4u: goto label_48e4b4;
        case 0x48e4b8u: goto label_48e4b8;
        case 0x48e4bcu: goto label_48e4bc;
        case 0x48e4c0u: goto label_48e4c0;
        case 0x48e4c4u: goto label_48e4c4;
        case 0x48e4c8u: goto label_48e4c8;
        case 0x48e4ccu: goto label_48e4cc;
        case 0x48e4d0u: goto label_48e4d0;
        case 0x48e4d4u: goto label_48e4d4;
        case 0x48e4d8u: goto label_48e4d8;
        case 0x48e4dcu: goto label_48e4dc;
        case 0x48e4e0u: goto label_48e4e0;
        case 0x48e4e4u: goto label_48e4e4;
        case 0x48e4e8u: goto label_48e4e8;
        case 0x48e4ecu: goto label_48e4ec;
        case 0x48e4f0u: goto label_48e4f0;
        case 0x48e4f4u: goto label_48e4f4;
        case 0x48e4f8u: goto label_48e4f8;
        case 0x48e4fcu: goto label_48e4fc;
        case 0x48e500u: goto label_48e500;
        case 0x48e504u: goto label_48e504;
        case 0x48e508u: goto label_48e508;
        case 0x48e50cu: goto label_48e50c;
        default: break;
    }

    ctx->pc = 0x48e120u;

label_48e120:
    // 0x48e120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48e124:
    // 0x48e124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48e128:
    // 0x48e128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48e12c:
    // 0x48e12c: 0x908300c0  lbu         $v1, 0xC0($a0)
    ctx->pc = 0x48e12cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
label_48e130:
    // 0x48e130: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_48e134:
    if (ctx->pc == 0x48E134u) {
        ctx->pc = 0x48E134u;
            // 0x48e134: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E138u;
        goto label_48e138;
    }
    ctx->pc = 0x48E130u;
    {
        const bool branch_taken_0x48e130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E130u;
            // 0x48e134: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e130) {
            ctx->pc = 0x48E154u;
            goto label_48e154;
        }
    }
    ctx->pc = 0x48E138u;
label_48e138:
    // 0x48e138: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x48e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_48e13c:
    // 0x48e13c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x48e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_48e140:
    // 0x48e140: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x48e140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_48e144:
    // 0x48e144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48e148:
    // 0x48e148: 0xc04a508  jal         func_129420
label_48e14c:
    if (ctx->pc == 0x48E14Cu) {
        ctx->pc = 0x48E14Cu;
            // 0x48e14c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48E150u;
        goto label_48e150;
    }
    ctx->pc = 0x48E148u;
    SET_GPR_U32(ctx, 31, 0x48E150u);
    ctx->pc = 0x48E14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E148u;
            // 0x48e14c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E150u; }
        if (ctx->pc != 0x48E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E150u; }
        if (ctx->pc != 0x48E150u) { return; }
    }
    ctx->pc = 0x48E150u;
label_48e150:
    // 0x48e150: 0xa20000c0  sb          $zero, 0xC0($s0)
    ctx->pc = 0x48e150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 192), (uint8_t)GPR_U32(ctx, 0));
label_48e154:
    // 0x48e154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48e158:
    // 0x48e158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48e15c:
    // 0x48e15c: 0x3e00008  jr          $ra
label_48e160:
    if (ctx->pc == 0x48E160u) {
        ctx->pc = 0x48E160u;
            // 0x48e160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48E164u;
        goto label_48e164;
    }
    ctx->pc = 0x48E15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E15Cu;
            // 0x48e160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E164u;
label_48e164:
    // 0x48e164: 0x0  nop
    ctx->pc = 0x48e164u;
    // NOP
label_48e168:
    // 0x48e168: 0x0  nop
    ctx->pc = 0x48e168u;
    // NOP
label_48e16c:
    // 0x48e16c: 0x0  nop
    ctx->pc = 0x48e16cu;
    // NOP
label_48e170:
    // 0x48e170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_48e174:
    // 0x48e174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_48e178:
    // 0x48e178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48e17c:
    // 0x48e17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48e180:
    // 0x48e180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48e180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48e184:
    // 0x48e184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48e188:
    // 0x48e188: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x48e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_48e18c:
    // 0x48e18c: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x48e18cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_48e190:
    // 0x48e190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48e194:
    // 0x48e194: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x48e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_48e198:
    // 0x48e198: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48e19c:
    // 0x48e19c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e19cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e1a0:
    // 0x48e1a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e1a4:
    // 0x48e1a4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_48e1a8:
    if (ctx->pc == 0x48E1A8u) {
        ctx->pc = 0x48E1A8u;
            // 0x48e1a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E1ACu;
        goto label_48e1ac;
    }
    ctx->pc = 0x48E1A4u;
    {
        const bool branch_taken_0x48e1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E1A4u;
            // 0x48e1a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e1a4) {
            ctx->pc = 0x48E238u;
            goto label_48e238;
        }
    }
    ctx->pc = 0x48E1ACu;
label_48e1ac:
    // 0x48e1ac: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48e1b0:
    // 0x48e1b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e1b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e1b4:
    // 0x48e1b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48e1b8:
    // 0x48e1b8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x48e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_48e1bc:
    // 0x48e1bc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_48e1c0:
    if (ctx->pc == 0x48E1C0u) {
        ctx->pc = 0x48E1C4u;
        goto label_48e1c4;
    }
    ctx->pc = 0x48E1BCu;
    {
        const bool branch_taken_0x48e1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e1bc) {
            ctx->pc = 0x48E208u;
            goto label_48e208;
        }
    }
    ctx->pc = 0x48E1C4u;
label_48e1c4:
    // 0x48e1c4: 0x924300c0  lbu         $v1, 0xC0($s2)
    ctx->pc = 0x48e1c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_48e1c8:
    // 0x48e1c8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_48e1cc:
    if (ctx->pc == 0x48E1CCu) {
        ctx->pc = 0x48E1D0u;
        goto label_48e1d0;
    }
    ctx->pc = 0x48E1C8u;
    {
        const bool branch_taken_0x48e1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e1c8) {
            ctx->pc = 0x48E208u;
            goto label_48e208;
        }
    }
    ctx->pc = 0x48E1D0u;
label_48e1d0:
    // 0x48e1d0: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x48e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48e1d4:
    // 0x48e1d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48e1d8:
    if (ctx->pc == 0x48E1D8u) {
        ctx->pc = 0x48E1DCu;
        goto label_48e1dc;
    }
    ctx->pc = 0x48E1D4u;
    {
        const bool branch_taken_0x48e1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e1d4) {
            ctx->pc = 0x48E1F0u;
            goto label_48e1f0;
        }
    }
    ctx->pc = 0x48E1DCu;
label_48e1dc:
    // 0x48e1dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48e1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48e1e0:
    // 0x48e1e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48e1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48e1e4:
    // 0x48e1e4: 0x320f809  jalr        $t9
label_48e1e8:
    if (ctx->pc == 0x48E1E8u) {
        ctx->pc = 0x48E1E8u;
            // 0x48e1e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48E1ECu;
        goto label_48e1ec;
    }
    ctx->pc = 0x48E1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E1ECu);
        ctx->pc = 0x48E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E1E4u;
            // 0x48e1e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E1ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E1ECu; }
            if (ctx->pc != 0x48E1ECu) { return; }
        }
        }
    }
    ctx->pc = 0x48E1ECu;
label_48e1ec:
    // 0x48e1ec: 0x0  nop
    ctx->pc = 0x48e1ecu;
    // NOP
label_48e1f0:
    // 0x48e1f0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x48e1f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_48e1f4:
    // 0x48e1f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x48e1f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_48e1f8:
    // 0x48e1f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48e1fc:
    // 0x48e1fc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x48e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_48e200:
    // 0x48e200: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48e204:
    // 0x48e204: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x48e204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_48e208:
    // 0x48e208: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48e208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48e20c:
    // 0x48e20c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e20cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e210:
    // 0x48e210: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x48e210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_48e214:
    // 0x48e214: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48e214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48e218:
    // 0x48e218: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x48e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_48e21c:
    // 0x48e21c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48e220:
    // 0x48e220: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48e220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48e224:
    // 0x48e224: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48e224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48e228:
    // 0x48e228: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e22c:
    // 0x48e22c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e230:
    // 0x48e230: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
label_48e234:
    if (ctx->pc == 0x48E234u) {
        ctx->pc = 0x48E234u;
            // 0x48e234: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48E238u;
        goto label_48e238;
    }
    ctx->pc = 0x48E230u;
    {
        const bool branch_taken_0x48e230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e230) {
            ctx->pc = 0x48E234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E230u;
            // 0x48e234: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e1b0;
        }
    }
    ctx->pc = 0x48E238u;
label_48e238:
    // 0x48e238: 0x9243001c  lbu         $v1, 0x1C($s2)
    ctx->pc = 0x48e238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_48e23c:
    // 0x48e23c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_48e240:
    if (ctx->pc == 0x48E240u) {
        ctx->pc = 0x48E240u;
            // 0x48e240: 0x92430044  lbu         $v1, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x48E244u;
        goto label_48e244;
    }
    ctx->pc = 0x48E23Cu;
    {
        const bool branch_taken_0x48e23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e23c) {
            ctx->pc = 0x48E240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E23Cu;
            // 0x48e240: 0x92430044  lbu         $v1, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E25Cu;
            goto label_48e25c;
        }
    }
    ctx->pc = 0x48E244u;
label_48e244:
    // 0x48e244: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x48e244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_48e248:
    // 0x48e248: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x48e248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_48e24c:
    // 0x48e24c: 0x320f809  jalr        $t9
label_48e250:
    if (ctx->pc == 0x48E250u) {
        ctx->pc = 0x48E250u;
            // 0x48e250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E254u;
        goto label_48e254;
    }
    ctx->pc = 0x48E24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E254u);
        ctx->pc = 0x48E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E24Cu;
            // 0x48e250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E254u; }
            if (ctx->pc != 0x48E254u) { return; }
        }
        }
    }
    ctx->pc = 0x48E254u;
label_48e254:
    // 0x48e254: 0xa240001c  sb          $zero, 0x1C($s2)
    ctx->pc = 0x48e254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 0));
label_48e258:
    // 0x48e258: 0x92430044  lbu         $v1, 0x44($s2)
    ctx->pc = 0x48e258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
label_48e25c:
    // 0x48e25c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_48e260:
    if (ctx->pc == 0x48E260u) {
        ctx->pc = 0x48E264u;
        goto label_48e264;
    }
    ctx->pc = 0x48E25Cu;
    {
        const bool branch_taken_0x48e25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e25c) {
            ctx->pc = 0x48E278u;
            goto label_48e278;
        }
    }
    ctx->pc = 0x48E264u;
label_48e264:
    // 0x48e264: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_48e268:
    if (ctx->pc == 0x48E268u) {
        ctx->pc = 0x48E26Cu;
        goto label_48e26c;
    }
    ctx->pc = 0x48E264u;
    {
        const bool branch_taken_0x48e264 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e264) {
            ctx->pc = 0x48E278u;
            goto label_48e278;
        }
    }
    ctx->pc = 0x48E26Cu;
label_48e26c:
    // 0x48e26c: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x48e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_48e270:
    // 0x48e270: 0x5460006a  bnel        $v1, $zero, . + 4 + (0x6A << 2)
label_48e274:
    if (ctx->pc == 0x48E274u) {
        ctx->pc = 0x48E274u;
            // 0x48e274: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x48E278u;
        goto label_48e278;
    }
    ctx->pc = 0x48E270u;
    {
        const bool branch_taken_0x48e270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e270) {
            ctx->pc = 0x48E274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E270u;
            // 0x48e274: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E41Cu;
            goto label_48e41c;
        }
    }
    ctx->pc = 0x48E278u;
label_48e278:
    // 0x48e278: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_48e27c:
    if (ctx->pc == 0x48E27Cu) {
        ctx->pc = 0x48E27Cu;
            // 0x48e27c: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->pc = 0x48E280u;
        goto label_48e280;
    }
    ctx->pc = 0x48E278u;
    {
        const bool branch_taken_0x48e278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e278) {
            ctx->pc = 0x48E27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E278u;
            // 0x48e27c: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E298u;
            goto label_48e298;
        }
    }
    ctx->pc = 0x48E280u;
label_48e280:
    // 0x48e280: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x48e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_48e284:
    // 0x48e284: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
label_48e288:
    if (ctx->pc == 0x48E288u) {
        ctx->pc = 0x48E28Cu;
        goto label_48e28c;
    }
    ctx->pc = 0x48E284u;
    {
        const bool branch_taken_0x48e284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x48e284) {
            ctx->pc = 0x48E294u;
            goto label_48e294;
        }
    }
    ctx->pc = 0x48E28Cu;
label_48e28c:
    // 0x48e28c: 0x10000062  b           . + 4 + (0x62 << 2)
label_48e290:
    if (ctx->pc == 0x48E290u) {
        ctx->pc = 0x48E294u;
        goto label_48e294;
    }
    ctx->pc = 0x48E28Cu;
    {
        const bool branch_taken_0x48e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e28c) {
            ctx->pc = 0x48E418u;
            goto label_48e418;
        }
    }
    ctx->pc = 0x48E294u;
label_48e294:
    // 0x48e294: 0xae510040  sw          $s1, 0x40($s2)
    ctx->pc = 0x48e294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
label_48e298:
    // 0x48e298: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_48e29c:
    if (ctx->pc == 0x48E29Cu) {
        ctx->pc = 0x48E29Cu;
            // 0x48e29c: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x48E2A0u;
        goto label_48e2a0;
    }
    ctx->pc = 0x48E298u;
    {
        const bool branch_taken_0x48e298 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e298) {
            ctx->pc = 0x48E29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E298u;
            // 0x48e29c: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E2A8u;
            goto label_48e2a8;
        }
    }
    ctx->pc = 0x48E2A0u;
label_48e2a0:
    // 0x48e2a0: 0x8e51003c  lw          $s1, 0x3C($s2)
    ctx->pc = 0x48e2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_48e2a4:
    // 0x48e2a4: 0x92420044  lbu         $v0, 0x44($s2)
    ctx->pc = 0x48e2a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
label_48e2a8:
    // 0x48e2a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_48e2ac:
    if (ctx->pc == 0x48E2ACu) {
        ctx->pc = 0x48E2ACu;
            // 0x48e2ac: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x48E2B0u;
        goto label_48e2b0;
    }
    ctx->pc = 0x48E2A8u;
    {
        const bool branch_taken_0x48e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e2a8) {
            ctx->pc = 0x48E2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E2A8u;
            // 0x48e2ac: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E2B8u;
            goto label_48e2b8;
        }
    }
    ctx->pc = 0x48E2B0u;
label_48e2b0:
    // 0x48e2b0: 0xae51003c  sw          $s1, 0x3C($s2)
    ctx->pc = 0x48e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
label_48e2b4:
    // 0x48e2b4: 0x92420044  lbu         $v0, 0x44($s2)
    ctx->pc = 0x48e2b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
label_48e2b8:
    // 0x48e2b8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_48e2bc:
    if (ctx->pc == 0x48E2BCu) {
        ctx->pc = 0x48E2BCu;
            // 0x48e2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48E2C0u;
        goto label_48e2c0;
    }
    ctx->pc = 0x48E2B8u;
    {
        const bool branch_taken_0x48e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e2b8) {
            ctx->pc = 0x48E2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E2B8u;
            // 0x48e2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E2D4u;
            goto label_48e2d4;
        }
    }
    ctx->pc = 0x48E2C0u;
label_48e2c0:
    // 0x48e2c0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x48e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_48e2c4:
    // 0x48e2c4: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_48e2c8:
    if (ctx->pc == 0x48E2C8u) {
        ctx->pc = 0x48E2CCu;
        goto label_48e2cc;
    }
    ctx->pc = 0x48E2C4u;
    {
        const bool branch_taken_0x48e2c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x48e2c4) {
            ctx->pc = 0x48E2D0u;
            goto label_48e2d0;
        }
    }
    ctx->pc = 0x48E2CCu;
label_48e2cc:
    // 0x48e2cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48e2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e2d0:
    // 0x48e2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48e2d4:
    // 0x48e2d4: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x48e2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
label_48e2d8:
    // 0x48e2d8: 0x92420044  lbu         $v0, 0x44($s2)
    ctx->pc = 0x48e2d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
label_48e2dc:
    // 0x48e2dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_48e2e0:
    // 0x48e2e0: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_48e2e4:
    if (ctx->pc == 0x48E2E4u) {
        ctx->pc = 0x48E2E4u;
            // 0x48e2e4: 0xa2420044  sb          $v0, 0x44($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x48E2E8u;
        goto label_48e2e8;
    }
    ctx->pc = 0x48E2E0u;
    {
        const bool branch_taken_0x48e2e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E2E0u;
            // 0x48e2e4: 0xa2420044  sb          $v0, 0x44($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e2e0) {
            ctx->pc = 0x48E35Cu;
            goto label_48e35c;
        }
    }
    ctx->pc = 0x48E2E8u;
label_48e2e8:
    // 0x48e2e8: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x48e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48e2ec:
    // 0x48e2ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x48e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48e2f0:
    // 0x48e2f0: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x48e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48e2f4:
    // 0x48e2f4: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x48e2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_48e2f8:
    // 0x48e2f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48e2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_48e2fc:
    // 0x48e2fc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x48e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48e300:
    // 0x48e300: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x48e300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48e304:
    // 0x48e304: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x48e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48e308:
    // 0x48e308: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x48e308u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_48e30c:
    // 0x48e30c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x48e30cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_48e310:
    // 0x48e310: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48e310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48e314:
    // 0x48e314: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48e314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_48e318:
    // 0x48e318: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48e318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_48e31c:
    // 0x48e31c: 0x0  nop
    ctx->pc = 0x48e31cu;
    // NOP
label_48e320:
    // 0x48e320: 0xae4200e0  sw          $v0, 0xE0($s2)
    ctx->pc = 0x48e320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
label_48e324:
    // 0x48e324: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x48e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48e328:
    // 0x48e328: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x48e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48e32c:
    // 0x48e32c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x48e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48e330:
    // 0x48e330: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x48e330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_48e334:
    // 0x48e334: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48e334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_48e338:
    // 0x48e338: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x48e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48e33c:
    // 0x48e33c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x48e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48e340:
    // 0x48e340: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x48e340u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_48e344:
    // 0x48e344: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x48e344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_48e348:
    // 0x48e348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48e348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48e34c:
    // 0x48e34c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48e34cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_48e350:
    // 0x48e350: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x48e350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_48e354:
    // 0x48e354: 0x0  nop
    ctx->pc = 0x48e354u;
    // NOP
label_48e358:
    // 0x48e358: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x48e358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
label_48e35c:
    // 0x48e35c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x48e35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_48e360:
    // 0x48e360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48e360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48e364:
    // 0x48e364: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x48e364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_48e368:
    // 0x48e368: 0x320f809  jalr        $t9
label_48e36c:
    if (ctx->pc == 0x48E36Cu) {
        ctx->pc = 0x48E36Cu;
            // 0x48e36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E370u;
        goto label_48e370;
    }
    ctx->pc = 0x48E368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E370u);
        ctx->pc = 0x48E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E368u;
            // 0x48e36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E370u; }
            if (ctx->pc != 0x48E370u) { return; }
        }
        }
    }
    ctx->pc = 0x48E370u;
label_48e370:
    // 0x48e370: 0x924300c0  lbu         $v1, 0xC0($s2)
    ctx->pc = 0x48e370u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_48e374:
    // 0x48e374: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_48e378:
    if (ctx->pc == 0x48E378u) {
        ctx->pc = 0x48E378u;
            // 0x48e378: 0x8e430028  lw          $v1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x48E37Cu;
        goto label_48e37c;
    }
    ctx->pc = 0x48E374u;
    {
        const bool branch_taken_0x48e374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e374) {
            ctx->pc = 0x48E378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E374u;
            // 0x48e378: 0x8e430028  lw          $v1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E39Cu;
            goto label_48e39c;
        }
    }
    ctx->pc = 0x48E37Cu;
label_48e37c:
    // 0x48e37c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x48e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_48e380:
    // 0x48e380: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x48e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_48e384:
    // 0x48e384: 0x8e4500bc  lw          $a1, 0xBC($s2)
    ctx->pc = 0x48e384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_48e388:
    // 0x48e388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48e38c:
    // 0x48e38c: 0xc04a508  jal         func_129420
label_48e390:
    if (ctx->pc == 0x48E390u) {
        ctx->pc = 0x48E390u;
            // 0x48e390: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48E394u;
        goto label_48e394;
    }
    ctx->pc = 0x48E38Cu;
    SET_GPR_U32(ctx, 31, 0x48E394u);
    ctx->pc = 0x48E390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E38Cu;
            // 0x48e390: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E394u; }
        if (ctx->pc != 0x48E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E394u; }
        if (ctx->pc != 0x48E394u) { return; }
    }
    ctx->pc = 0x48E394u;
label_48e394:
    // 0x48e394: 0xa24000c0  sb          $zero, 0xC0($s2)
    ctx->pc = 0x48e394u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 192), (uint8_t)GPR_U32(ctx, 0));
label_48e398:
    // 0x48e398: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x48e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_48e39c:
    // 0x48e39c: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x48e39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_48e3a0:
    // 0x48e3a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48e3a4:
    // 0x48e3a4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x48e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_48e3a8:
    // 0x48e3a8: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x48e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_48e3ac:
    // 0x48e3ac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e3acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e3b0:
    // 0x48e3b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e3b4:
    // 0x48e3b4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_48e3b8:
    if (ctx->pc == 0x48E3B8u) {
        ctx->pc = 0x48E3BCu;
        goto label_48e3bc;
    }
    ctx->pc = 0x48E3B4u;
    {
        const bool branch_taken_0x48e3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e3b4) {
            ctx->pc = 0x48E418u;
            goto label_48e418;
        }
    }
    ctx->pc = 0x48E3BCu;
label_48e3bc:
    // 0x48e3bc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x48e3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_48e3c0:
    // 0x48e3c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e3c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e3c4:
    // 0x48e3c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x48e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48e3c8:
    // 0x48e3c8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x48e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_48e3cc:
    // 0x48e3cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_48e3d0:
    if (ctx->pc == 0x48E3D0u) {
        ctx->pc = 0x48E3D0u;
            // 0x48e3d0: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x48E3D4u;
        goto label_48e3d4;
    }
    ctx->pc = 0x48E3CCu;
    {
        const bool branch_taken_0x48e3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E3CCu;
            // 0x48e3d0: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e3cc) {
            ctx->pc = 0x48E3E8u;
            goto label_48e3e8;
        }
    }
    ctx->pc = 0x48E3D4u;
label_48e3d4:
    // 0x48e3d4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x48e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_48e3d8:
    // 0x48e3d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_48e3dc:
    if (ctx->pc == 0x48E3DCu) {
        ctx->pc = 0x48E3E0u;
        goto label_48e3e0;
    }
    ctx->pc = 0x48E3D8u;
    {
        const bool branch_taken_0x48e3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e3d8) {
            ctx->pc = 0x48E3E8u;
            goto label_48e3e8;
        }
    }
    ctx->pc = 0x48E3E0u;
label_48e3e0:
    // 0x48e3e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x48e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_48e3e4:
    // 0x48e3e4: 0x0  nop
    ctx->pc = 0x48e3e4u;
    // NOP
label_48e3e8:
    // 0x48e3e8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x48e3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_48e3ec:
    // 0x48e3ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e3ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e3f0:
    // 0x48e3f0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x48e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_48e3f4:
    // 0x48e3f4: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x48e3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48e3f8:
    // 0x48e3f8: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x48e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_48e3fc:
    // 0x48e3fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48e400:
    // 0x48e400: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48e404:
    // 0x48e404: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x48e404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_48e408:
    // 0x48e408: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e40c:
    // 0x48e40c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e410:
    // 0x48e410: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
label_48e414:
    if (ctx->pc == 0x48E414u) {
        ctx->pc = 0x48E414u;
            // 0x48e414: 0x6183c  dsll32      $v1, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
        ctx->pc = 0x48E418u;
        goto label_48e418;
    }
    ctx->pc = 0x48E410u;
    {
        const bool branch_taken_0x48e410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e410) {
            ctx->pc = 0x48E414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E410u;
            // 0x48e414: 0x6183c  dsll32      $v1, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e3c0;
        }
    }
    ctx->pc = 0x48E418u;
label_48e418:
    // 0x48e418: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48e418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48e41c:
    // 0x48e41c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48e41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48e420:
    // 0x48e420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48e424:
    // 0x48e424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48e428:
    // 0x48e428: 0x3e00008  jr          $ra
label_48e42c:
    if (ctx->pc == 0x48E42Cu) {
        ctx->pc = 0x48E42Cu;
            // 0x48e42c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x48E430u;
        goto label_48e430;
    }
    ctx->pc = 0x48E428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E428u;
            // 0x48e42c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E430u;
label_48e430:
    // 0x48e430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48e434:
    // 0x48e434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48e438:
    // 0x48e438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48e43c:
    // 0x48e43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48e440:
    // 0x48e440: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x48e440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
label_48e444:
    // 0x48e444: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x48e444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_48e448:
    // 0x48e448: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x48e448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_48e44c:
    // 0x48e44c: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x48e44cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_48e450:
    // 0x48e450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48e454:
    // 0x48e454: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x48e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_48e458:
    // 0x48e458: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48e45c:
    // 0x48e45c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e45cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e460:
    // 0x48e460: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e464:
    // 0x48e464: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_48e468:
    if (ctx->pc == 0x48E468u) {
        ctx->pc = 0x48E468u;
            // 0x48e468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E46Cu;
        goto label_48e46c;
    }
    ctx->pc = 0x48E464u;
    {
        const bool branch_taken_0x48e464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E464u;
            // 0x48e468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e464) {
            ctx->pc = 0x48E4E0u;
            goto label_48e4e0;
        }
    }
    ctx->pc = 0x48E46Cu;
label_48e46c:
    // 0x48e46c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48e470:
    // 0x48e470: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e470u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e474:
    // 0x48e474: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48e474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48e478:
    // 0x48e478: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x48e478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48e47c:
    // 0x48e47c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_48e480:
    if (ctx->pc == 0x48E480u) {
        ctx->pc = 0x48E484u;
        goto label_48e484;
    }
    ctx->pc = 0x48E47Cu;
    {
        const bool branch_taken_0x48e47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e47c) {
            ctx->pc = 0x48E4B0u;
            goto label_48e4b0;
        }
    }
    ctx->pc = 0x48E484u;
label_48e484:
    // 0x48e484: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48e488:
    if (ctx->pc == 0x48E488u) {
        ctx->pc = 0x48E48Cu;
        goto label_48e48c;
    }
    ctx->pc = 0x48E484u;
    {
        const bool branch_taken_0x48e484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e484) {
            ctx->pc = 0x48E4A0u;
            goto label_48e4a0;
        }
    }
    ctx->pc = 0x48E48Cu;
label_48e48c:
    // 0x48e48c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48e48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48e490:
    // 0x48e490: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48e490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48e494:
    // 0x48e494: 0x320f809  jalr        $t9
label_48e498:
    if (ctx->pc == 0x48E498u) {
        ctx->pc = 0x48E498u;
            // 0x48e498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48E49Cu;
        goto label_48e49c;
    }
    ctx->pc = 0x48E494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E49Cu);
        ctx->pc = 0x48E498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E494u;
            // 0x48e498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E49Cu; }
            if (ctx->pc != 0x48E49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48E49Cu;
label_48e49c:
    // 0x48e49c: 0x0  nop
    ctx->pc = 0x48e49cu;
    // NOP
label_48e4a0:
    // 0x48e4a0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48e4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48e4a4:
    // 0x48e4a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e4a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e4a8:
    // 0x48e4a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48e4ac:
    // 0x48e4ac: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x48e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_48e4b0:
    // 0x48e4b0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48e4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48e4b4:
    // 0x48e4b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48e4b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48e4b8:
    // 0x48e4b8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x48e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48e4bc:
    // 0x48e4bc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48e4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48e4c0:
    // 0x48e4c0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x48e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48e4c4:
    // 0x48e4c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48e4c8:
    // 0x48e4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48e4cc:
    // 0x48e4cc: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48e4d0:
    // 0x48e4d0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e4d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e4d4:
    // 0x48e4d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e4d8:
    // 0x48e4d8: 0x5460ffe5  bnel        $v1, $zero, . + 4 + (-0x1B << 2)
label_48e4dc:
    if (ctx->pc == 0x48E4DCu) {
        ctx->pc = 0x48E4DCu;
            // 0x48e4dc: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48E4E0u;
        goto label_48e4e0;
    }
    ctx->pc = 0x48E4D8u;
    {
        const bool branch_taken_0x48e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e4d8) {
            ctx->pc = 0x48E4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E4D8u;
            // 0x48e4dc: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e470;
        }
    }
    ctx->pc = 0x48E4E0u;
label_48e4e0:
    // 0x48e4e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48e4e4:
    // 0x48e4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48e4e8:
    // 0x48e4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48e4ec:
    // 0x48e4ec: 0x3e00008  jr          $ra
label_48e4f0:
    if (ctx->pc == 0x48E4F0u) {
        ctx->pc = 0x48E4F0u;
            // 0x48e4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x48E4F4u;
        goto label_48e4f4;
    }
    ctx->pc = 0x48E4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E4ECu;
            // 0x48e4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E4F4u;
label_48e4f4:
    // 0x48e4f4: 0x0  nop
    ctx->pc = 0x48e4f4u;
    // NOP
label_48e4f8:
    // 0x48e4f8: 0x0  nop
    ctx->pc = 0x48e4f8u;
    // NOP
label_48e4fc:
    // 0x48e4fc: 0x0  nop
    ctx->pc = 0x48e4fcu;
    // NOP
label_48e500:
    // 0x48e500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48e500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48e504:
    // 0x48e504: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48e504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48e508:
    // 0x48e508: 0x3200008  jr          $t9
label_48e50c:
    if (ctx->pc == 0x48E50Cu) {
        ctx->pc = 0x48E510u;
        goto label_fallthrough_0x48e508;
    }
    ctx->pc = 0x48E508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x48e508:
    ctx->pc = 0x48E510u;
}
