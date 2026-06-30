#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041E220
// Address: 0x41e220 - 0x41e490
void sub_0041E220_0x41e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E220_0x41e220");
#endif

    switch (ctx->pc) {
        case 0x41e220u: goto label_41e220;
        case 0x41e224u: goto label_41e224;
        case 0x41e228u: goto label_41e228;
        case 0x41e22cu: goto label_41e22c;
        case 0x41e230u: goto label_41e230;
        case 0x41e234u: goto label_41e234;
        case 0x41e238u: goto label_41e238;
        case 0x41e23cu: goto label_41e23c;
        case 0x41e240u: goto label_41e240;
        case 0x41e244u: goto label_41e244;
        case 0x41e248u: goto label_41e248;
        case 0x41e24cu: goto label_41e24c;
        case 0x41e250u: goto label_41e250;
        case 0x41e254u: goto label_41e254;
        case 0x41e258u: goto label_41e258;
        case 0x41e25cu: goto label_41e25c;
        case 0x41e260u: goto label_41e260;
        case 0x41e264u: goto label_41e264;
        case 0x41e268u: goto label_41e268;
        case 0x41e26cu: goto label_41e26c;
        case 0x41e270u: goto label_41e270;
        case 0x41e274u: goto label_41e274;
        case 0x41e278u: goto label_41e278;
        case 0x41e27cu: goto label_41e27c;
        case 0x41e280u: goto label_41e280;
        case 0x41e284u: goto label_41e284;
        case 0x41e288u: goto label_41e288;
        case 0x41e28cu: goto label_41e28c;
        case 0x41e290u: goto label_41e290;
        case 0x41e294u: goto label_41e294;
        case 0x41e298u: goto label_41e298;
        case 0x41e29cu: goto label_41e29c;
        case 0x41e2a0u: goto label_41e2a0;
        case 0x41e2a4u: goto label_41e2a4;
        case 0x41e2a8u: goto label_41e2a8;
        case 0x41e2acu: goto label_41e2ac;
        case 0x41e2b0u: goto label_41e2b0;
        case 0x41e2b4u: goto label_41e2b4;
        case 0x41e2b8u: goto label_41e2b8;
        case 0x41e2bcu: goto label_41e2bc;
        case 0x41e2c0u: goto label_41e2c0;
        case 0x41e2c4u: goto label_41e2c4;
        case 0x41e2c8u: goto label_41e2c8;
        case 0x41e2ccu: goto label_41e2cc;
        case 0x41e2d0u: goto label_41e2d0;
        case 0x41e2d4u: goto label_41e2d4;
        case 0x41e2d8u: goto label_41e2d8;
        case 0x41e2dcu: goto label_41e2dc;
        case 0x41e2e0u: goto label_41e2e0;
        case 0x41e2e4u: goto label_41e2e4;
        case 0x41e2e8u: goto label_41e2e8;
        case 0x41e2ecu: goto label_41e2ec;
        case 0x41e2f0u: goto label_41e2f0;
        case 0x41e2f4u: goto label_41e2f4;
        case 0x41e2f8u: goto label_41e2f8;
        case 0x41e2fcu: goto label_41e2fc;
        case 0x41e300u: goto label_41e300;
        case 0x41e304u: goto label_41e304;
        case 0x41e308u: goto label_41e308;
        case 0x41e30cu: goto label_41e30c;
        case 0x41e310u: goto label_41e310;
        case 0x41e314u: goto label_41e314;
        case 0x41e318u: goto label_41e318;
        case 0x41e31cu: goto label_41e31c;
        case 0x41e320u: goto label_41e320;
        case 0x41e324u: goto label_41e324;
        case 0x41e328u: goto label_41e328;
        case 0x41e32cu: goto label_41e32c;
        case 0x41e330u: goto label_41e330;
        case 0x41e334u: goto label_41e334;
        case 0x41e338u: goto label_41e338;
        case 0x41e33cu: goto label_41e33c;
        case 0x41e340u: goto label_41e340;
        case 0x41e344u: goto label_41e344;
        case 0x41e348u: goto label_41e348;
        case 0x41e34cu: goto label_41e34c;
        case 0x41e350u: goto label_41e350;
        case 0x41e354u: goto label_41e354;
        case 0x41e358u: goto label_41e358;
        case 0x41e35cu: goto label_41e35c;
        case 0x41e360u: goto label_41e360;
        case 0x41e364u: goto label_41e364;
        case 0x41e368u: goto label_41e368;
        case 0x41e36cu: goto label_41e36c;
        case 0x41e370u: goto label_41e370;
        case 0x41e374u: goto label_41e374;
        case 0x41e378u: goto label_41e378;
        case 0x41e37cu: goto label_41e37c;
        case 0x41e380u: goto label_41e380;
        case 0x41e384u: goto label_41e384;
        case 0x41e388u: goto label_41e388;
        case 0x41e38cu: goto label_41e38c;
        case 0x41e390u: goto label_41e390;
        case 0x41e394u: goto label_41e394;
        case 0x41e398u: goto label_41e398;
        case 0x41e39cu: goto label_41e39c;
        case 0x41e3a0u: goto label_41e3a0;
        case 0x41e3a4u: goto label_41e3a4;
        case 0x41e3a8u: goto label_41e3a8;
        case 0x41e3acu: goto label_41e3ac;
        case 0x41e3b0u: goto label_41e3b0;
        case 0x41e3b4u: goto label_41e3b4;
        case 0x41e3b8u: goto label_41e3b8;
        case 0x41e3bcu: goto label_41e3bc;
        case 0x41e3c0u: goto label_41e3c0;
        case 0x41e3c4u: goto label_41e3c4;
        case 0x41e3c8u: goto label_41e3c8;
        case 0x41e3ccu: goto label_41e3cc;
        case 0x41e3d0u: goto label_41e3d0;
        case 0x41e3d4u: goto label_41e3d4;
        case 0x41e3d8u: goto label_41e3d8;
        case 0x41e3dcu: goto label_41e3dc;
        case 0x41e3e0u: goto label_41e3e0;
        case 0x41e3e4u: goto label_41e3e4;
        case 0x41e3e8u: goto label_41e3e8;
        case 0x41e3ecu: goto label_41e3ec;
        case 0x41e3f0u: goto label_41e3f0;
        case 0x41e3f4u: goto label_41e3f4;
        case 0x41e3f8u: goto label_41e3f8;
        case 0x41e3fcu: goto label_41e3fc;
        case 0x41e400u: goto label_41e400;
        case 0x41e404u: goto label_41e404;
        case 0x41e408u: goto label_41e408;
        case 0x41e40cu: goto label_41e40c;
        case 0x41e410u: goto label_41e410;
        case 0x41e414u: goto label_41e414;
        case 0x41e418u: goto label_41e418;
        case 0x41e41cu: goto label_41e41c;
        case 0x41e420u: goto label_41e420;
        case 0x41e424u: goto label_41e424;
        case 0x41e428u: goto label_41e428;
        case 0x41e42cu: goto label_41e42c;
        case 0x41e430u: goto label_41e430;
        case 0x41e434u: goto label_41e434;
        case 0x41e438u: goto label_41e438;
        case 0x41e43cu: goto label_41e43c;
        case 0x41e440u: goto label_41e440;
        case 0x41e444u: goto label_41e444;
        case 0x41e448u: goto label_41e448;
        case 0x41e44cu: goto label_41e44c;
        case 0x41e450u: goto label_41e450;
        case 0x41e454u: goto label_41e454;
        case 0x41e458u: goto label_41e458;
        case 0x41e45cu: goto label_41e45c;
        case 0x41e460u: goto label_41e460;
        case 0x41e464u: goto label_41e464;
        case 0x41e468u: goto label_41e468;
        case 0x41e46cu: goto label_41e46c;
        case 0x41e470u: goto label_41e470;
        case 0x41e474u: goto label_41e474;
        case 0x41e478u: goto label_41e478;
        case 0x41e47cu: goto label_41e47c;
        case 0x41e480u: goto label_41e480;
        case 0x41e484u: goto label_41e484;
        case 0x41e488u: goto label_41e488;
        case 0x41e48cu: goto label_41e48c;
        default: break;
    }

    ctx->pc = 0x41e220u;

