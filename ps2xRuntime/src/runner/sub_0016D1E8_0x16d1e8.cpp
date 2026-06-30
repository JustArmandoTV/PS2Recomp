#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D1E8
// Address: 0x16d1e8 - 0x16d270
void sub_0016D1E8_0x16d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D1E8_0x16d1e8");
#endif

    switch (ctx->pc) {
        case 0x16d23cu: goto label_16d23c;
        case 0x16d250u: goto label_16d250;
        case 0x16d260u: goto label_16d260;
        default: break;
    }

    ctx->pc = 0x16d1e8u;

    // 0x16d1e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d1ec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d1f0: 0x8c472368  lw          $a3, 0x2368($v0)
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9064)));
    // 0x16d1f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d1f8: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16d1fc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d200: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d204: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16d208: 0x2463c360  addiu       $v1, $v1, -0x3CA0
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951776));
    // 0x16d20c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d210: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x16d210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16d214: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x16d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x16d218: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x16d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x16d21c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d220: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16d224: 0x2610aad0  addiu       $s0, $s0, -0x5530
    ctx->pc = 0x16d224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
    // 0x16d228: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16d228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d22c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x16d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x16d230: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x16d230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16d234: 0xc043058  jal         func_10C160
    ctx->pc = 0x16D234u;
    SET_GPR_U32(ctx, 31, 0x16D23Cu);
    ctx->pc = 0x16D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D234u;
            // 0x16d238: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D23Cu; }
        if (ctx->pc != 0x16D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D23Cu; }
        if (ctx->pc != 0x16D23Cu) { return; }
    }
    ctx->pc = 0x16D23Cu;
label_16d23c:
    // 0x16d23c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16d240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d248: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x16D248u;
    SET_GPR_U32(ctx, 31, 0x16D250u);
    ctx->pc = 0x16D24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D248u;
            // 0x16d24c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D250u; }
        if (ctx->pc != 0x16D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D250u; }
        if (ctx->pc != 0x16D250u) { return; }
    }
    ctx->pc = 0x16D250u;
label_16d250:
    // 0x16d250: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d254: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d258: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D258u;
    SET_GPR_U32(ctx, 31, 0x16D260u);
    ctx->pc = 0x16D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D258u;
            // 0x16d25c: 0x8c45aa4c  lw          $a1, -0x55B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D260u; }
        if (ctx->pc != 0x16D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D260u; }
        if (ctx->pc != 0x16D260u) { return; }
    }
    ctx->pc = 0x16D260u;
label_16d260:
    // 0x16d260: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d264: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d268: 0x3e00008  jr          $ra
    ctx->pc = 0x16D268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D268u;
            // 0x16d26c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D270u;
}
