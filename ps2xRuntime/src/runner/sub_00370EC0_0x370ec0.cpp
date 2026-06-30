#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00370EC0
// Address: 0x370ec0 - 0x370f50
void sub_00370EC0_0x370ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370EC0_0x370ec0");
#endif

    switch (ctx->pc) {
        case 0x370ec0u: goto label_370ec0;
        case 0x370ec4u: goto label_370ec4;
        case 0x370ec8u: goto label_370ec8;
        case 0x370eccu: goto label_370ecc;
        case 0x370ed0u: goto label_370ed0;
        case 0x370ed4u: goto label_370ed4;
        case 0x370ed8u: goto label_370ed8;
        case 0x370edcu: goto label_370edc;
        case 0x370ee0u: goto label_370ee0;
        case 0x370ee4u: goto label_370ee4;
        case 0x370ee8u: goto label_370ee8;
        case 0x370eecu: goto label_370eec;
        case 0x370ef0u: goto label_370ef0;
        case 0x370ef4u: goto label_370ef4;
        case 0x370ef8u: goto label_370ef8;
        case 0x370efcu: goto label_370efc;
        case 0x370f00u: goto label_370f00;
        case 0x370f04u: goto label_370f04;
        case 0x370f08u: goto label_370f08;
        case 0x370f0cu: goto label_370f0c;
        case 0x370f10u: goto label_370f10;
        case 0x370f14u: goto label_370f14;
        case 0x370f18u: goto label_370f18;
        case 0x370f1cu: goto label_370f1c;
        case 0x370f20u: goto label_370f20;
        case 0x370f24u: goto label_370f24;
        case 0x370f28u: goto label_370f28;
        case 0x370f2cu: goto label_370f2c;
        case 0x370f30u: goto label_370f30;
        case 0x370f34u: goto label_370f34;
        case 0x370f38u: goto label_370f38;
        case 0x370f3cu: goto label_370f3c;
        case 0x370f40u: goto label_370f40;
        case 0x370f44u: goto label_370f44;
        case 0x370f48u: goto label_370f48;
        case 0x370f4cu: goto label_370f4c;
        default: break;
    }

    ctx->pc = 0x370ec0u;

label_370ec0:
    // 0x370ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_370ec4:
    // 0x370ec4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x370ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_370ec8:
    // 0x370ec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x370ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_370ecc:
    // 0x370ecc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x370eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_370ed0:
    // 0x370ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x370ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_370ed4:
    // 0x370ed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_370ed8:
    // 0x370ed8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x370ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370edc:
    // 0x370edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_370ee0:
    // 0x370ee0: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x370ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_370ee4:
    // 0x370ee4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x370ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_370ee8:
    // 0x370ee8: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x370ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_370eec:
    // 0x370eec: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x370eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_370ef0:
    // 0x370ef0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x370ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_370ef4:
    // 0x370ef4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x370ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_370ef8:
    // 0x370ef8: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x370ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_370efc:
    // 0x370efc: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x370efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_370f00:
    // 0x370f00: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x370f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_370f04:
    // 0x370f04: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x370f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_370f08:
    // 0x370f08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x370f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_370f0c:
    // 0x370f0c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x370f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_370f10:
    // 0x370f10: 0x320f809  jalr        $t9
label_370f14:
    if (ctx->pc == 0x370F14u) {
        ctx->pc = 0x370F14u;
            // 0x370f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370F18u;
        goto label_370f18;
    }
    ctx->pc = 0x370F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370F18u);
        ctx->pc = 0x370F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370F10u;
            // 0x370f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x370F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370F18u; }
            if (ctx->pc != 0x370F18u) { return; }
        }
        }
    }
    ctx->pc = 0x370F18u;
label_370f18:
    // 0x370f18: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x370f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_370f1c:
    // 0x370f1c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_370f20:
    if (ctx->pc == 0x370F20u) {
        ctx->pc = 0x370F20u;
            // 0x370f20: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x370F24u;
        goto label_370f24;
    }
    ctx->pc = 0x370F1Cu;
    {
        const bool branch_taken_0x370f1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x370F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370F1Cu;
            // 0x370f20: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f1c) {
            ctx->pc = 0x370F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370f08;
        }
    }
    ctx->pc = 0x370F24u;
label_370f24:
    // 0x370f24: 0x8e440bc0  lw          $a0, 0xBC0($s2)
    ctx->pc = 0x370f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3008)));
label_370f28:
    // 0x370f28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_370f2c:
    if (ctx->pc == 0x370F2Cu) {
        ctx->pc = 0x370F2Cu;
            // 0x370f2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x370F30u;
        goto label_370f30;
    }
    ctx->pc = 0x370F28u;
    {
        const bool branch_taken_0x370f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370f28) {
            ctx->pc = 0x370F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x370F28u;
            // 0x370f2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x370F3Cu;
            goto label_370f3c;
        }
    }
    ctx->pc = 0x370F30u;
label_370f30:
    // 0x370f30: 0xc122c94  jal         func_48B250
label_370f34:
    if (ctx->pc == 0x370F34u) {
        ctx->pc = 0x370F38u;
        goto label_370f38;
    }
    ctx->pc = 0x370F30u;
    SET_GPR_U32(ctx, 31, 0x370F38u);
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370F38u; }
        if (ctx->pc != 0x370F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370F38u; }
        if (ctx->pc != 0x370F38u) { return; }
    }
    ctx->pc = 0x370F38u;
label_370f38:
    // 0x370f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x370f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_370f3c:
    // 0x370f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x370f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_370f40:
    // 0x370f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_370f44:
    // 0x370f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_370f48:
    // 0x370f48: 0x3e00008  jr          $ra
label_370f4c:
    if (ctx->pc == 0x370F4Cu) {
        ctx->pc = 0x370F4Cu;
            // 0x370f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x370F50u;
        goto label_fallthrough_0x370f48;
    }
    ctx->pc = 0x370F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370F48u;
            // 0x370f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x370f48:
    ctx->pc = 0x370F50u;
}
