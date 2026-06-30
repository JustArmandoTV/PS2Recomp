#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316990
// Address: 0x316990 - 0x316a40
void sub_00316990_0x316990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316990_0x316990");
#endif

    switch (ctx->pc) {
        case 0x3169c4u: goto label_3169c4;
        default: break;
    }

    ctx->pc = 0x316990u;

    // 0x316990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x316994: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x316994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x316998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x316998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31699c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31699cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3169a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3169a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3169a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3169a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3169a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3169acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3169b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3169b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3169b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169b8: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x3169b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
    // 0x3169bc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3169BCu;
    SET_GPR_U32(ctx, 31, 0x3169C4u);
    ctx->pc = 0x3169C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3169BCu;
            // 0x3169c0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3169C4u; }
        if (ctx->pc != 0x3169C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3169C4u; }
        if (ctx->pc != 0x3169C4u) { return; }
    }
    ctx->pc = 0x3169C4u;
label_3169c4:
    // 0x3169c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3169c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3169c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3169c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3169cc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3169ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x3169d0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3169d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3169d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3169d8: 0x24634be0  addiu       $v1, $v1, 0x4BE0
    ctx->pc = 0x3169d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19424));
    // 0x3169dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3169dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3169e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3169e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3169e4: 0xae500054  sw          $s0, 0x54($s2)
    ctx->pc = 0x3169e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 16));
    // 0x3169e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3169e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3169ec: 0xa2510058  sb          $s1, 0x58($s2)
    ctx->pc = 0x3169ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 17));
    // 0x3169f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3169f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3169f4: 0xa2420059  sb          $v0, 0x59($s2)
    ctx->pc = 0x3169f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x3169f8: 0x24844450  addiu       $a0, $a0, 0x4450
    ctx->pc = 0x3169f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    // 0x3169fc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3169fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x316a00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x316a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a04: 0x90630081  lbu         $v1, 0x81($v1)
    ctx->pc = 0x316a04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
    // 0x316a08: 0xa243005a  sb          $v1, 0x5A($s2)
    ctx->pc = 0x316a08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x316a0c: 0xa240005b  sb          $zero, 0x5B($s2)
    ctx->pc = 0x316a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a10: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x316a14: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x316a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x316a18: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x316a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x316a1c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x316a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x316a20: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x316a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x316a24: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x316a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x316a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x316a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a38: 0x3e00008  jr          $ra
    ctx->pc = 0x316A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316A38u;
            // 0x316a3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316A40u;
}