label_41e220:
    // 0x41e220: 0x3e00008  jr          $ra
label_41e224:
    if (ctx->pc == 0x41E224u) {
        ctx->pc = 0x41E224u;
            // 0x41e224: 0x8c820224  lw          $v0, 0x224($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->pc = 0x41E228u;
        goto label_41e228;
    }
    ctx->pc = 0x41E220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E220u;
            // 0x41e224: 0x8c820224  lw          $v0, 0x224($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E228u;
label_41e228:
    // 0x41e228: 0x0  nop
    ctx->pc = 0x41e228u;
    // NOP
label_41e22c:
    // 0x41e22c: 0x0  nop
    ctx->pc = 0x41e22cu;
    // NOP
label_41e230:
    // 0x41e230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41e234:
    // 0x41e234: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41e234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41e238:
    // 0x41e238: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41e238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41e23c:
    // 0x41e23c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41e240:
    // 0x41e240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41e244:
    // 0x41e244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41e248:
    // 0x41e248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41e24c:
    // 0x41e24c: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x41e24cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_41e250:
    // 0x41e250: 0x10e60037  beq         $a3, $a2, . + 4 + (0x37 << 2)
label_41e254:
    if (ctx->pc == 0x41E254u) {
        ctx->pc = 0x41E254u;
            // 0x41e254: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E258u;
        goto label_41e258;
    }
    ctx->pc = 0x41E250u;
    {
        const bool branch_taken_0x41e250 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x41E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E250u;
            // 0x41e254: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e250) {
            ctx->pc = 0x41E330u;
            goto label_41e330;
        }
    }
    ctx->pc = 0x41E258u;
