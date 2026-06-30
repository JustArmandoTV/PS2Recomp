#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6898
// Address: 0x1b6898 - 0x1b6960
void sub_001B6898_0x1b6898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6898_0x1b6898");
#endif

    switch (ctx->pc) {
        case 0x1b68d8u: goto label_1b68d8;
        case 0x1b6918u: goto label_1b6918;
        case 0x1b6924u: goto label_1b6924;
        case 0x1b6934u: goto label_1b6934;
        default: break;
    }

    ctx->pc = 0x1b6898u;

    // 0x1b6898: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b6898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b689c: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x1b68a0: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x1b68a4: 0x8c83029c  lw          $v1, 0x29C($a0)
    ctx->pc = 0x1b68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x1b68a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b68ac: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x1b68acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b68b0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b68b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b68b4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B68B4u;
    {
        const bool branch_taken_0x1b68b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68B4u;
            // 0x1b68b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68b4) {
            ctx->pc = 0x1B68CCu;
            goto label_1b68cc;
        }
    }
    ctx->pc = 0x1B68BCu;
    // 0x1b68bc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b68c0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b68c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b68c8: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1b68c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1b68cc:
    // 0x1b68cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B68CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B68D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68CCu;
            // 0x1b68d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B68D4u;
    // 0x1b68d4: 0x0  nop
    ctx->pc = 0x1b68d4u;
    // NOP
label_1b68d8:
    // 0x1b68d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b68d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b68dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b68e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b68e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b68e4: 0x24639b30  addiu       $v1, $v1, -0x64D0
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941488));
    // 0x1b68e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b68e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b68ec: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1b68ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b68f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b68f4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b68f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b68fc: 0x2471005c  addiu       $s1, $v1, 0x5C
    ctx->pc = 0x1b68fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x1b6900: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b6904: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b690c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b690cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b6910: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1b6910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6914: 0x0  nop
    ctx->pc = 0x1b6914u;
    // NOP
label_1b6918:
    // 0x1b6918: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b691c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B691Cu;
    SET_GPR_U32(ctx, 31, 0x1B6924u);
    ctx->pc = 0x1B6920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B691Cu;
            // 0x1b6920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6924u; }
        if (ctx->pc != 0x1B6924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6924u; }
        if (ctx->pc != 0x1B6924u) { return; }
    }
    ctx->pc = 0x1B6924u;
label_1b6924:
    // 0x1b6924: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6924u;
    {
        const bool branch_taken_0x1b6924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B6928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6924u;
            // 0x1b6928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6924) {
            ctx->pc = 0x1B6934u;
            goto label_1b6934;
        }
    }
    ctx->pc = 0x1B692Cu;
    // 0x1b692c: 0xc06da58  jal         func_1B6960
    ctx->pc = 0x1B692Cu;
    SET_GPR_U32(ctx, 31, 0x1B6934u);
    ctx->pc = 0x1B6960u;
    if (runtime->hasFunction(0x1B6960u)) {
        auto targetFn = runtime->lookupFunction(0x1B6960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6934u; }
        if (ctx->pc != 0x1B6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6960_0x1b6960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6934u; }
        if (ctx->pc != 0x1B6934u) { return; }
    }
    ctx->pc = 0x1B6934u;
label_1b6934:
    // 0x1b6934: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b6938: 0x643fff7  bgezl       $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B6938u;
    {
        const bool branch_taken_0x1b6938 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1b6938) {
            ctx->pc = 0x1B693Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6938u;
            // 0x1b693c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6918;
        }
    }
    ctx->pc = 0x1B6940u;
    // 0x1b6940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b694c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6950: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6954: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6954u;
            // 0x1b6958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B695Cu;
    // 0x1b695c: 0x0  nop
    ctx->pc = 0x1b695cu;
    // NOP
}
