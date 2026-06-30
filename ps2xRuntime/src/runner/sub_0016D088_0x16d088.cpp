#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D088
// Address: 0x16d088 - 0x16d130
void sub_0016D088_0x16d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D088_0x16d088");
#endif

    switch (ctx->pc) {
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d108u: goto label_16d108;
        case 0x16d11cu: goto label_16d11c;
        default: break;
    }

    ctx->pc = 0x16d088u;

    // 0x16d088: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d08c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d090: 0x8c472368  lw          $a3, 0x2368($v0)
    ctx->pc = 0x16d090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9064)));
    // 0x16d094: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d098: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16d098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16d09c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d0a0: 0x24a5ca10  addiu       $a1, $a1, -0x35F0
    ctx->pc = 0x16d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953488));
    // 0x16d0a4: 0x2463ab60  addiu       $v1, $v1, -0x54A0
    ctx->pc = 0x16d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945632));
    // 0x16d0a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0ac: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x16d0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16d0b0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x16d0b4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d0b8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16d0bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d0c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d0c4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x16d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x16d0c8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x16d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16d0cc: 0xc043058  jal         func_10C160
    ctx->pc = 0x16D0CCu;
    SET_GPR_U32(ctx, 31, 0x16D0D4u);
    ctx->pc = 0x16D0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0CCu;
            // 0x16d0d0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0D4u; }
        if (ctx->pc != 0x16D0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0D4u; }
        if (ctx->pc != 0x16D0D4u) { return; }
    }
    ctx->pc = 0x16D0D4u;
label_16d0d4:
    // 0x16d0d4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d0d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0dc: 0x2470aac8  addiu       $s0, $v1, -0x5538
    ctx->pc = 0x16d0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945480));
    // 0x16d0e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16d0e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d0e8: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x16D0E8u;
    SET_GPR_U32(ctx, 31, 0x16D0F0u);
    ctx->pc = 0x16D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0E8u;
            // 0x16d0ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0F0u; }
        if (ctx->pc != 0x16D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0F0u; }
        if (ctx->pc != 0x16D0F0u) { return; }
    }
    ctx->pc = 0x16D0F0u;
label_16d0f0:
    // 0x16d0f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d0f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D0F4u;
    {
        const bool branch_taken_0x16d0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0F4u;
            // 0x16d0f8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0f4) {
            ctx->pc = 0x16D110u;
            goto label_16d110;
        }
    }
    ctx->pc = 0x16D0FCu;
    // 0x16d0fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d100: 0xc05b40a  jal         func_16D028
    ctx->pc = 0x16D100u;
    SET_GPR_U32(ctx, 31, 0x16D108u);
    ctx->pc = 0x16D028u;
    if (runtime->hasFunction(0x16D028u)) {
        auto targetFn = runtime->lookupFunction(0x16D028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D108u; }
        if (ctx->pc != 0x16D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D028_0x16d028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D108u; }
        if (ctx->pc != 0x16D108u) { return; }
    }
    ctx->pc = 0x16D108u;
label_16d108:
    // 0x16d108: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d10c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16d110:
    // 0x16d110: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d114: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D114u;
    SET_GPR_U32(ctx, 31, 0x16D11Cu);
    ctx->pc = 0x16D118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D114u;
            // 0x16d118: 0x8c45aa44  lw          $a1, -0x55BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945348)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D11Cu; }
        if (ctx->pc != 0x16D11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D11Cu; }
        if (ctx->pc != 0x16D11Cu) { return; }
    }
    ctx->pc = 0x16D11Cu;
label_16d11c:
    // 0x16d11c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d120: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d124: 0x3e00008  jr          $ra
    ctx->pc = 0x16D124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D124u;
            // 0x16d128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D12Cu;
    // 0x16d12c: 0x0  nop
    ctx->pc = 0x16d12cu;
    // NOP
}