label_41e258:
    // 0x41e258: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41e258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41e25c:
    // 0x41e25c: 0x50e30031  beql        $a3, $v1, . + 4 + (0x31 << 2)
label_41e260:
    if (ctx->pc == 0x41E260u) {
        ctx->pc = 0x41E260u;
            // 0x41e260: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41E264u;
        goto label_41e264;
    }
    ctx->pc = 0x41E25Cu;
    {
        const bool branch_taken_0x41e25c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x41e25c) {
            ctx->pc = 0x41E260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41E25Cu;
            // 0x41e260: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E324u;
            goto label_41e324;
        }
    }
    ctx->pc = 0x41E264u;
label_41e264:
    // 0x41e264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41e268:
    // 0x41e268: 0x50e50003  beql        $a3, $a1, . + 4 + (0x3 << 2)
label_41e26c:
    if (ctx->pc == 0x41E26Cu) {
        ctx->pc = 0x41E26Cu;
            // 0x41e26c: 0x922300a9  lbu         $v1, 0xA9($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 169)));
        ctx->pc = 0x41E270u;
        goto label_41e270;
    }
    ctx->pc = 0x41E268u;
    {
        const bool branch_taken_0x41e268 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x41e268) {
            ctx->pc = 0x41E26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41E268u;
            // 0x41e26c: 0x922300a9  lbu         $v1, 0xA9($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 169)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E278u;
            goto label_41e278;
        }
    }
    ctx->pc = 0x41E270u;
label_41e270:
    // 0x41e270: 0x1000003d  b           . + 4 + (0x3D << 2)
label_41e274:
    if (ctx->pc == 0x41E274u) {
        ctx->pc = 0x41E278u;
        goto label_41e278;
    }
    ctx->pc = 0x41E270u;
    {
        const bool branch_taken_0x41e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e270) {
            ctx->pc = 0x41E368u;
            goto label_41e368;
        }
    }
    ctx->pc = 0x41E278u;
label_41e278:
    // 0x41e278: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_41e27c:
    if (ctx->pc == 0x41E27Cu) {
        ctx->pc = 0x41E280u;
        goto label_41e280;
    }
    ctx->pc = 0x41E278u;
    {
        const bool branch_taken_0x41e278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e278) {
            ctx->pc = 0x41E368u;
            goto label_41e368;
        }
    }
    ctx->pc = 0x41E280u;
label_41e280:
    // 0x41e280: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41e284:
    // 0x41e284: 0x240461bc  addiu       $a0, $zero, 0x61BC
    ctx->pc = 0x41e284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25020));
