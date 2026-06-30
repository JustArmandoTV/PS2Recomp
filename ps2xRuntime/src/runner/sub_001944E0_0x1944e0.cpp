#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001944E0
// Address: 0x1944e0 - 0x194570
void sub_001944E0_0x1944e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001944E0_0x1944e0");
#endif

    switch (ctx->pc) {
        case 0x1944e0u: goto label_1944e0;
        case 0x1944e4u: goto label_1944e4;
        case 0x1944e8u: goto label_1944e8;
        case 0x1944ecu: goto label_1944ec;
        case 0x1944f0u: goto label_1944f0;
        case 0x1944f4u: goto label_1944f4;
        case 0x1944f8u: goto label_1944f8;
        case 0x1944fcu: goto label_1944fc;
        case 0x194500u: goto label_194500;
        case 0x194504u: goto label_194504;
        case 0x194508u: goto label_194508;
        case 0x19450cu: goto label_19450c;
        case 0x194510u: goto label_194510;
        case 0x194514u: goto label_194514;
        case 0x194518u: goto label_194518;
        case 0x19451cu: goto label_19451c;
        case 0x194520u: goto label_194520;
        case 0x194524u: goto label_194524;
        case 0x194528u: goto label_194528;
        case 0x19452cu: goto label_19452c;
        case 0x194530u: goto label_194530;
        case 0x194534u: goto label_194534;
        case 0x194538u: goto label_194538;
        case 0x19453cu: goto label_19453c;
        case 0x194540u: goto label_194540;
        case 0x194544u: goto label_194544;
        case 0x194548u: goto label_194548;
        case 0x19454cu: goto label_19454c;
        case 0x194550u: goto label_194550;
        case 0x194554u: goto label_194554;
        case 0x194558u: goto label_194558;
        case 0x19455cu: goto label_19455c;
        case 0x194560u: goto label_194560;
        case 0x194564u: goto label_194564;
        case 0x194568u: goto label_194568;
        case 0x19456cu: goto label_19456c;
        default: break;
    }

    ctx->pc = 0x1944e0u;

label_1944e0:
    // 0x1944e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1944e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1944e4:
    // 0x1944e4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1944e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1944e8:
    // 0x1944e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1944e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1944ec:
    // 0x1944ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1944ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1944f0:
    // 0x1944f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1944f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1944f4:
    // 0x1944f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1944f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1944f8:
    // 0x1944f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1944f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1944fc:
    // 0x1944fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1944fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_194500:
    // 0x194500: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194504:
    // 0x194504: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194508:
    // 0x194508: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19450c:
    // 0x19450c: 0x40f809  jalr        $v0
label_194510:
    if (ctx->pc == 0x194510u) {
        ctx->pc = 0x194510u;
            // 0x194510: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194514u;
        goto label_194514;
    }
    ctx->pc = 0x19450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194514u);
        ctx->pc = 0x194510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19450Cu;
            // 0x194510: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194514u; }
            if (ctx->pc != 0x194514u) { return; }
        }
        }
    }
    ctx->pc = 0x194514u;
label_194514:
    // 0x194514: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194518:
    // 0x194518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19451c:
    // 0x19451c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194520:
    // 0x194520: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x194520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_194524:
    // 0x194524: 0x40f809  jalr        $v0
label_194528:
    if (ctx->pc == 0x194528u) {
        ctx->pc = 0x194528u;
            // 0x194528: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19452Cu;
        goto label_19452c;
    }
    ctx->pc = 0x194524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19452Cu);
        ctx->pc = 0x194528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194524u;
            // 0x194528: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19452Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19452Cu; }
            if (ctx->pc != 0x19452Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19452Cu;
label_19452c:
    // 0x19452c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x19452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_194530:
    // 0x194530: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x194530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_194534:
    // 0x194534: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_194538:
    if (ctx->pc == 0x194538u) {
        ctx->pc = 0x194538u;
            // 0x194538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19453Cu;
        goto label_19453c;
    }
    ctx->pc = 0x194534u;
    {
        const bool branch_taken_0x194534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194534u;
            // 0x194538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194534) {
            ctx->pc = 0x194558u;
            goto label_194558;
        }
    }
    ctx->pc = 0x19453Cu;
label_19453c:
    // 0x19453c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194540:
    // 0x194540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x194540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194544:
    // 0x194544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x194544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_194548:
    // 0x194548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19454c:
    // 0x19454c: 0x8064b62  j           func_192D88
label_194550:
    if (ctx->pc == 0x194550u) {
        ctx->pc = 0x194550u;
            // 0x194550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x194554u;
        goto label_194554;
    }
    ctx->pc = 0x19454Cu;
    ctx->pc = 0x194550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19454Cu;
            // 0x194550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00192D88_0x192d88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x194554u;
label_194554:
    // 0x194554: 0x0  nop
    ctx->pc = 0x194554u;
    // NOP
label_194558:
    // 0x194558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x194558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19455c:
    // 0x19455c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19455cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_194560:
    // 0x194560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194564:
    // 0x194564: 0x3e00008  jr          $ra
label_194568:
    if (ctx->pc == 0x194568u) {
        ctx->pc = 0x194568u;
            // 0x194568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19456Cu;
        goto label_19456c;
    }
    ctx->pc = 0x194564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194564u;
            // 0x194568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19456Cu;
label_19456c:
    // 0x19456c: 0x0  nop
    ctx->pc = 0x19456cu;
    // NOP
}
