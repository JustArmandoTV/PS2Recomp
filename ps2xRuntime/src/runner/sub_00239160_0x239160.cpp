#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239160
// Address: 0x239160 - 0x239270
void sub_00239160_0x239160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239160_0x239160");
#endif

    switch (ctx->pc) {
        case 0x239160u: goto label_239160;
        case 0x239164u: goto label_239164;
        case 0x239168u: goto label_239168;
        case 0x23916cu: goto label_23916c;
        case 0x239170u: goto label_239170;
        case 0x239174u: goto label_239174;
        case 0x239178u: goto label_239178;
        case 0x23917cu: goto label_23917c;
        case 0x239180u: goto label_239180;
        case 0x239184u: goto label_239184;
        case 0x239188u: goto label_239188;
        case 0x23918cu: goto label_23918c;
        case 0x239190u: goto label_239190;
        case 0x239194u: goto label_239194;
        case 0x239198u: goto label_239198;
        case 0x23919cu: goto label_23919c;
        case 0x2391a0u: goto label_2391a0;
        case 0x2391a4u: goto label_2391a4;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391acu: goto label_2391ac;
        case 0x2391b0u: goto label_2391b0;
        case 0x2391b4u: goto label_2391b4;
        case 0x2391b8u: goto label_2391b8;
        case 0x2391bcu: goto label_2391bc;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391c4u: goto label_2391c4;
        case 0x2391c8u: goto label_2391c8;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d0u: goto label_2391d0;
        case 0x2391d4u: goto label_2391d4;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391dcu: goto label_2391dc;
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e4u: goto label_2391e4;
        case 0x2391e8u: goto label_2391e8;
        case 0x2391ecu: goto label_2391ec;
        case 0x2391f0u: goto label_2391f0;
        case 0x2391f4u: goto label_2391f4;
        case 0x2391f8u: goto label_2391f8;
        case 0x2391fcu: goto label_2391fc;
        case 0x239200u: goto label_239200;
        case 0x239204u: goto label_239204;
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        default: break;
    }

    ctx->pc = 0x239160u;

label_239160:
    // 0x239160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239164:
    // 0x239164: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239168:
    // 0x239168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23916c:
    // 0x23916c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239170:
    // 0x239170: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239174:
    // 0x239174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239178:
    // 0x239178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23917c:
    // 0x23917c: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x23917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_239180:
    // 0x239180: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239184:
    // 0x239184: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_239188:
    if (ctx->pc == 0x239188u) {
        ctx->pc = 0x239188u;
            // 0x239188: 0x24900104  addiu       $s0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->pc = 0x23918Cu;
        goto label_23918c;
    }
    ctx->pc = 0x239184u;
    {
        const bool branch_taken_0x239184 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239184u;
            // 0x239188: 0x24900104  addiu       $s0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239184) {
            ctx->pc = 0x2391C8u;
            goto label_2391c8;
        }
    }
    ctx->pc = 0x23918Cu;
label_23918c:
    // 0x23918c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x23918cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239190:
    // 0x239190: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239194:
    // 0x239194: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_239198:
    // 0x239198: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23919c:
    // 0x23919c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2391a0:
    if (ctx->pc == 0x2391A0u) {
        ctx->pc = 0x2391A4u;
        goto label_2391a4;
    }
    ctx->pc = 0x23919Cu;
    {
        const bool branch_taken_0x23919c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23919c) {
            ctx->pc = 0x2391B8u;
            goto label_2391b8;
        }
    }
    ctx->pc = 0x2391A4u;
label_2391a4:
    // 0x2391a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2391a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2391a8:
    // 0x2391a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2391a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2391ac:
    // 0x2391ac: 0x320f809  jalr        $t9
label_2391b0:
    if (ctx->pc == 0x2391B0u) {
        ctx->pc = 0x2391B0u;
            // 0x2391b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2391B4u;
        goto label_2391b4;
    }
    ctx->pc = 0x2391ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2391B4u);
        ctx->pc = 0x2391B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391ACu;
            // 0x2391b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2391B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2391B4u; }
            if (ctx->pc != 0x2391B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2391B4u;
label_2391b4:
    // 0x2391b4: 0x0  nop
    ctx->pc = 0x2391b4u;
    // NOP
label_2391b8:
    // 0x2391b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2391b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2391bc:
    // 0x2391bc: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_2391c0:
    if (ctx->pc == 0x2391C0u) {
        ctx->pc = 0x2391C0u;
            // 0x2391c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2391C4u;
        goto label_2391c4;
    }
    ctx->pc = 0x2391BCu;
    {
        const bool branch_taken_0x2391bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2391C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391BCu;
            // 0x2391c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391bc) {
            ctx->pc = 0x239190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239190;
        }
    }
    ctx->pc = 0x2391C4u;
