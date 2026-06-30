#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274240
// Address: 0x274240 - 0x274440
void sub_00274240_0x274240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274240_0x274240");
#endif

    switch (ctx->pc) {
        case 0x274240u: goto label_274240;
        case 0x274244u: goto label_274244;
        case 0x274248u: goto label_274248;
        case 0x27424cu: goto label_27424c;
        case 0x274250u: goto label_274250;
        case 0x274254u: goto label_274254;
        case 0x274258u: goto label_274258;
        case 0x27425cu: goto label_27425c;
        case 0x274260u: goto label_274260;
        case 0x274264u: goto label_274264;
        case 0x274268u: goto label_274268;
        case 0x27426cu: goto label_27426c;
        case 0x274270u: goto label_274270;
        case 0x274274u: goto label_274274;
        case 0x274278u: goto label_274278;
        case 0x27427cu: goto label_27427c;
        case 0x274280u: goto label_274280;
        case 0x274284u: goto label_274284;
        case 0x274288u: goto label_274288;
        case 0x27428cu: goto label_27428c;
        case 0x274290u: goto label_274290;
        case 0x274294u: goto label_274294;
        case 0x274298u: goto label_274298;
        case 0x27429cu: goto label_27429c;
        case 0x2742a0u: goto label_2742a0;
        case 0x2742a4u: goto label_2742a4;
        case 0x2742a8u: goto label_2742a8;
        case 0x2742acu: goto label_2742ac;
        case 0x2742b0u: goto label_2742b0;
        case 0x2742b4u: goto label_2742b4;
        case 0x2742b8u: goto label_2742b8;
        case 0x2742bcu: goto label_2742bc;
        case 0x2742c0u: goto label_2742c0;
        case 0x2742c4u: goto label_2742c4;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742ccu: goto label_2742cc;
        case 0x2742d0u: goto label_2742d0;
        case 0x2742d4u: goto label_2742d4;
        case 0x2742d8u: goto label_2742d8;
        case 0x2742dcu: goto label_2742dc;
        case 0x2742e0u: goto label_2742e0;
        case 0x2742e4u: goto label_2742e4;
        case 0x2742e8u: goto label_2742e8;
        case 0x2742ecu: goto label_2742ec;
        case 0x2742f0u: goto label_2742f0;
        case 0x2742f4u: goto label_2742f4;
        case 0x2742f8u: goto label_2742f8;
        case 0x2742fcu: goto label_2742fc;
        case 0x274300u: goto label_274300;
        case 0x274304u: goto label_274304;
        case 0x274308u: goto label_274308;
        case 0x27430cu: goto label_27430c;
        case 0x274310u: goto label_274310;
        case 0x274314u: goto label_274314;
        case 0x274318u: goto label_274318;
        case 0x27431cu: goto label_27431c;
        case 0x274320u: goto label_274320;
        case 0x274324u: goto label_274324;
        case 0x274328u: goto label_274328;
        case 0x27432cu: goto label_27432c;
        case 0x274330u: goto label_274330;
        case 0x274334u: goto label_274334;
        case 0x274338u: goto label_274338;
        case 0x27433cu: goto label_27433c;
        case 0x274340u: goto label_274340;
        case 0x274344u: goto label_274344;
        case 0x274348u: goto label_274348;
        case 0x27434cu: goto label_27434c;
        case 0x274350u: goto label_274350;
        case 0x274354u: goto label_274354;
        case 0x274358u: goto label_274358;
        case 0x27435cu: goto label_27435c;
        case 0x274360u: goto label_274360;
        case 0x274364u: goto label_274364;
        case 0x274368u: goto label_274368;
        case 0x27436cu: goto label_27436c;
        case 0x274370u: goto label_274370;
        case 0x274374u: goto label_274374;
        case 0x274378u: goto label_274378;
        case 0x27437cu: goto label_27437c;
        case 0x274380u: goto label_274380;
        case 0x274384u: goto label_274384;
        case 0x274388u: goto label_274388;
        case 0x27438cu: goto label_27438c;
        case 0x274390u: goto label_274390;
        case 0x274394u: goto label_274394;
        case 0x274398u: goto label_274398;
        case 0x27439cu: goto label_27439c;
        case 0x2743a0u: goto label_2743a0;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743a8u: goto label_2743a8;
        case 0x2743acu: goto label_2743ac;
        case 0x2743b0u: goto label_2743b0;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743b8u: goto label_2743b8;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743c0u: goto label_2743c0;
        case 0x2743c4u: goto label_2743c4;
        case 0x2743c8u: goto label_2743c8;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d0u: goto label_2743d0;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743d8u: goto label_2743d8;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743e0u: goto label_2743e0;
        case 0x2743e4u: goto label_2743e4;
        case 0x2743e8u: goto label_2743e8;
        case 0x2743ecu: goto label_2743ec;
        case 0x2743f0u: goto label_2743f0;
        case 0x2743f4u: goto label_2743f4;
        case 0x2743f8u: goto label_2743f8;
        case 0x2743fcu: goto label_2743fc;
        case 0x274400u: goto label_274400;
        case 0x274404u: goto label_274404;
        case 0x274408u: goto label_274408;
        case 0x27440cu: goto label_27440c;
        case 0x274410u: goto label_274410;
        case 0x274414u: goto label_274414;
        case 0x274418u: goto label_274418;
        case 0x27441cu: goto label_27441c;
        case 0x274420u: goto label_274420;
        case 0x274424u: goto label_274424;
        case 0x274428u: goto label_274428;
        case 0x27442cu: goto label_27442c;
        case 0x274430u: goto label_274430;
        case 0x274434u: goto label_274434;
        case 0x274438u: goto label_274438;
        case 0x27443cu: goto label_27443c;
        default: break;
    }

    ctx->pc = 0x274240u;

