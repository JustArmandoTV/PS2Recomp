#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00512040
// Address: 0x512040 - 0x5120d0
void sub_00512040_0x512040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512040_0x512040");
#endif

    switch (ctx->pc) {
        case 0x51207cu: goto label_51207c;
        default: break;
    }

    ctx->pc = 0x512040u;

    // 0x512040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x512040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x512044: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x512044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x512048: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x512048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x51204c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x512050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x512050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x512054: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x512054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x512058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51205c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51205cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x512064: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x512064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512068: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x512068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51206c: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x51206cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x512070: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x512070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x512074: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x512074u;
    SET_GPR_U32(ctx, 31, 0x51207Cu);
    ctx->pc = 0x512078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512074u;
            // 0x512078: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51207Cu; }
        if (ctx->pc != 0x51207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51207Cu; }
        if (ctx->pc != 0x51207Cu) { return; }
    }
    ctx->pc = 0x51207Cu;
label_51207c:
    // 0x51207c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51207cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x512080: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x512080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x512084: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x512084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x512088: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x512088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
    // 0x51208c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x51208cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x512090: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x512090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x512094: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x512094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x512098: 0x246353a0  addiu       $v1, $v1, 0x53A0
    ctx->pc = 0x512098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21408));
    // 0x51209c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x51209cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5120a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5120a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x5120a4: 0xae710054  sw          $s1, 0x54($s3)
    ctx->pc = 0x5120a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 17));
    // 0x5120a8: 0xae720058  sw          $s2, 0x58($s3)
    ctx->pc = 0x5120a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 18));
    // 0x5120ac: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x5120acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x5120b0: 0xae700060  sw          $s0, 0x60($s3)
    ctx->pc = 0x5120b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 16));
    // 0x5120b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5120b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5120b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5120b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5120bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5120bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5120c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5120c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5120c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5120c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5120c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5120C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5120CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5120C8u;
            // 0x5120cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5120D0u;
}
