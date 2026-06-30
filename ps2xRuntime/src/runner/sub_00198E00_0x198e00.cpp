#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198E00
// Address: 0x198e00 - 0x198ec8
void sub_00198E00_0x198e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198E00_0x198e00");
#endif

    switch (ctx->pc) {
        case 0x198e28u: goto label_198e28;
        case 0x198e38u: goto label_198e38;
        case 0x198e54u: goto label_198e54;
        case 0x198e68u: goto label_198e68;
        case 0x198e80u: goto label_198e80;
        case 0x198e88u: goto label_198e88;
        default: break;
    }

    ctx->pc = 0x198e00u;

    // 0x198e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x198e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x198e10: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x198e14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x198e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x198e18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x198e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x198e1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x198e20: 0xc0679fe  jal         func_19E7F8
    ctx->pc = 0x198E20u;
    SET_GPR_U32(ctx, 31, 0x198E28u);
    ctx->pc = 0x198E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E20u;
            // 0x198e24: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E7F8u;
    if (runtime->hasFunction(0x19E7F8u)) {
        auto targetFn = runtime->lookupFunction(0x19E7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E28u; }
        if (ctx->pc != 0x198E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E7F8_0x19e7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E28u; }
        if (ctx->pc != 0x198E28u) { return; }
    }
    ctx->pc = 0x198E28u;
label_198e28:
    // 0x198e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x198e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e30: 0xc066502  jal         func_199408
    ctx->pc = 0x198E30u;
    SET_GPR_U32(ctx, 31, 0x198E38u);
    ctx->pc = 0x198E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E30u;
            // 0x198e34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E38u; }
        if (ctx->pc != 0x198E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E38u; }
        if (ctx->pc != 0x198E38u) { return; }
    }
    ctx->pc = 0x198E38u;
label_198e38:
    // 0x198e38: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198e3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198E3Cu;
    {
        const bool branch_taken_0x198e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E3Cu;
            // 0x198e40: 0x24848a40  addiu       $a0, $a0, -0x75C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e3c) {
            ctx->pc = 0x198E78u;
            goto label_198e78;
        }
    }
    ctx->pc = 0x198E44u;
    // 0x198e44: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x198e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x198e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e4c: 0xc067cf8  jal         func_19F3E0
    ctx->pc = 0x198E4Cu;
    SET_GPR_U32(ctx, 31, 0x198E54u);
    ctx->pc = 0x198E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E4Cu;
            // 0x198e50: 0xae1200c0  sw          $s2, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3E0u;
    if (runtime->hasFunction(0x19F3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E54u; }
        if (ctx->pc != 0x198E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3E0_0x19f3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E54u; }
        if (ctx->pc != 0x198E54u) { return; }
    }
    ctx->pc = 0x198E54u;
label_198e54:
    // 0x198e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198e58: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x198E58u;
    {
        const bool branch_taken_0x198e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E58u;
            // 0x198e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e58) {
            ctx->pc = 0x198EA0u;
            goto label_198ea0;
        }
    }
    ctx->pc = 0x198E60u;
    // 0x198e60: 0xc066502  jal         func_199408
    ctx->pc = 0x198E60u;
    SET_GPR_U32(ctx, 31, 0x198E68u);
    ctx->pc = 0x198E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E60u;
            // 0x198e64: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E68u; }
        if (ctx->pc != 0x198E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E68u; }
        if (ctx->pc != 0x198E68u) { return; }
    }
    ctx->pc = 0x198E68u;
label_198e68:
    // 0x198e68: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198e6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x198E70u;
    {
        const bool branch_taken_0x198e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E70u;
            // 0x198e74: 0x24848a68  addiu       $a0, $a0, -0x7598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e70) {
            ctx->pc = 0x198E90u;
            goto label_198e90;
        }
    }
    ctx->pc = 0x198E78u;
label_198e78:
    // 0x198e78: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198E78u;
    SET_GPR_U32(ctx, 31, 0x198E80u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E80u; }
        if (ctx->pc != 0x198E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E80u; }
        if (ctx->pc != 0x198E80u) { return; }
    }
    ctx->pc = 0x198E80u;
label_198e80:
    // 0x198e80: 0xc06656c  jal         func_1995B0
    ctx->pc = 0x198E80u;
    SET_GPR_U32(ctx, 31, 0x198E88u);
    ctx->pc = 0x198E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198E80u;
            // 0x198e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1995B0u;
    if (runtime->hasFunction(0x1995B0u)) {
        auto targetFn = runtime->lookupFunction(0x1995B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E88u; }
        if (ctx->pc != 0x198E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001995B0_0x1995b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198E88u; }
        if (ctx->pc != 0x198E88u) { return; }
    }
    ctx->pc = 0x198E88u;
label_198e88:
    // 0x198e88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198E88u;
    {
        const bool branch_taken_0x198e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E88u;
            // 0x198e8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e88) {
            ctx->pc = 0x198EACu;
            goto label_198eac;
        }
    }
    ctx->pc = 0x198E90u;
label_198e90:
    // 0x198e90: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x198e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x198e94: 0xae0303f4  sw          $v1, 0x3F4($s0)
    ctx->pc = 0x198e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 3));
    // 0x198e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198E98u;
    {
        const bool branch_taken_0x198e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198E98u;
            // 0x198e9c: 0xae0203f8  sw          $v0, 0x3F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e98) {
            ctx->pc = 0x198EA8u;
            goto label_198ea8;
        }
    }
    ctx->pc = 0x198EA0u;
label_198ea0:
    // 0x198ea0: 0xae0003f8  sw          $zero, 0x3F8($s0)
    ctx->pc = 0x198ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
    // 0x198ea4: 0xae0003f4  sw          $zero, 0x3F4($s0)
    ctx->pc = 0x198ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 0));
label_198ea8:
    // 0x198ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198eac:
    // 0x198eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198eb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198eb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x198eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x198EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198EBCu;
            // 0x198ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198EC4u;
    // 0x198ec4: 0x0  nop
    ctx->pc = 0x198ec4u;
    // NOP
}
