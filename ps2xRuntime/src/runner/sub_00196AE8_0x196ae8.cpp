#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196AE8
// Address: 0x196ae8 - 0x196b90
void sub_00196AE8_0x196ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196AE8_0x196ae8");
#endif

    switch (ctx->pc) {
        case 0x196b58u: goto label_196b58;
        case 0x196b70u: goto label_196b70;
        default: break;
    }

    ctx->pc = 0x196ae8u;

    // 0x196ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196af0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x196af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196af8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x196AF8u;
    {
        const bool branch_taken_0x196af8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x196AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196AF8u;
            // 0x196afc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196af8) {
            ctx->pc = 0x196B20u;
            goto label_196b20;
        }
    }
    ctx->pc = 0x196B00u;
    // 0x196b00: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x196b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x196b04: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x196b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x196b08: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x196b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196b0c: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x196b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196b10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196b14: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x196b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x196b18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x196B18u;
    {
        const bool branch_taken_0x196b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B18u;
            // 0x196b1c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b18) {
            ctx->pc = 0x196B7Cu;
            goto label_196b7c;
        }
    }
    ctx->pc = 0x196B20u;
label_196b20:
    // 0x196b20: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196B20u;
    {
        const bool branch_taken_0x196b20 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x196B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B20u;
            // 0x196b24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b20) {
            ctx->pc = 0x196B30u;
            goto label_196b30;
        }
    }
    ctx->pc = 0x196B28u;
    // 0x196b28: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196b2c: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x196b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_196b30:
    // 0x196b30: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196B30u;
    {
        const bool branch_taken_0x196b30 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x196b30) {
            ctx->pc = 0x196B40u;
            goto label_196b40;
        }
    }
    ctx->pc = 0x196B38u;
    // 0x196b38: 0x118823  negu        $s1, $s1
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x196b3c: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_196b40:
    // 0x196b40: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196B40u;
    {
        const bool branch_taken_0x196b40 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x196b40) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196B48u;
    // 0x196b48: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x196b48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x196b4c: 0x118823  negu        $s1, $s1
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_196b50:
    // 0x196b50: 0xc048ce6  jal         func_123398
    ctx->pc = 0x196B50u;
    SET_GPR_U32(ctx, 31, 0x196B58u);
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B58u; }
        if (ctx->pc != 0x196B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B58u; }
        if (ctx->pc != 0x196B58u) { return; }
    }
    ctx->pc = 0x196B58u;
label_196b58:
    // 0x196b58: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x196b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
    // 0x196b5c: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x196b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x196b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b64: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x196b64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x196b68: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x196B68u;
    SET_GPR_U32(ctx, 31, 0x196B70u);
    ctx->pc = 0x196B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B68u;
            // 0x196b6c: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B70u; }
        if (ctx->pc != 0x196B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B70u; }
        if (ctx->pc != 0x196B70u) { return; }
    }
    ctx->pc = 0x196B70u;
label_196b70:
    // 0x196b70: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x196b70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196b74: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x196b78: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x196b78u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_196b7c:
    // 0x196b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196b88: 0x3e00008  jr          $ra
    ctx->pc = 0x196B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B88u;
            // 0x196b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196B90u;
}