label_274240:
    // 0x274240: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_274244:
    // 0x274244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_274248:
    // 0x274248: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x274248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_27424c:
    // 0x27424c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274250:
    // 0x274250: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x274250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_274254:
    // 0x274254: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x274254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_274258:
    // 0x274258: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x274258u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27425c:
    // 0x27425c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_274260:
    // 0x274260: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x274260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274264:
    // 0x274264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_274268:
    // 0x274268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x274268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27426c:
    // 0x27426c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_274270:
    // 0x274270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_274274:
    // 0x274274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_274278:
    // 0x274278: 0x8c950018  lw          $s5, 0x18($a0)
    ctx->pc = 0x274278u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27427c:
    // 0x27427c: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_274280:
    // 0x274280: 0x26b0002c  addiu       $s0, $s5, 0x2C
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
label_274284:
    // 0x274284: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x274284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
label_274288:
    // 0x274288: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x274288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_27428c:
    // 0x27428c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x27428cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_274290:
    // 0x274290: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x274290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
label_274294:
    // 0x274294: 0xa2a00038  sb          $zero, 0x38($s5)
    ctx->pc = 0x274294u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 56), (uint8_t)GPR_U32(ctx, 0));
label_274298:
    // 0x274298: 0xa2a00039  sb          $zero, 0x39($s5)
    ctx->pc = 0x274298u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 57), (uint8_t)GPR_U32(ctx, 0));
label_27429c:
    // 0x27429c: 0xa2a0003a  sb          $zero, 0x3A($s5)
    ctx->pc = 0x27429cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 58), (uint8_t)GPR_U32(ctx, 0));
label_2742a0:
    // 0x2742a0: 0xa2a0003b  sb          $zero, 0x3B($s5)
    ctx->pc = 0x2742a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 59), (uint8_t)GPR_U32(ctx, 0));
label_2742a4:
    // 0x2742a4: 0xa2a0003c  sb          $zero, 0x3C($s5)
    ctx->pc = 0x2742a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 60), (uint8_t)GPR_U32(ctx, 0));
label_2742a8:
    // 0x2742a8: 0xa2a0003d  sb          $zero, 0x3D($s5)
    ctx->pc = 0x2742a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 61), (uint8_t)GPR_U32(ctx, 0));
label_2742ac:
    // 0x2742ac: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x2742acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
label_2742b0:
    // 0x2742b0: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x2742b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
label_2742b4:
    // 0x2742b4: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x2742b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
label_2742b8:
    // 0x2742b8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x2742b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_2742bc:
    // 0x2742bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2742bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2742c0:
    // 0x2742c0: 0xaea20060  sw          $v0, 0x60($s5)
    ctx->pc = 0x2742c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
label_2742c4:
    // 0x2742c4: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x2742c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2742c8:
    // 0x2742c8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2742c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2742cc:
    // 0x2742cc: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x2742ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_2742d0:
    // 0x2742d0: 0xaea30030  sw          $v1, 0x30($s5)
    ctx->pc = 0x2742d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
label_2742d4:
    // 0x2742d4: 0xaea00034  sw          $zero, 0x34($s5)
    ctx->pc = 0x2742d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 0));
label_2742d8:
    // 0x2742d8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2742d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2742dc:
    // 0x2742dc: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x2742dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2742e0:
    // 0x2742e0: 0x6200033  bltz        $s1, . + 4 + (0x33 << 2)
label_2742e4:
    if (ctx->pc == 0x2742E4u) {
        ctx->pc = 0x2742E4u;
            // 0x2742e4: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2742E8u;
        goto label_2742e8;
    }
    ctx->pc = 0x2742E0u;
    {
        const bool branch_taken_0x2742e0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2742E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2742E0u;
            // 0x2742e4: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742e0) {
            ctx->pc = 0x2743B0u;
            goto label_2743b0;
        }
    }
    ctx->pc = 0x2742E8u;