label_2391c4:
    // 0x2391c4: 0x0  nop
    ctx->pc = 0x2391c4u;
    // NOP
label_2391c8:
    // 0x2391c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2391c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2391cc:
    // 0x2391cc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2391d0:
    // 0x2391d0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2391d4:
    if (ctx->pc == 0x2391D4u) {
        ctx->pc = 0x2391D8u;
        goto label_2391d8;
    }
    ctx->pc = 0x2391D0u;
    {
        const bool branch_taken_0x2391d0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2391d0) {
            ctx->pc = 0x239248u;
            goto label_239248;
        }
    }
    ctx->pc = 0x2391D8u;
label_2391d8:
    // 0x2391d8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2391dc:
    // 0x2391dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2391dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2391e0:
    // 0x2391e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2391e4:
    // 0x2391e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2391e8:
    // 0x2391e8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2391ec:
    if (ctx->pc == 0x2391ECu) {
        ctx->pc = 0x2391F0u;
        goto label_2391f0;
    }
    ctx->pc = 0x2391E8u;
    {
        const bool branch_taken_0x2391e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2391e8) {
            ctx->pc = 0x239238u;
            goto label_239238;
        }
    }
    ctx->pc = 0x2391F0u;
label_2391f0:
    // 0x2391f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2391f4:
    // 0x2391f4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2391f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2391f8:
    // 0x2391f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2391f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2391fc:
    // 0x2391fc: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x2391fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239200:
    // 0x239200: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239204:
    if (ctx->pc == 0x239204u) {
        ctx->pc = 0x239204u;
            // 0x239204: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239208u;
        goto label_239208;
    }
    ctx->pc = 0x239200u;
    {
        const bool branch_taken_0x239200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239200u;
            // 0x239204: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239200) {
            ctx->pc = 0x239238u;
            goto label_239238;
        }
    }
    ctx->pc = 0x239208u;
label_239208:
    // 0x239208: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23920c:
    // 0x23920c: 0x0  nop
    ctx->pc = 0x23920cu;
    // NOP
label_239210:
    // 0x239210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239214:
    // 0x239214: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239218:
    // 0x239218: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23921c:
    // 0x23921c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239220:
    // 0x239220: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239224:
    // 0x239224: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239228:
    // 0x239228: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23922c:
    // 0x23922c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239230:
    if (ctx->pc == 0x239230u) {
        ctx->pc = 0x239230u;
            // 0x239230: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239234u;
        goto label_239234;
    }
    ctx->pc = 0x23922Cu;
    {
        const bool branch_taken_0x23922c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23922Cu;
            // 0x239230: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23922c) {
            ctx->pc = 0x239210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239210;
        }
    }
    ctx->pc = 0x239234u;
label_239234:
    // 0x239234: 0x0  nop
    ctx->pc = 0x239234u;
    // NOP
label_239238:
    // 0x239238: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23923c:
    // 0x23923c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239240:
    if (ctx->pc == 0x239240u) {
        ctx->pc = 0x239240u;
            // 0x239240: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239244u;
        goto label_239244;
    }
    ctx->pc = 0x23923Cu;
    {
        const bool branch_taken_0x23923c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23923Cu;
            // 0x239240: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23923c) {
            ctx->pc = 0x2391DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2391dc;
        }
    }
    ctx->pc = 0x239244u;
label_239244:
    // 0x239244: 0x0  nop
    ctx->pc = 0x239244u;
    // NOP
label_239248:
    // 0x239248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23924c:
    // 0x23924c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23924cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239250:
    // 0x239250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239254:
    // 0x239254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239258:
    // 0x239258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23925c:
    // 0x23925c: 0x3e00008  jr          $ra
label_239260:
    if (ctx->pc == 0x239260u) {
        ctx->pc = 0x239260u;
            // 0x239260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239264u;
        goto label_239264;
    }
    ctx->pc = 0x23925Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23925Cu;
            // 0x239260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239264u;
label_239264:
    // 0x239264: 0x0  nop
    ctx->pc = 0x239264u;
    // NOP
label_239268:
    // 0x239268: 0x0  nop
    ctx->pc = 0x239268u;
    // NOP
label_23926c:
    // 0x23926c: 0x0  nop
    ctx->pc = 0x23926cu;
    // NOP
}
