#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A89C0
// Address: 0x4a89c0 - 0x4a8a40
void sub_004A89C0_0x4a89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A89C0_0x4a89c0");
#endif

    switch (ctx->pc) {
        case 0x4a89c0u: goto label_4a89c0;
        case 0x4a89c4u: goto label_4a89c4;
        case 0x4a89c8u: goto label_4a89c8;
        case 0x4a89ccu: goto label_4a89cc;
        case 0x4a89d0u: goto label_4a89d0;
        case 0x4a89d4u: goto label_4a89d4;
        case 0x4a89d8u: goto label_4a89d8;
        case 0x4a89dcu: goto label_4a89dc;
        case 0x4a89e0u: goto label_4a89e0;
        case 0x4a89e4u: goto label_4a89e4;
        case 0x4a89e8u: goto label_4a89e8;
        case 0x4a89ecu: goto label_4a89ec;
        case 0x4a89f0u: goto label_4a89f0;
        case 0x4a89f4u: goto label_4a89f4;
        case 0x4a89f8u: goto label_4a89f8;
        case 0x4a89fcu: goto label_4a89fc;
        case 0x4a8a00u: goto label_4a8a00;
        case 0x4a8a04u: goto label_4a8a04;
        case 0x4a8a08u: goto label_4a8a08;
        case 0x4a8a0cu: goto label_4a8a0c;
        case 0x4a8a10u: goto label_4a8a10;
        case 0x4a8a14u: goto label_4a8a14;
        case 0x4a8a18u: goto label_4a8a18;
        case 0x4a8a1cu: goto label_4a8a1c;
        case 0x4a8a20u: goto label_4a8a20;
        case 0x4a8a24u: goto label_4a8a24;
        case 0x4a8a28u: goto label_4a8a28;
        case 0x4a8a2cu: goto label_4a8a2c;
        case 0x4a8a30u: goto label_4a8a30;
        case 0x4a8a34u: goto label_4a8a34;
        case 0x4a8a38u: goto label_4a8a38;
        case 0x4a8a3cu: goto label_4a8a3c;
        default: break;
    }

    ctx->pc = 0x4a89c0u;

label_4a89c0:
    // 0x4a89c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a89c4:
    // 0x4a89c4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4a89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4a89c8:
    // 0x4a89c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a89cc:
    // 0x4a89cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4a89ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4a89d0:
    // 0x4a89d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a89d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a89d4:
    // 0x4a89d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4a89d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a89d8:
    // 0x4a89d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a89d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a89dc:
    // 0x4a89dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a89dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a89e0:
    // 0x4a89e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a89e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a89e4:
    // 0x4a89e4: 0xc10ca68  jal         func_4329A0
label_4a89e8:
    if (ctx->pc == 0x4A89E8u) {
        ctx->pc = 0x4A89E8u;
            // 0x4a89e8: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->pc = 0x4A89ECu;
        goto label_4a89ec;
    }
    ctx->pc = 0x4A89E4u;
    SET_GPR_U32(ctx, 31, 0x4A89ECu);
    ctx->pc = 0x4A89E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A89E4u;
            // 0x4a89e8: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A89ECu; }
        if (ctx->pc != 0x4A89ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A89ECu; }
        if (ctx->pc != 0x4A89ECu) { return; }
    }
    ctx->pc = 0x4A89ECu;
label_4a89ec:
    // 0x4a89ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a89f0:
    // 0x4a89f0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a89f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4a89f4:
    // 0x4a89f4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4a89f8:
    // 0x4a89f8: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x4a89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
label_4a89fc:
    // 0x4a89fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a8a00:
    // 0x4a8a00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4a8a04:
    // 0x4a8a04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a8a08:
    // 0x4a8a08: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x4a8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_4a8a0c:
    // 0x4a8a0c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a8a10:
    // 0x4a8a10: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x4a8a10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4a8a14:
    // 0x4a8a14: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x4a8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_4a8a18:
    // 0x4a8a18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a8a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a8a1c:
    // 0x4a8a1c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a8a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a8a20:
    // 0x4a8a20: 0x320f809  jalr        $t9
label_4a8a24:
    if (ctx->pc == 0x4A8A24u) {
        ctx->pc = 0x4A8A24u;
            // 0x4a8a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A28u;
        goto label_4a8a28;
    }
    ctx->pc = 0x4A8A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A8A28u);
        ctx->pc = 0x4A8A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8A20u;
            // 0x4a8a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A8A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A8A28u; }
            if (ctx->pc != 0x4A8A28u) { return; }
        }
        }
    }
    ctx->pc = 0x4A8A28u;
label_4a8a28:
    // 0x4a8a28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a8a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8a2c:
    // 0x4a8a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a8a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8a30:
    // 0x4a8a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8a34:
    // 0x4a8a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a8a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8a38:
    // 0x4a8a38: 0x3e00008  jr          $ra
label_4a8a3c:
    if (ctx->pc == 0x4A8A3Cu) {
        ctx->pc = 0x4A8A3Cu;
            // 0x4a8a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A8A40u;
        goto label_fallthrough_0x4a8a38;
    }
    ctx->pc = 0x4A8A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8A38u;
            // 0x4a8a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4a8a38:
    ctx->pc = 0x4A8A40u;
}