label_2742e8:
    // 0x2742e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2742e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2742ec:
    // 0x2742ec: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x2742ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2742f0:
    // 0x2742f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2742f4:
    if (ctx->pc == 0x2742F4u) {
        ctx->pc = 0x2742F8u;
        goto label_2742f8;
    }
    ctx->pc = 0x2742F0u;
    {
        const bool branch_taken_0x2742f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2742f0) {
            ctx->pc = 0x274300u;
            goto label_274300;
        }
    }
    ctx->pc = 0x2742F8u;
label_2742f8:
    // 0x2742f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2742f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2742fc:
    // 0x2742fc: 0x0  nop
    ctx->pc = 0x2742fcu;
    // NOP
label_274300:
    // 0x274300: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x274300u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_274304:
    // 0x274304: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_274308:
    if (ctx->pc == 0x274308u) {
        ctx->pc = 0x27430Cu;
        goto label_27430c;
    }
    ctx->pc = 0x274304u;
    {
        const bool branch_taken_0x274304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274304) {
            ctx->pc = 0x274310u;
            goto label_274310;
        }
    }
    ctx->pc = 0x27430Cu;
label_27430c:
    // 0x27430c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27430cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274310:
    // 0x274310: 0x8ec40028  lw          $a0, 0x28($s6)
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_274314:
    // 0x274314: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x274314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274318:
    // 0x274318: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x274318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27431c:
    // 0x27431c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27431cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_274320:
    // 0x274320: 0x320f809  jalr        $t9
label_274324:
    if (ctx->pc == 0x274324u) {
        ctx->pc = 0x274324u;
            // 0x274324: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x274328u;
        goto label_274328;
    }
    ctx->pc = 0x274320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274328u);
        ctx->pc = 0x274324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274320u;
            // 0x274324: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274328u; }
            if (ctx->pc != 0x274328u) { return; }
        }
        }
    }
    ctx->pc = 0x274328u;
label_274328:
    // 0x274328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27432c:
    // 0x27432c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x27432cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274330:
    // 0x274330: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_274334:
    if (ctx->pc == 0x274334u) {
        ctx->pc = 0x274338u;
        goto label_274338;
    }
    ctx->pc = 0x274330u;
    {
        const bool branch_taken_0x274330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274330) {
            ctx->pc = 0x274340u;
            goto label_274340;
        }
    }
    ctx->pc = 0x274338u;
label_274338:
    // 0x274338: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x274338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27433c:
    // 0x27433c: 0x0  nop
    ctx->pc = 0x27433cu;
    // NOP
label_274340:
    // 0x274340: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x274340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274344:
    // 0x274344: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_274348:
    if (ctx->pc == 0x274348u) {
        ctx->pc = 0x274348u;
            // 0x274348: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27434Cu;
        goto label_27434c;
    }
    ctx->pc = 0x274344u;
    {
        const bool branch_taken_0x274344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274344u;
            // 0x274348: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274344) {
            ctx->pc = 0x2743A0u;
            goto label_2743a0;
        }
    }
    ctx->pc = 0x27434Cu;
label_27434c:
    // 0x27434c: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x27434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_274350:
    // 0x274350: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x274350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274354:
    // 0x274354: 0x0  nop
    ctx->pc = 0x274354u;
    // NOP
label_274358:
    // 0x274358: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x274358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27435c:
    // 0x27435c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x27435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_274360:
    // 0x274360: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x274360u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_274364:
    // 0x274364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_274368:
    if (ctx->pc == 0x274368u) {
        ctx->pc = 0x27436Cu;
        goto label_27436c;
    }
    ctx->pc = 0x274364u;
    {
        const bool branch_taken_0x274364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274364) {
            ctx->pc = 0x274370u;
            goto label_274370;
        }
    }
    ctx->pc = 0x27436Cu;
label_27436c:
    // 0x27436c: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x27436cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_274370:
    // 0x274370: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x274370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_274374:
    // 0x274374: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_274378:
    // 0x274378: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x274378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27437c:
    // 0x27437c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_274380:
    if (ctx->pc == 0x274380u) {
        ctx->pc = 0x274384u;
        goto label_274384;
    }
    ctx->pc = 0x27437Cu;
    {
        const bool branch_taken_0x27437c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27437c) {
            ctx->pc = 0x274388u;
            goto label_274388;
        }
    }
    ctx->pc = 0x274384u;
label_274384:
    // 0x274384: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x274384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
