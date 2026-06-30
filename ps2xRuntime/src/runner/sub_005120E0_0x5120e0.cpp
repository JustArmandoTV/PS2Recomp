#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005120E0
// Address: 0x5120e0 - 0x512180
void sub_005120E0_0x5120e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005120E0_0x5120e0");
#endif

    switch (ctx->pc) {
        case 0x51211cu: goto label_51211c;
        default: break;
    }

    ctx->pc = 0x5120e0u;

    // 0x5120e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5120e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x5120e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5120e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x5120e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5120e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x5120ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5120ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x5120f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5120f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x5120f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5120f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5120f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5120f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5120fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x5120fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x512100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x512104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x512104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512108: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x512108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51210c: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x51210cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x512110: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x512110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x512114: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x512114u;
    SET_GPR_U32(ctx, 31, 0x51211Cu);
    ctx->pc = 0x512118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x512114u;
            // 0x512118: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51211Cu; }
        if (ctx->pc != 0x51211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51211Cu; }
        if (ctx->pc != 0x51211Cu) { return; }
    }
    ctx->pc = 0x51211Cu;
label_51211c:
    // 0x51211c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x512120: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x512120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x512124: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x512124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x512128: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x512128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
    // 0x51212c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x51212cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x512130: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x512130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x512134: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x512134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x512138: 0x24635360  addiu       $v1, $v1, 0x5360
    ctx->pc = 0x512138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21344));
    // 0x51213c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x51213cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512140: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x512140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x512144: 0xae710054  sw          $s1, 0x54($s3)
    ctx->pc = 0x512144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 17));
    // 0x512148: 0xae720058  sw          $s2, 0x58($s3)
    ctx->pc = 0x512148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 18));
    // 0x51214c: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x51214cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x512150: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x512150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x512154: 0xae700064  sw          $s0, 0x64($s3)
    ctx->pc = 0x512154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 16));
    // 0x512158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x512158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51215c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51215cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x512160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x512160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x512164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x512168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51216c: 0x3e00008  jr          $ra
    ctx->pc = 0x51216Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51216Cu;
            // 0x512170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512174u;
    // 0x512174: 0x0  nop
    ctx->pc = 0x512174u;
    // NOP
    // 0x512178: 0x0  nop
    ctx->pc = 0x512178u;
    // NOP
    // 0x51217c: 0x0  nop
    ctx->pc = 0x51217cu;
    // NOP
}
