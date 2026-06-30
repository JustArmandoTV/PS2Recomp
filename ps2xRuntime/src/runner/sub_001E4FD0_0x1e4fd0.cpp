#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4FD0
// Address: 0x1e4fd0 - 0x1e5060
void sub_001E4FD0_0x1e4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4FD0_0x1e4fd0");
#endif

    switch (ctx->pc) {
        case 0x1e502cu: goto label_1e502c;
        default: break;
    }

    ctx->pc = 0x1e4fd0u;

    // 0x1e4fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e4fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4fe0: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E4FE0u;
    {
        const bool branch_taken_0x1e4fe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FE0u;
            // 0x1e4fe4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fe0) {
            ctx->pc = 0x1E5044u;
            goto label_1e5044;
        }
    }
    ctx->pc = 0x1E4FE8u;
    // 0x1e4fe8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e4fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e4fec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e4ff0: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1e4ff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e4ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e4ff8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E4FF8u;
    {
        const bool branch_taken_0x1e4ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E4FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FF8u;
            // 0x1e4ffc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ff8) {
            ctx->pc = 0x1E5044u;
            goto label_1e5044;
        }
    }
    ctx->pc = 0x1E5000u;
    // 0x1e5000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e5004: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e5004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e5008: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e5008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e500c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e5010: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5014: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5014u;
    {
        const bool branch_taken_0x1e5014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5014) {
            ctx->pc = 0x1E5018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5014u;
            // 0x1e5018: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5030u;
            goto label_1e5030;
        }
    }
    ctx->pc = 0x1E501Cu;
    // 0x1e501c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5020: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5024: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1E5024u;
    SET_GPR_U32(ctx, 31, 0x1E502Cu);
    ctx->pc = 0x1E5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5024u;
            // 0x1e5028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E502Cu; }
        if (ctx->pc != 0x1E502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E502Cu; }
        if (ctx->pc != 0x1E502Cu) { return; }
    }
    ctx->pc = 0x1E502Cu;
label_1e502c:
    // 0x1e502c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e5030:
    // 0x1e5030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5034: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1e5034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1e5038: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e503c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e503cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e5040: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1e5040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_1e5044:
    // 0x1e5044: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e5044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e504c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e504cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5054: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5054u;
            // 0x1e5058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E505Cu;
    // 0x1e505c: 0x0  nop
    ctx->pc = 0x1e505cu;
    // NOP
}
