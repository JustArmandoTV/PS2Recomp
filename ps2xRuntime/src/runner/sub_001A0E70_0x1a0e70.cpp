#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0E70
// Address: 0x1a0e70 - 0x1a0ef8
void sub_001A0E70_0x1a0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0E70_0x1a0e70");
#endif

    switch (ctx->pc) {
        case 0x1a0eacu: goto label_1a0eac;
        case 0x1a0ed4u: goto label_1a0ed4;
        default: break;
    }

    ctx->pc = 0x1a0e70u;

    // 0x1a0e70: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0e74: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0e78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0e8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a0e90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a0e94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a0e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0e9c: 0x245204f8  addiu       $s2, $v0, 0x4F8
    ctx->pc = 0x1a0e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
    // 0x1a0ea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0ea4: 0xc0683be  jal         func_1A0EF8
    ctx->pc = 0x1A0EA4u;
    SET_GPR_U32(ctx, 31, 0x1A0EACu);
    ctx->pc = 0x1A0EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EA4u;
            // 0x1a0ea8: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EF8u;
    if (runtime->hasFunction(0x1A0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EACu; }
        if (ctx->pc != 0x1A0EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0EF8_0x1a0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EACu; }
        if (ctx->pc != 0x1A0EACu) { return; }
    }
    ctx->pc = 0x1A0EACu;
label_1a0eac:
    // 0x1a0eac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1a0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a0eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ebc: 0x266500c0  addiu       $a1, $s3, 0xC0
    ctx->pc = 0x1a0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1a0ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ec4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0EC4u;
    {
        const bool branch_taken_0x1a0ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EC4u;
            // 0x1a0ec8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ec4) {
            ctx->pc = 0x1A0ED4u;
            goto label_1a0ed4;
        }
    }
    ctx->pc = 0x1A0ECCu;
    // 0x1a0ecc: 0xc0679b0  jal         func_19E6C0
    ctx->pc = 0x1A0ECCu;
    SET_GPR_U32(ctx, 31, 0x1A0ED4u);
    ctx->pc = 0x19E6C0u;
    if (runtime->hasFunction(0x19E6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ED4u; }
        if (ctx->pc != 0x1A0ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E6C0_0x19e6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ED4u; }
        if (ctx->pc != 0x1A0ED4u) { return; }
    }
    ctx->pc = 0x1A0ED4u;
label_1a0ed4:
    // 0x1a0ed4: 0xae53001c  sw          $s3, 0x1C($s2)
    ctx->pc = 0x1a0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 19));
    // 0x1a0ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a0ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EECu;
            // 0x1a0ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0EF4u;
    // 0x1a0ef4: 0x0  nop
    ctx->pc = 0x1a0ef4u;
    // NOP
}
