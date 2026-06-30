#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0E00
// Address: 0x1d0e00 - 0x1d0f28
void sub_001D0E00_0x1d0e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E00_0x1d0e00");
#endif

    switch (ctx->pc) {
        case 0x1d0e2cu: goto label_1d0e2c;
        case 0x1d0e48u: goto label_1d0e48;
        case 0x1d0e50u: goto label_1d0e50;
        case 0x1d0e80u: goto label_1d0e80;
        case 0x1d0ee0u: goto label_1d0ee0;
        default: break;
    }

    ctx->pc = 0x1d0e00u;

    // 0x1d0e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d0e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0e0c: 0x2463cd38  addiu       $v1, $v1, -0x32C8
    ctx->pc = 0x1d0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954296));
    // 0x1d0e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0e14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d0e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d0e20: 0xac50a140  sw          $s0, -0x5EC0($v0)
    ctx->pc = 0x1d0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943040), GPR_U32(ctx, 16));
    // 0x1d0e24: 0xc15aba4  jal         func_56AE90
    ctx->pc = 0x1D0E24u;
    SET_GPR_U32(ctx, 31, 0x1D0E2Cu);
    ctx->pc = 0x1D0E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E24u;
            // 0x1d0e28: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56AE90u;
    if (runtime->hasFunction(0x56AE90u)) {
        auto targetFn = runtime->lookupFunction(0x56AE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E2Cu; }
        if (ctx->pc != 0x1D0E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056AE90_0x56ae90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E2Cu; }
        if (ctx->pc != 0x1D0E2Cu) { return; }
    }
    ctx->pc = 0x1D0E2Cu;
label_1d0e2c:
    // 0x1d0e2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d0e30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d0e34: 0x2463cd10  addiu       $v1, $v1, -0x32F0
    ctx->pc = 0x1d0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954256));
    // 0x1d0e38: 0x2442cd1c  addiu       $v0, $v0, -0x32E4
    ctx->pc = 0x1d0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954268));
    // 0x1d0e3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0e40: 0xc0743ec  jal         func_1D0FB0
    ctx->pc = 0x1D0E40u;
    SET_GPR_U32(ctx, 31, 0x1D0E48u);
    ctx->pc = 0x1D0E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E40u;
            // 0x1d0e44: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0FB0u;
    if (runtime->hasFunction(0x1D0FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E48u; }
        if (ctx->pc != 0x1D0E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0FB0_0x1d0fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E48u; }
        if (ctx->pc != 0x1D0E48u) { return; }
    }
    ctx->pc = 0x1D0E48u;
label_1d0e48:
    // 0x1d0e48: 0xc047f18  jal         func_11FC60
    ctx->pc = 0x1D0E48u;
    SET_GPR_U32(ctx, 31, 0x1D0E50u);
    ctx->pc = 0x1D0E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E48u;
            // 0x1d0e4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC60u;
    if (runtime->hasFunction(0x11FC60u)) {
        auto targetFn = runtime->lookupFunction(0x11FC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E50u; }
        if (ctx->pc != 0x1D0E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FC60_0x11fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E50u; }
        if (ctx->pc != 0x1D0E50u) { return; }
    }
    ctx->pc = 0x1D0E50u;
label_1d0e50:
    // 0x1d0e50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0e54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d0e58: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d0e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1d0e5c: 0x24639820  addiu       $v1, $v1, -0x67E0
    ctx->pc = 0x1d0e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940704));
    // 0x1d0e60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d0e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e68: 0xac439920  sw          $v1, -0x66E0($v0)
    ctx->pc = 0x1d0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940960), GPR_U32(ctx, 3));
    // 0x1d0e6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d0e70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d0e74: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x1d0e78: 0xc074344  jal         func_1D0D10
    ctx->pc = 0x1D0E78u;
    SET_GPR_U32(ctx, 31, 0x1D0E80u);
    ctx->pc = 0x1D0E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E78u;
            // 0x1d0e7c: 0xac439928  sw          $v1, -0x66D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940968), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D10u;
    if (runtime->hasFunction(0x1D0D10u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E80u; }
        if (ctx->pc != 0x1D0E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0D10_0x1d0d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E80u; }
        if (ctx->pc != 0x1D0E80u) { return; }
    }
    ctx->pc = 0x1D0E80u;