label_274388:
    // 0x274388: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x274388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_27438c:
    // 0x27438c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x27438cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274390:
    // 0x274390: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x274390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_274394:
    // 0x274394: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_274398:
    if (ctx->pc == 0x274398u) {
        ctx->pc = 0x274398u;
            // 0x274398: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x27439Cu;
        goto label_27439c;
    }
    ctx->pc = 0x274394u;
    {
        const bool branch_taken_0x274394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x274398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274394u;
            // 0x274398: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274394) {
            ctx->pc = 0x274358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274358;
        }
    }
    ctx->pc = 0x27439Cu;
label_27439c:
    // 0x27439c: 0x0  nop
    ctx->pc = 0x27439cu;
    // NOP
label_2743a0:
    // 0x2743a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2743a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2743a4:
    // 0x2743a4: 0x621ffd0  bgez        $s1, . + 4 + (-0x30 << 2)
label_2743a8:
    if (ctx->pc == 0x2743A8u) {
        ctx->pc = 0x2743A8u;
            // 0x2743a8: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->pc = 0x2743ACu;
        goto label_2743ac;
    }
    ctx->pc = 0x2743A4u;
    {
        const bool branch_taken_0x2743a4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2743A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743A4u;
            // 0x2743a8: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743a4) {
            ctx->pc = 0x2742E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2742e8;
        }
    }
    ctx->pc = 0x2743ACu;
label_2743ac:
    // 0x2743ac: 0x0  nop
    ctx->pc = 0x2743acu;
    // NOP
label_2743b0:
    // 0x2743b0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2743b4:
    // 0x2743b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2743b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2743b8:
    // 0x2743b8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2743b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2743bc:
    // 0x2743bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2743bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2743c0:
    // 0x2743c0: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x2743c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_2743c4:
    // 0x2743c4: 0xaeb30024  sw          $s3, 0x24($s5)
    ctx->pc = 0x2743c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 19));
label_2743c8:
    // 0x2743c8: 0xaeb20028  sw          $s2, 0x28($s5)
    ctx->pc = 0x2743c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 18));
label_2743cc:
    // 0x2743cc: 0x0  nop
    ctx->pc = 0x2743ccu;
    // NOP
label_2743d0:
    // 0x2743d0: 0x8ec40028  lw          $a0, 0x28($s6)
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_2743d4:
    // 0x2743d4: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x2743d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_2743d8:
    // 0x2743d8: 0x2629000c  addiu       $t1, $s1, 0xC
    ctx->pc = 0x2743d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2743dc:
    // 0x2743dc: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x2743dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2743e0:
    // 0x2743e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2743e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2743e4:
    // 0x2743e4: 0x8ee80004  lw          $t0, 0x4($s7)
    ctx->pc = 0x2743e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2743e8:
    // 0x2743e8: 0x252a0004  addiu       $t2, $t1, 0x4
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2743ec:
    // 0x2743ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2743ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2743f0:
    // 0x2743f0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2743f4:
    // 0x2743f4: 0x320f809  jalr        $t9
label_2743f8:
    if (ctx->pc == 0x2743F8u) {
        ctx->pc = 0x2743F8u;
            // 0x2743f8: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x2743FCu;
        goto label_2743fc;
    }
    ctx->pc = 0x2743F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2743FCu);
        ctx->pc = 0x2743F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743F4u;
            // 0x2743f8: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2743FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2743FCu; }
            if (ctx->pc != 0x2743FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2743FCu;
label_2743fc:
    // 0x2743fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2743fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_274400:
    // 0x274400: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_274404:
    // 0x274404: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x274404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_274408:
    // 0x274408: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_27440c:
    if (ctx->pc == 0x27440Cu) {
        ctx->pc = 0x27440Cu;
            // 0x27440c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x274410u;
        goto label_274410;
    }
    ctx->pc = 0x274408u;
    {
        const bool branch_taken_0x274408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274408u;
            // 0x27440c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274408) {
            ctx->pc = 0x2743D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2743d0;
        }
    }
    ctx->pc = 0x274410u;
label_274410:
    // 0x274410: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x274410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274414:
    // 0x274414: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x274414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_274418:
    // 0x274418: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27441c:
    // 0x27441c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27441cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_274420:
    // 0x274420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_274424:
    // 0x274424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274428:
    // 0x274428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27442c:
    // 0x27442c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27442cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274430:
    // 0x274430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_274434:
    // 0x274434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_274438:
    // 0x274438: 0x3e00008  jr          $ra
label_27443c:
    if (ctx->pc == 0x27443Cu) {
        ctx->pc = 0x27443Cu;
            // 0x27443c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x274440u;
        goto label_fallthrough_0x274438;
    }
    ctx->pc = 0x274438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274438u;
            // 0x27443c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x274438:
    ctx->pc = 0x274440u;
}
