#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199EB0
// Address: 0x199eb0 - 0x199f68
void sub_00199EB0_0x199eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199EB0_0x199eb0");
#endif

    switch (ctx->pc) {
        case 0x199f18u: goto label_199f18;
        case 0x199f20u: goto label_199f20;
        case 0x199f3cu: goto label_199f3c;
        default: break;
    }

    ctx->pc = 0x199eb0u;

    // 0x199eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199eb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x199eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x199ec0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x199ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ec4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x199ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x199ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199ecc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199ed0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x199ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x199ed4: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x199ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x199ed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199ED8u;
    {
        const bool branch_taken_0x199ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199ED8u;
            // 0x199edc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ed8) {
            ctx->pc = 0x199EF0u;
            goto label_199ef0;
        }
    }
    ctx->pc = 0x199EE0u;
    // 0x199ee0: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x199EE0u;
    {
        const bool branch_taken_0x199ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199ee0) {
            ctx->pc = 0x199EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199EE0u;
            // 0x199ee4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EE8u;
    // 0x199ee8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x199EE8u;
    {
        const bool branch_taken_0x199ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EE8u;
            // 0x199eec: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ee8) {
            ctx->pc = 0x199F10u;
            goto label_199f10;
        }
    }
    ctx->pc = 0x199EF0u;
label_199ef0:
    // 0x199ef0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199ef4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199EF4u;
    {
        const bool branch_taken_0x199ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EF4u;
            // 0x199ef8: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ef4) {
            ctx->pc = 0x199F10u;
            goto label_199f10;
        }
    }
    ctx->pc = 0x199EFCu;
    // 0x199efc: 0x80a2006c  lb          $v0, 0x6C($a1)
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x199f00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199F00u;
    {
        const bool branch_taken_0x199f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199f00) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199F08u;
    // 0x199f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199F08u;
    {
        const bool branch_taken_0x199f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F08u;
            // 0x199f0c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f08) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199F10u;
label_199f10:
    // 0x199f10: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x199F10u;
    SET_GPR_U32(ctx, 31, 0x199F18u);
    ctx->pc = 0x199F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F10u;
            // 0x199f14: 0x24848ca8  addiu       $a0, $a0, -0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F18u; }
        if (ctx->pc != 0x199F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F18u; }
        if (ctx->pc != 0x199F18u) { return; }
    }
    ctx->pc = 0x199F18u;
label_199f18:
    // 0x199f18: 0xc066d2a  jal         func_19B4A8
    ctx->pc = 0x199F18u;
    SET_GPR_U32(ctx, 31, 0x199F20u);
    ctx->pc = 0x19B4A8u;
    if (runtime->hasFunction(0x19B4A8u)) {
        auto targetFn = runtime->lookupFunction(0x19B4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F20u; }
        if (ctx->pc != 0x199F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B4A8_0x19b4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F20u; }
        if (ctx->pc != 0x199F20u) { return; }
    }
    ctx->pc = 0x199F20u;
label_199f20:
    // 0x199f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199f28: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x199F28u;
    {
        const bool branch_taken_0x199f28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x199f28) {
            ctx->pc = 0x199F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199F28u;
            // 0x199f2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199F4Cu;
            goto label_199f4c;
        }
    }
    ctx->pc = 0x199F30u;
    // 0x199f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x199f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f34: 0xc06ff7a  jal         func_1BFDE8
    ctx->pc = 0x199F34u;
    SET_GPR_U32(ctx, 31, 0x199F3Cu);
    ctx->pc = 0x199F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F34u;
            // 0x199f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDE8u;
    if (runtime->hasFunction(0x1BFDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F3Cu; }
        if (ctx->pc != 0x199F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDE8_0x1bfde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F3Cu; }
        if (ctx->pc != 0x199F3Cu) { return; }
    }
    ctx->pc = 0x199F3Cu;
label_199f3c:
    // 0x199f3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199f40: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x199f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x199f44: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x199f44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x199f48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x199f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199f4c:
    // 0x199f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199f58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x199f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199f60: 0x3e00008  jr          $ra
    ctx->pc = 0x199F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F60u;
            // 0x199f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199F68u;
}
