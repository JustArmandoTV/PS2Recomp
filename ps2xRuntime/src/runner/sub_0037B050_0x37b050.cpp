#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B050
// Address: 0x37b050 - 0x37b0c0
void sub_0037B050_0x37b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B050_0x37b050");
#endif

    switch (ctx->pc) {
        case 0x37b06cu: goto label_37b06c;
        case 0x37b0a8u: goto label_37b0a8;
        default: break;
    }

    ctx->pc = 0x37b050u;

    // 0x37b050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37b058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37b060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b064: 0xc088ef4  jal         func_223BD0
    ctx->pc = 0x37B064u;
    SET_GPR_U32(ctx, 31, 0x37B06Cu);
    ctx->pc = 0x37B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B064u;
            // 0x37b068: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B06Cu; }
        if (ctx->pc != 0x37B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B06Cu; }
        if (ctx->pc != 0x37B06Cu) { return; }
    }
    ctx->pc = 0x37B06Cu;
label_37b06c:
    // 0x37b06c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b070: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37b074: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x37b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
    // 0x37b078: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x37b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
    // 0x37b07c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x37b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37b080: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x37b080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x37b084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x37b088: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37b088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x37b08c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x37b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x37b090: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x37b090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x37b094: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x37b094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x37b098: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x37b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x37b09c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x37b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x37b0a0: 0xc088b38  jal         func_222CE0
    ctx->pc = 0x37B0A0u;
    SET_GPR_U32(ctx, 31, 0x37B0A8u);
    ctx->pc = 0x37B0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B0A0u;
            // 0x37b0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B0A8u; }
        if (ctx->pc != 0x37B0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B0A8u; }
        if (ctx->pc != 0x37B0A8u) { return; }
    }
    ctx->pc = 0x37B0A8u;
label_37b0a8:
    // 0x37b0a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37b0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B0B8u;
            // 0x37b0bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B0C0u;
}