label_41e288:
    // 0x41e288: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41e288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41e28c:
    // 0x41e28c: 0xa0467342  sb          $a2, 0x7342($v0)
    ctx->pc = 0x41e28cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29506), (uint8_t)GPR_U32(ctx, 6));
label_41e290:
    // 0x41e290: 0xa4647340  sh          $a0, 0x7340($v1)
    ctx->pc = 0x41e290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 29504), (uint16_t)GPR_U32(ctx, 4));
label_41e294:
    // 0x41e294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41e298:
    // 0x41e298: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x41e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_41e29c:
    // 0x41e29c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_41e2a0:
    // 0x41e2a0: 0xa0437343  sb          $v1, 0x7343($v0)
    ctx->pc = 0x41e2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29507), (uint8_t)GPR_U32(ctx, 3));
label_41e2a4:
    // 0x41e2a4: 0x2484734c  addiu       $a0, $a0, 0x734C
    ctx->pc = 0x41e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29516));
label_41e2a8:
    // 0x41e2a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41e2ac:
    // 0x41e2ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x41e2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e2b0:
    // 0x41e2b0: 0xac457344  sw          $a1, 0x7344($v0)
    ctx->pc = 0x41e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29508), GPR_U32(ctx, 5));
label_41e2b4:
    // 0x41e2b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41e2b8:
    // 0x41e2b8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x41e2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_41e2bc:
    // 0x41e2bc: 0xac407348  sw          $zero, 0x7348($v0)
    ctx->pc = 0x41e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29512), GPR_U32(ctx, 0));
label_41e2c0:
    // 0x41e2c0: 0xc04cb1c  jal         func_132C70
label_41e2c4:
    if (ctx->pc == 0x41E2C4u) {
        ctx->pc = 0x41E2C4u;
            // 0x41e2c4: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->pc = 0x41E2C8u;
        goto label_41e2c8;
    }
    ctx->pc = 0x41E2C0u;
    SET_GPR_U32(ctx, 31, 0x41E2C8u);
    ctx->pc = 0x41E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E2C0u;
            // 0x41e2c4: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E2C8u; }
        if (ctx->pc != 0x41E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E2C8u; }
        if (ctx->pc != 0x41E2C8u) { return; }
    }
    ctx->pc = 0x41E2C8u;
label_41e2c8:
    // 0x41e2c8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_41e2cc:
    // 0x41e2cc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x41e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_41e2d0:
    // 0x41e2d0: 0x24847358  addiu       $a0, $a0, 0x7358
    ctx->pc = 0x41e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29528));
label_41e2d4:
    // 0x41e2d4: 0xc04cb1c  jal         func_132C70
label_41e2d8:
    if (ctx->pc == 0x41E2D8u) {
        ctx->pc = 0x41E2D8u;
            // 0x41e2d8: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->pc = 0x41E2DCu;
        goto label_41e2dc;
    }
    ctx->pc = 0x41E2D4u;
    SET_GPR_U32(ctx, 31, 0x41E2DCu);
    ctx->pc = 0x41E2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E2D4u;
            // 0x41e2d8: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E2DCu; }
        if (ctx->pc != 0x41E2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E2DCu; }
        if (ctx->pc != 0x41E2DCu) { return; }
    }
    ctx->pc = 0x41E2DCu;
label_41e2dc:
    // 0x41e2dc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_41e2e0:
    // 0x41e2e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x41e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_41e2e4:
    // 0x41e2e4: 0x24847364  addiu       $a0, $a0, 0x7364
    ctx->pc = 0x41e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29540));
label_41e2e8:
    // 0x41e2e8: 0xc04cb1c  jal         func_132C70
label_41e2ec:
    if (ctx->pc == 0x41E2ECu) {
        ctx->pc = 0x41E2ECu;
            // 0x41e2ec: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->pc = 0x41E2F0u;
        goto label_41e2f0;
    }
    ctx->pc = 0x41E2E8u;
    SET_GPR_U32(ctx, 31, 0x41E2F0u);
    ctx->pc = 0x41E2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E2E8u;
            // 0x41e2ec: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E2F0u; }
        if (ctx->pc != 0x41E2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E2F0u; }
        if (ctx->pc != 0x41E2F0u) { return; }
    }
    ctx->pc = 0x41E2F0u;