label_1d0e80:
    // 0x1d0e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E8Cu;
            // 0x1d0e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0E94u;
    // 0x1d0e94: 0x0  nop
    ctx->pc = 0x1d0e94u;
    // NOP
    // 0x1d0e98: 0x0  nop
    ctx->pc = 0x1d0e98u;
    // NOP
    // 0x1d0e9c: 0x0  nop
    ctx->pc = 0x1d0e9cu;
    // NOP
    // 0x1d0ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0eb0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0EB0u;
    {
        const bool branch_taken_0x1d0eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0eb0) {
            ctx->pc = 0x1D0EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EB0u;
            // 0x1d0eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0EE4u;
            goto label_1d0ee4;
        }
    }
    ctx->pc = 0x1D0EB8u;
    // 0x1d0eb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d0ebc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1d0ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1d0ec0: 0x2442cd38  addiu       $v0, $v0, -0x32C8
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954296));
    // 0x1d0ec4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d0ec8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d0ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d0ecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d0ed0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0ED0u;
    {
        const bool branch_taken_0x1d0ed0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D0ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0ED0u;
            // 0x1d0ed4: 0xac40a140  sw          $zero, -0x5EC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed0) {
            ctx->pc = 0x1D0EE0u;
            goto label_1d0ee0;
        }
    }
    ctx->pc = 0x1D0ED8u;
    // 0x1d0ed8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1D0ED8u;
    SET_GPR_U32(ctx, 31, 0x1D0EE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EE0u; }
        if (ctx->pc != 0x1D0EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EE0u; }
        if (ctx->pc != 0x1D0EE0u) { return; }
    }
    ctx->pc = 0x1D0EE0u;
label_1d0ee0:
    // 0x1d0ee0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ee4:
    // 0x1d0ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EECu;
            // 0x1d0ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0EF4u;
    // 0x1d0ef4: 0x0  nop
    ctx->pc = 0x1d0ef4u;
    // NOP
    // 0x1d0ef8: 0x0  nop
    ctx->pc = 0x1d0ef8u;
    // NOP
    // 0x1d0efc: 0x0  nop
    ctx->pc = 0x1d0efcu;
    // NOP
    // 0x1d0f00: 0x8074308  j           func_1D0C20
    ctx->pc = 0x1D0F00u;
    ctx->pc = 0x1D0F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F00u;
            // 0x1d0f04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C20u;
    {
        auto targetFn = runtime->lookupFunction(0x1D0C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D0F08u;
    // 0x1d0f08: 0x0  nop
    ctx->pc = 0x1d0f08u;
    // NOP
    // 0x1d0f0c: 0x0  nop
    ctx->pc = 0x1d0f0cu;
    // NOP
    // 0x1d0f10: 0x8073eb0  j           func_1CFAC0
    ctx->pc = 0x1D0F10u;
    ctx->pc = 0x1D0F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F10u;
            // 0x1d0f14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFAC0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CFAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D0F18u;
    // 0x1d0f18: 0x0  nop
    ctx->pc = 0x1d0f18u;
    // NOP
    // 0x1d0f1c: 0x0  nop
    ctx->pc = 0x1d0f1cu;
    // NOP
    // 0x1d0f20: 0x8073e4c  j           func_1CF930
    ctx->pc = 0x1D0F20u;
    ctx->pc = 0x1D0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F20u;
            // 0x1d0f24: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF930u;
    {
        auto targetFn = runtime->lookupFunction(0x1CF930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D0F28u;
}
