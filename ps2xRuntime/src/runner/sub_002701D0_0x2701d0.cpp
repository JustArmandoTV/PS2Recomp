#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002701D0
// Address: 0x2701d0 - 0x270280
void sub_002701D0_0x2701d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002701D0_0x2701d0");
#endif

    switch (ctx->pc) {
        case 0x270204u: goto label_270204;
        case 0x27022cu: goto label_27022c;
        case 0x27023cu: goto label_27023c;
        default: break;
    }

    ctx->pc = 0x2701d0u;

    // 0x2701d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2701d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2701d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2701d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2701d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2701d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2701dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2701dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2701e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2701e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2701e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2701e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2701e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2701ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2701f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2701f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2701f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2701f8: 0x26710038  addiu       $s1, $s3, 0x38
    ctx->pc = 0x2701f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x2701fc: 0xc09acd0  jal         func_26B340
    ctx->pc = 0x2701FCu;
    SET_GPR_U32(ctx, 31, 0x270204u);
    ctx->pc = 0x270200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2701FCu;
            // 0x270200: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B340u;
    if (runtime->hasFunction(0x26B340u)) {
        auto targetFn = runtime->lookupFunction(0x26B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270204u; }
        if (ctx->pc != 0x270204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B340_0x26b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270204u; }
        if (ctx->pc != 0x270204u) { return; }
    }
    ctx->pc = 0x270204u;
label_270204:
    // 0x270204: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x270208: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x270208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27020c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27020cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x270210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270218: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x270218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x27021c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x27021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x270220: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x270220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x270224: 0xc09bc58  jal         func_26F160
    ctx->pc = 0x270224u;
    SET_GPR_U32(ctx, 31, 0x27022Cu);
    ctx->pc = 0x270228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270224u;
            // 0x270228: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F160u;
    if (runtime->hasFunction(0x26F160u)) {
        auto targetFn = runtime->lookupFunction(0x26F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27022Cu; }
        if (ctx->pc != 0x27022Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F160_0x26f160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27022Cu; }
        if (ctx->pc != 0x27022Cu) { return; }
    }
    ctx->pc = 0x27022Cu;
label_27022c:
    // 0x27022c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270230: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x270230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270234: 0xc09ba00  jal         func_26E800
    ctx->pc = 0x270234u;
    SET_GPR_U32(ctx, 31, 0x27023Cu);
    ctx->pc = 0x270238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270234u;
            // 0x270238: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E800u;
    if (runtime->hasFunction(0x26E800u)) {
        auto targetFn = runtime->lookupFunction(0x26E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27023Cu; }
        if (ctx->pc != 0x27023Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E800_0x26e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27023Cu; }
        if (ctx->pc != 0x27023Cu) { return; }
    }
    ctx->pc = 0x27023Cu;
label_27023c:
    // 0x27023c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x27023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x270240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270244: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x270244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x270248: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x270248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x27024c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x27024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x270250: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x270250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x270254: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x270254u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x270258: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x270258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27025c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x270260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27026c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27026cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270274: 0x3e00008  jr          $ra
    ctx->pc = 0x270274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270274u;
            // 0x270278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27027Cu;
    // 0x27027c: 0x0  nop
    ctx->pc = 0x27027cu;
    // NOP
}