label_41e2f0:
    // 0x41e2f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x41e2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41e2f4:
    // 0x41e2f4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x41e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_41e2f8:
    // 0x41e2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41e2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41e2fc:
    // 0x41e2fc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x41e2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_41e300:
    // 0x41e300: 0x320f809  jalr        $t9
label_41e304:
    if (ctx->pc == 0x41E304u) {
        ctx->pc = 0x41E304u;
            // 0x41e304: 0x24a57340  addiu       $a1, $a1, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29504));
        ctx->pc = 0x41E308u;
        goto label_41e308;
    }
    ctx->pc = 0x41E300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41E308u);
        ctx->pc = 0x41E304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E300u;
            // 0x41e304: 0x24a57340  addiu       $a1, $a1, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29504));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41E308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41E308u; }
            if (ctx->pc != 0x41E308u) { return; }
        }
        }
    }
    ctx->pc = 0x41E308u;
label_41e308:
    // 0x41e308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x41e308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_41e30c:
    // 0x41e30c: 0x2e03000c  sltiu       $v1, $s0, 0xC
    ctx->pc = 0x41e30cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_41e310:
    // 0x41e310: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_41e314:
    if (ctx->pc == 0x41E314u) {
        ctx->pc = 0x41E314u;
            // 0x41e314: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x41E318u;
        goto label_41e318;
    }
    ctx->pc = 0x41E310u;
    {
        const bool branch_taken_0x41e310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e310) {
            ctx->pc = 0x41E314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41E310u;
            // 0x41e314: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E2F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41e2f4;
        }
    }
    ctx->pc = 0x41E318u;
label_41e318:
    // 0x41e318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41e318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41e31c:
    // 0x41e31c: 0x10000012  b           . + 4 + (0x12 << 2)
label_41e320:
    if (ctx->pc == 0x41E320u) {
        ctx->pc = 0x41E320u;
            // 0x41e320: 0xa22300a9  sb          $v1, 0xA9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41E324u;
        goto label_41e324;
    }
    ctx->pc = 0x41E31Cu;
    {
        const bool branch_taken_0x41e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E31Cu;
            // 0x41e320: 0xa22300a9  sb          $v1, 0xA9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e31c) {
            ctx->pc = 0x41E368u;
            goto label_41e368;
        }
    }
    ctx->pc = 0x41E324u;
label_41e324:
    // 0x41e324: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x41e324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_41e328:
    // 0x41e328: 0x320f809  jalr        $t9
label_41e32c:
    if (ctx->pc == 0x41E32Cu) {
        ctx->pc = 0x41E330u;
        goto label_41e330;
    }
    ctx->pc = 0x41E328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41E330u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41E330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41E330u; }
            if (ctx->pc != 0x41E330u) { return; }
        }
        }
    }
    ctx->pc = 0x41E330u;
label_41e330:
    // 0x41e330: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x41e330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_41e334:
    // 0x41e334: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_41e338:
    if (ctx->pc == 0x41E338u) {
        ctx->pc = 0x41E33Cu;
        goto label_41e33c;
    }
    ctx->pc = 0x41E334u;
    {
        const bool branch_taken_0x41e334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e334) {
            ctx->pc = 0x41E368u;
            goto label_41e368;
        }
    }
    ctx->pc = 0x41E33Cu;
label_41e33c:
    // 0x41e33c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41e33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e340:
    // 0x41e340: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41e340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e344:
    // 0x41e344: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x41e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_41e348:
    // 0x41e348: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41e34c:
    // 0x41e34c: 0xc0e3658  jal         func_38D960
label_41e350:
    if (ctx->pc == 0x41E350u) {
        ctx->pc = 0x41E350u;
            // 0x41e350: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x41E354u;
        goto label_41e354;
    }
    ctx->pc = 0x41E34Cu;
    SET_GPR_U32(ctx, 31, 0x41E354u);
    ctx->pc = 0x41E350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E34Cu;
            // 0x41e350: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E354u; }
        if (ctx->pc != 0x41E354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E354u; }
        if (ctx->pc != 0x41E354u) { return; }
    }
    ctx->pc = 0x41E354u;
