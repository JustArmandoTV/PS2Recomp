#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6E30
// Address: 0x1a6e30 - 0x1a6ee8
void sub_001A6E30_0x1a6e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6E30_0x1a6e30");
#endif

    switch (ctx->pc) {
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6ebcu: goto label_1a6ebc;
        case 0x1a6eccu: goto label_1a6ecc;
        default: break;
    }

    ctx->pc = 0x1a6e30u;

    // 0x1a6e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6e34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a6e38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a6e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6e44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6e48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a6e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a6e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6e50: 0xc069bba  jal         func_1A6EE8
    ctx->pc = 0x1A6E50u;
    SET_GPR_U32(ctx, 31, 0x1A6E58u);
    ctx->pc = 0x1A6E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E50u;
            // 0x1a6e54: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6EE8u;
    if (runtime->hasFunction(0x1A6EE8u)) {
        auto targetFn = runtime->lookupFunction(0x1A6EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E58u; }
        if (ctx->pc != 0x1A6E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6EE8_0x1a6ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E58u; }
        if (ctx->pc != 0x1A6E58u) { return; }
    }
    ctx->pc = 0x1A6E58u;
label_1a6e58:
    // 0x1a6e58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6e58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e5c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A6E5Cu;
    {
        const bool branch_taken_0x1a6e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E5Cu;
            // 0x1a6e60: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e5c) {
            ctx->pc = 0x1A6ED0u;
            goto label_1a6ed0;
        }
    }
    ctx->pc = 0x1A6E64u;
    // 0x1a6e64: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a6e68: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6E68u;
    {
        const bool branch_taken_0x1a6e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A6E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E68u;
            // 0x1a6e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e68) {
            ctx->pc = 0x1A6ED0u;
            goto label_1a6ed0;
        }
    }
    ctx->pc = 0x1A6E70u;
    // 0x1a6e70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6e74: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6E74u;
    {
        const bool branch_taken_0x1a6e74 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1A6E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E74u;
            // 0x1a6e78: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e74) {
            ctx->pc = 0x1A6E90u;
            goto label_1a6e90;
        }
    }
    ctx->pc = 0x1A6E7Cu;
    // 0x1a6e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6e80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6e88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6e8c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a6e90:
    // 0x1a6e90: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1a6e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e98: 0x2442ab68  addiu       $v0, $v0, -0x5498
    ctx->pc = 0x1a6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945640));
    // 0x1a6e9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ea0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a6ea4: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1A6EA4u;
    SET_GPR_U32(ctx, 31, 0x1A6EACu);
    ctx->pc = 0x1A6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EA4u;
            // 0x1a6ea8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (runtime->hasFunction(0x1A7068u)) {
        auto targetFn = runtime->lookupFunction(0x1A7068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EACu; }
        if (ctx->pc != 0x1A6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7068_0x1a7068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EACu; }
        if (ctx->pc != 0x1A6EACu) { return; }
    }
    ctx->pc = 0x1A6EACu;
label_1a6eac:
    // 0x1a6eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6eb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6eb4: 0xc069c6a  jal         func_1A71A8
    ctx->pc = 0x1A6EB4u;
    SET_GPR_U32(ctx, 31, 0x1A6EBCu);
    ctx->pc = 0x1A6EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EB4u;
            // 0x1a6eb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A71A8u;
    if (runtime->hasFunction(0x1A71A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A71A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EBCu; }
        if (ctx->pc != 0x1A6EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A71A8_0x1a71a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EBCu; }
        if (ctx->pc != 0x1A6EBCu) { return; }
    }
    ctx->pc = 0x1A6EBCu;
label_1a6ebc:
    // 0x1a6ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ec4: 0xc069e0c  jal         func_1A7830
    ctx->pc = 0x1A6EC4u;
    SET_GPR_U32(ctx, 31, 0x1A6ECCu);
    ctx->pc = 0x1A6EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EC4u;
            // 0x1a6ec8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7830u;
    if (runtime->hasFunction(0x1A7830u)) {
        auto targetFn = runtime->lookupFunction(0x1A7830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6ECCu; }
        if (ctx->pc != 0x1A6ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7830_0x1a7830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6ECCu; }
        if (ctx->pc != 0x1A6ECCu) { return; }
    }
    ctx->pc = 0x1A6ECCu;
label_1a6ecc:
    // 0x1a6ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6ed0:
    // 0x1a6ed0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6ed4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6ed8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6edc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a6edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EE0u;
            // 0x1a6ee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6EE8u;
}
