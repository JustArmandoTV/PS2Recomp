#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239270
// Address: 0x239270 - 0x239380
void sub_00239270_0x239270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239270_0x239270");
#endif

    switch (ctx->pc) {
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        default: break;
    }

    ctx->pc = 0x239270u;

label_239270:
    // 0x239270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239274:
    // 0x239274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239278:
    // 0x239278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23927c:
    // 0x23927c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239280:
    // 0x239280: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239284:
    // 0x239284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239288:
    // 0x239288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23928c:
    // 0x23928c: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x23928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_239290:
    // 0x239290: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239294:
    // 0x239294: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
            // 0x239298: 0x24900104  addiu       $s0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239294u;
            // 0x239298: 0x24900104  addiu       $s0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239294) {
            ctx->pc = 0x2392D8u;
            goto label_2392d8;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x23929cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2392a0:
    // 0x2392a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2392a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2392a4:
    // 0x2392a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2392a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2392a8:
    // 0x2392a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2392a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2392ac:
    // 0x2392ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2392b0:
    if (ctx->pc == 0x2392B0u) {
        ctx->pc = 0x2392B4u;
        goto label_2392b4;
    }
    ctx->pc = 0x2392ACu;
    {
        const bool branch_taken_0x2392ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2392ac) {
            ctx->pc = 0x2392C8u;
            goto label_2392c8;
        }
    }
    ctx->pc = 0x2392B4u;
label_2392b4:
    // 0x2392b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2392b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2392b8:
    // 0x2392b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2392b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2392bc:
    // 0x2392bc: 0x320f809  jalr        $t9
label_2392c0:
    if (ctx->pc == 0x2392C0u) {
        ctx->pc = 0x2392C0u;
            // 0x2392c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2392C4u;
        goto label_2392c4;
    }
    ctx->pc = 0x2392BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2392C4u);
        ctx->pc = 0x2392C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392BCu;
            // 0x2392c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2392C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2392C4u; }
            if (ctx->pc != 0x2392C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2392C4u;
label_2392c4:
    // 0x2392c4: 0x0  nop
    ctx->pc = 0x2392c4u;
    // NOP
label_2392c8:
    // 0x2392c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2392c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2392cc:
    // 0x2392cc: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_2392d0:
    if (ctx->pc == 0x2392D0u) {
        ctx->pc = 0x2392D0u;
            // 0x2392d0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2392D4u;
        goto label_2392d4;
    }
    ctx->pc = 0x2392CCu;
    {
        const bool branch_taken_0x2392cc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2392D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392CCu;
            // 0x2392d0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392cc) {
            ctx->pc = 0x2392A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2392a0;
        }
    }
    ctx->pc = 0x2392D4u;
label_2392d4:
    // 0x2392d4: 0x0  nop
    ctx->pc = 0x2392d4u;
    // NOP
label_2392d8:
    // 0x2392d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2392dc:
    // 0x2392dc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2392dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2392e0:
    // 0x2392e0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2392e4:
    if (ctx->pc == 0x2392E4u) {
        ctx->pc = 0x2392E8u;
        goto label_2392e8;
    }
    ctx->pc = 0x2392E0u;
    {
        const bool branch_taken_0x2392e0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2392e0) {
            ctx->pc = 0x239358u;
            goto label_239358;
        }
    }
    ctx->pc = 0x2392E8u;
label_2392e8:
    // 0x2392e8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2392ec:
    // 0x2392ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2392ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2392f0:
    // 0x2392f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2392f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2392f4:
    // 0x2392f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2392f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2392f8:
    // 0x2392f8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2392fc:
    if (ctx->pc == 0x2392FCu) {
        ctx->pc = 0x239300u;
        goto label_239300;
    }
    ctx->pc = 0x2392F8u;
    {
        const bool branch_taken_0x2392f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392f8) {
            ctx->pc = 0x239348u;
            goto label_239348;
        }
    }
    ctx->pc = 0x239300u;
label_239300:
    // 0x239300: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239304:
    // 0x239304: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239308:
    // 0x239308: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23930c:
    // 0x23930c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239310:
    // 0x239310: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239314:
    if (ctx->pc == 0x239314u) {
        ctx->pc = 0x239314u;
            // 0x239314: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239318u;
        goto label_239318;
    }
    ctx->pc = 0x239310u;
    {
        const bool branch_taken_0x239310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239310u;
            // 0x239314: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239310) {
            ctx->pc = 0x239348u;
            goto label_239348;
        }
    }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23931c:
    // 0x23931c: 0x0  nop
    ctx->pc = 0x23931cu;
    // NOP
label_239320:
    // 0x239320: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239324:
    // 0x239324: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239328:
    // 0x239328: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23932c:
    // 0x23932c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239330:
    // 0x239330: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239334:
    // 0x239334: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239338:
    // 0x239338: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23933c:
    // 0x23933c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239340:
    if (ctx->pc == 0x239340u) {
        ctx->pc = 0x239340u;
            // 0x239340: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239344u;
        goto label_239344;
    }
    ctx->pc = 0x23933Cu;
    {
        const bool branch_taken_0x23933c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23933Cu;
            // 0x239340: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23933c) {
            ctx->pc = 0x239320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239320;
        }
    }
    ctx->pc = 0x239344u;
label_239344:
    // 0x239344: 0x0  nop
    ctx->pc = 0x239344u;
    // NOP
label_239348:
    // 0x239348: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23934c:
    // 0x23934c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239350:
    if (ctx->pc == 0x239350u) {
        ctx->pc = 0x239350u;
            // 0x239350: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239354u;
        goto label_239354;
    }
    ctx->pc = 0x23934Cu;
    {
        const bool branch_taken_0x23934c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23934Cu;
            // 0x239350: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23934c) {
            ctx->pc = 0x2392ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2392ec;
        }
    }
    ctx->pc = 0x239354u;
label_239354:
    // 0x239354: 0x0  nop
    ctx->pc = 0x239354u;
    // NOP
label_239358:
    // 0x239358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23935c:
    // 0x23935c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23935cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239360:
    // 0x239360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239364:
    // 0x239364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239368:
    // 0x239368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23936c:
    // 0x23936c: 0x3e00008  jr          $ra
label_239370:
    if (ctx->pc == 0x239370u) {
        ctx->pc = 0x239370u;
            // 0x239370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239374u;
        goto label_239374;
    }
    ctx->pc = 0x23936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23936Cu;
            // 0x239370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239374u;
label_239374:
    // 0x239374: 0x0  nop
    ctx->pc = 0x239374u;
    // NOP
label_239378:
    // 0x239378: 0x0  nop
    ctx->pc = 0x239378u;
    // NOP
label_23937c:
    // 0x23937c: 0x0  nop
    ctx->pc = 0x23937cu;
    // NOP
}