label_41e354:
    // 0x41e354: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41e354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41e358:
    // 0x41e358: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x41e358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41e35c:
    // 0x41e35c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_41e360:
    if (ctx->pc == 0x41E360u) {
        ctx->pc = 0x41E360u;
            // 0x41e360: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x41E364u;
        goto label_41e364;
    }
    ctx->pc = 0x41E35Cu;
    {
        const bool branch_taken_0x41e35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E35Cu;
            // 0x41e360: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e35c) {
            ctx->pc = 0x41E344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41e344;
        }
    }
    ctx->pc = 0x41E364u;
label_41e364:
    // 0x41e364: 0x0  nop
    ctx->pc = 0x41e364u;
    // NOP
label_41e368:
    // 0x41e368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41e368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41e36c:
    // 0x41e36c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41e36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e370:
    // 0x41e370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41e370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e374:
    // 0x41e374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41e374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e378:
    // 0x41e378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41e37c:
    // 0x41e37c: 0x3e00008  jr          $ra
label_41e380:
    if (ctx->pc == 0x41E380u) {
        ctx->pc = 0x41E380u;
            // 0x41e380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41E384u;
        goto label_41e384;
    }
    ctx->pc = 0x41E37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E37Cu;
            // 0x41e380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E384u;
label_41e384:
    // 0x41e384: 0x0  nop
    ctx->pc = 0x41e384u;
    // NOP
label_41e388:
    // 0x41e388: 0x0  nop
    ctx->pc = 0x41e388u;
    // NOP
label_41e38c:
    // 0x41e38c: 0x0  nop
    ctx->pc = 0x41e38cu;
    // NOP
label_41e390:
    // 0x41e390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41e394:
    // 0x41e394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41e398:
    // 0x41e398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41e39c:
    // 0x41e39c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41e39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41e3a0:
    // 0x41e3a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41e3a4:
    // 0x41e3a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41e3a8:
    // 0x41e3a8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x41e3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41e3ac:
    // 0x41e3ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_41e3b0:
    if (ctx->pc == 0x41E3B0u) {
        ctx->pc = 0x41E3B0u;
            // 0x41e3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E3B4u;
        goto label_41e3b4;
    }
    ctx->pc = 0x41E3ACu;
    {
        const bool branch_taken_0x41e3ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E3ACu;
            // 0x41e3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e3ac) {
            ctx->pc = 0x41E3E8u;
            goto label_41e3e8;
        }
    }
    ctx->pc = 0x41E3B4u;
label_41e3b4:
    // 0x41e3b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41e3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e3b8:
    // 0x41e3b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41e3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e3bc:
    // 0x41e3bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x41e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_41e3c0:
    // 0x41e3c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41e3c4:
    // 0x41e3c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41e3c8:
    // 0x41e3c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41e3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41e3cc:
    // 0x41e3cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x41e3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_41e3d0:
    // 0x41e3d0: 0x320f809  jalr        $t9
label_41e3d4:
    if (ctx->pc == 0x41E3D4u) {
        ctx->pc = 0x41E3D8u;
        goto label_41e3d8;
    }
    ctx->pc = 0x41E3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41E3D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41E3D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41E3D8u; }
            if (ctx->pc != 0x41E3D8u) { return; }
        }
        }
    }
    ctx->pc = 0x41E3D8u;
label_41e3d8:
    // 0x41e3d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41e3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41e3dc:
    // 0x41e3dc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x41e3dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_41e3e0:
    // 0x41e3e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_41e3e4:
    if (ctx->pc == 0x41E3E4u) {
        ctx->pc = 0x41E3E4u;
            // 0x41e3e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x41E3E8u;
        goto label_41e3e8;
    }
    ctx->pc = 0x41E3E0u;
    {
        const bool branch_taken_0x41e3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E3E0u;
            // 0x41e3e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e3e0) {
            ctx->pc = 0x41E3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41e3bc;
        }
    }
    ctx->pc = 0x41E3E8u;
label_41e3e8:
    // 0x41e3e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41e3ec:
    // 0x41e3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41e3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e3f0:
    // 0x41e3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41e3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e3f4:
    // 0x41e3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41e3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e3f8:
    // 0x41e3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41e3fc:
    // 0x41e3fc: 0x3e00008  jr          $ra
