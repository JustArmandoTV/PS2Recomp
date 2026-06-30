#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB128
// Address: 0x1ab128 - 0x1ab1f8
void sub_001AB128_0x1ab128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB128_0x1ab128");
#endif

    switch (ctx->pc) {
        case 0x1ab158u: goto label_1ab158;
        case 0x1ab1b8u: goto label_1ab1b8;
        default: break;
    }

    ctx->pc = 0x1ab128u;

    // 0x1ab128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab12c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1ab12cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab134: 0x8d222030  lw          $v0, 0x2030($t1)
    ctx->pc = 0x1ab134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8240)));
    // 0x1ab138: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB138u;
    {
        const bool branch_taken_0x1ab138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB138u;
            // 0x1ab13c: 0x24481080  addiu       $t0, $v0, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab138) {
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB140u;
    // 0x1ab140: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB140u;
    {
        const bool branch_taken_0x1ab140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab140) {
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB148u;
    // 0x1ab148: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB148u;
    {
        const bool branch_taken_0x1ab148 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab148) {
            ctx->pc = 0x1AB14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB148u;
            // 0x1ab14c: 0x8d22002c  lw          $v0, 0x2C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB160u;
            goto label_1ab160;
        }
    }
    ctx->pc = 0x1AB150u;
label_1ab150:
    // 0x1ab150: 0xc06bde8  jal         func_1AF7A0
    ctx->pc = 0x1AB150u;
    SET_GPR_U32(ctx, 31, 0x1AB158u);
    ctx->pc = 0x1AB154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB150u;
            // 0x1ab154: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (runtime->hasFunction(0x1AF7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB158u; }
        if (ctx->pc != 0x1AB158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF7A0_0x1af7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB158u; }
        if (ctx->pc != 0x1AB158u) { return; }
    }
    ctx->pc = 0x1AB158u;
label_1ab158:
    // 0x1ab158: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1AB158u;
    {
        const bool branch_taken_0x1ab158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB158u;
            // 0x1ab15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab158) {
            ctx->pc = 0x1AB1ECu;
            goto label_1ab1ec;
        }
    }
    ctx->pc = 0x1AB160u;
label_1ab160:
    // 0x1ab160: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ab164: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ab164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ab168: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB168u;
    {
        const bool branch_taken_0x1ab168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab168) {
            ctx->pc = 0x1AB16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB168u;
            // 0x1ab16c: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB188u;
            goto label_1ab188;
        }
    }
    ctx->pc = 0x1AB170u;
    // 0x1ab170: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab178: 0x34a50f1d  ori         $a1, $a1, 0xF1D
    ctx->pc = 0x1ab178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3869);
    // 0x1ab17c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AB17Cu;
    ctx->pc = 0x1AB180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB17Cu;
            // 0x1ab180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB184u;
    // 0x1ab184: 0x0  nop
    ctx->pc = 0x1ab184u;
    // NOP
label_1ab188:
    // 0x1ab188: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab18c: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x1ab18cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x1ab190: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1ab190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ab194: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x1ab194u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x1ab198: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x1ab198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1ab19c: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x1ab19cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x1ab1a0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1ab1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ab1a4: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1ab1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x1ab1a8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x1ab1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x1ab1ac: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x1ab1acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x1ab1b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB1B0u;
    {
        const bool branch_taken_0x1ab1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1B0u;
            // 0x1ab1b4: 0x28c90011  slti        $t1, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1b0) {
            ctx->pc = 0x1AB1D4u;
            goto label_1ab1d4;
        }
    }
    ctx->pc = 0x1AB1B8u;
label_1ab1b8:
    // 0x1ab1b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ab1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ab1bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ab1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ab1c0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x1ab1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ab1c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ab1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1c8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1ab1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1ab1cc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1ab1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1ab1d0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1ab1d4:
    // 0x1ab1d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ab1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab1d8: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x1ab1d8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1ab1dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ab1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ab1e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AB1E0u;
    {
        const bool branch_taken_0x1ab1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1E0u;
            // 0x1ab1e4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1e0) {
            ctx->pc = 0x1AB1B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab1b8;
        }
    }
    ctx->pc = 0x1AB1E8u;
    // 0x1ab1e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1ec:
    // 0x1ab1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1F0u;
            // 0x1ab1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB1F8u;
}