label_41e400:
    if (ctx->pc == 0x41E400u) {
        ctx->pc = 0x41E400u;
            // 0x41e400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41E404u;
        goto label_41e404;
    }
    ctx->pc = 0x41E3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E3FCu;
            // 0x41e400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E404u;
label_41e404:
    // 0x41e404: 0x0  nop
    ctx->pc = 0x41e404u;
    // NOP
label_41e408:
    // 0x41e408: 0x0  nop
    ctx->pc = 0x41e408u;
    // NOP
label_41e40c:
    // 0x41e40c: 0x0  nop
    ctx->pc = 0x41e40cu;
    // NOP
label_41e410:
    // 0x41e410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41e414:
    // 0x41e414: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41e418:
    // 0x41e418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41e41c:
    // 0x41e41c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41e41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41e420:
    // 0x41e420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41e424:
    // 0x41e424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e428:
    // 0x41e428: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x41e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_41e42c:
    // 0x41e42c: 0xc08914c  jal         func_224530
label_41e430:
    if (ctx->pc == 0x41E430u) {
        ctx->pc = 0x41E430u;
            // 0x41e430: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E434u;
        goto label_41e434;
    }
    ctx->pc = 0x41E42Cu;
    SET_GPR_U32(ctx, 31, 0x41E434u);
    ctx->pc = 0x41E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E42Cu;
            // 0x41e430: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E434u; }
        if (ctx->pc != 0x41E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E434u; }
        if (ctx->pc != 0x41E434u) { return; }
    }
    ctx->pc = 0x41E434u;
label_41e434:
    // 0x41e434: 0xc0e393c  jal         func_38E4F0
label_41e438:
    if (ctx->pc == 0x41E438u) {
        ctx->pc = 0x41E438u;
            // 0x41e438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E43Cu;
        goto label_41e43c;
    }
    ctx->pc = 0x41E434u;
    SET_GPR_U32(ctx, 31, 0x41E43Cu);
    ctx->pc = 0x41E438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E434u;
            // 0x41e438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E43Cu; }
        if (ctx->pc != 0x41E43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E43Cu; }
        if (ctx->pc != 0x41E43Cu) { return; }
    }
    ctx->pc = 0x41E43Cu;
label_41e43c:
    // 0x41e43c: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x41e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_41e440:
    // 0x41e440: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x41e440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_41e444:
    // 0x41e444: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x41e444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_41e448:
    // 0x41e448: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x41e448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
label_41e44c:
    // 0x41e44c: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x41e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_41e450:
    // 0x41e450: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x41e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_41e454:
    // 0x41e454: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x41e454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_41e458:
    // 0x41e458: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x41e458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_41e45c:
    // 0x41e45c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x41e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_41e460:
    // 0x41e460: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x41e460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_41e464:
    // 0x41e464: 0xa2000218  sb          $zero, 0x218($s0)
    ctx->pc = 0x41e464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 536), (uint8_t)GPR_U32(ctx, 0));
label_41e468:
    // 0x41e468: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x41e468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
label_41e46c:
    // 0x41e46c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x41e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_41e470:
    // 0x41e470: 0xae040230  sw          $a0, 0x230($s0)
    ctx->pc = 0x41e470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 4));
label_41e474:
    // 0x41e474: 0xae030234  sw          $v1, 0x234($s0)
    ctx->pc = 0x41e474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
label_41e478:
    // 0x41e478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41e47c:
    // 0x41e47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41e480:
    // 0x41e480: 0x3e00008  jr          $ra
label_41e484:
    if (ctx->pc == 0x41E484u) {
        ctx->pc = 0x41E484u;
            // 0x41e484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41E488u;
        goto label_41e488;
    }
    ctx->pc = 0x41E480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E480u;
            // 0x41e484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E488u;
label_41e488:
    // 0x41e488: 0x0  nop
    ctx->pc = 0x41e488u;
    // NOP
label_41e48c:
    // 0x41e48c: 0x0  nop
    ctx->pc = 0x41e48cu;
    // NOP
}
