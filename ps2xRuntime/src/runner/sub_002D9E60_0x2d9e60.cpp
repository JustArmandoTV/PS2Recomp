#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9E60
// Address: 0x2d9e60 - 0x2da0c0
void sub_002D9E60_0x2d9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9E60_0x2d9e60");
#endif

    switch (ctx->pc) {
        case 0x2d9e84u: goto label_2d9e84;
        case 0x2d9e94u: goto label_2d9e94;
        case 0x2d9ea4u: goto label_2d9ea4;
        case 0x2d9ed4u: goto label_2d9ed4;
        case 0x2d9f0cu: goto label_2d9f0c;
        case 0x2d9f28u: goto label_2d9f28;
        case 0x2d9f50u: goto label_2d9f50;
        case 0x2d9fecu: goto label_2d9fec;
        default: break;
    }

    ctx->pc = 0x2d9e60u;

    // 0x2d9e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9e6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d9e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d9e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9e7c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2D9E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D9E84u);
    ctx->pc = 0x2D9E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E7Cu;
            // 0x2d9e80: 0x26240290  addiu       $a0, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E84u; }
        if (ctx->pc != 0x2D9E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E84u; }
        if (ctx->pc != 0x2D9E84u) { return; }
    }
    ctx->pc = 0x2D9E84u;
label_2d9e84:
    // 0x2d9e84: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x2d9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x2d9e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e8c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2D9E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9E94u);
    ctx->pc = 0x2D9E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E8Cu;
            // 0x2d9e90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E94u; }
        if (ctx->pc != 0x2D9E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E94u; }
        if (ctx->pc != 0x2D9E94u) { return; }
    }
    ctx->pc = 0x2D9E94u;
label_2d9e94:
    // 0x2d9e94: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x2d9e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x2d9e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e9c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2D9E9Cu;
    SET_GPR_U32(ctx, 31, 0x2D9EA4u);
    ctx->pc = 0x2D9EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E9Cu;
            // 0x2d9ea0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EA4u; }
        if (ctx->pc != 0x2D9EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EA4u; }
        if (ctx->pc != 0x2D9EA4u) { return; }
    }
    ctx->pc = 0x2D9EA4u;
label_2d9ea4:
    // 0x2d9ea4: 0xae2002bc  sw          $zero, 0x2BC($s1)
    ctx->pc = 0x2d9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
    // 0x2d9ea8: 0x922302c4  lbu         $v1, 0x2C4($s1)
    ctx->pc = 0x2d9ea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x2d9eac: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D9EACu;
    {
        const bool branch_taken_0x2d9eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9eac) {
            ctx->pc = 0x2D9EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EACu;
            // 0x2d9eb0: 0xae2001c4  sw          $zero, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9F54u;
            goto label_2d9f54;
        }
    }
    ctx->pc = 0x2D9EB4u;
    // 0x2d9eb4: 0xae2002bc  sw          $zero, 0x2BC($s1)
    ctx->pc = 0x2d9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
    // 0x2d9eb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d9ebc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2d9ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d9ec0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x2d9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x2d9ec4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2d9ec8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9ecc: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2D9ECCu;
    SET_GPR_U32(ctx, 31, 0x2D9ED4u);
    ctx->pc = 0x2D9ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9ECCu;
            // 0x2d9ed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ED4u; }
        if (ctx->pc != 0x2D9ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ED4u; }
        if (ctx->pc != 0x2D9ED4u) { return; }
    }
    ctx->pc = 0x2D9ED4u;
label_2d9ed4:
    // 0x2d9ed4: 0xa22002c4  sb          $zero, 0x2C4($s1)
    ctx->pc = 0x2d9ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 708), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9ed8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9edc: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x2d9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x2d9ee0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2d9ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2d9ee4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D9EE4u;
    {
        const bool branch_taken_0x2d9ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ee4) {
            ctx->pc = 0x2D9EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EE4u;
            // 0x2d9ee8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9F2Cu;
            goto label_2d9f2c;
        }
    }
    ctx->pc = 0x2D9EECu;
    // 0x2d9eec: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d9eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d9ef0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2d9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2d9ef4: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x2d9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x2d9ef8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d9ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d9efc: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2d9efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2d9f00: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2d9f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d9f04: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2D9F04u;
    SET_GPR_U32(ctx, 31, 0x2D9F0Cu);
    ctx->pc = 0x2D9F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F04u;
            // 0x2d9f08: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F0Cu; }
        if (ctx->pc != 0x2D9F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F0Cu; }
        if (ctx->pc != 0x2D9F0Cu) { return; }
    }
    ctx->pc = 0x2D9F0Cu;
label_2d9f0c:
    // 0x2d9f0c: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x2d9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
    // 0x2d9f10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d9f14: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d9f18: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2d9f1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9f20: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2D9F20u;
    SET_GPR_U32(ctx, 31, 0x2D9F28u);
    ctx->pc = 0x2D9F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F20u;
            // 0x2d9f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F28u; }
        if (ctx->pc != 0x2D9F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F28u; }
        if (ctx->pc != 0x2D9F28u) { return; }
    }
    ctx->pc = 0x2D9F28u;
label_2d9f28:
    // 0x2d9f28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9f2c:
    // 0x2d9f2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d9f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9f34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d9f34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9f38: 0x8c420d70  lw          $v0, 0xD70($v0)
    ctx->pc = 0x2d9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x2d9f3c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2d9f3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9f40: 0xa04300dd  sb          $v1, 0xDD($v0)
    ctx->pc = 0x2d9f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9f44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9f48: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2D9F48u;
    SET_GPR_U32(ctx, 31, 0x2D9F50u);
    ctx->pc = 0x2D9F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F48u;
            // 0x2d9f4c: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F50u; }
        if (ctx->pc != 0x2D9F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F50u; }
        if (ctx->pc != 0x2D9F50u) { return; }
    }
    ctx->pc = 0x2D9F50u;
label_2d9f50:
    // 0x2d9f50: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x2d9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
label_2d9f54:
    // 0x2d9f54: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x2d9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x2d9f58: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x2d9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
    // 0x2d9f5c: 0x3466ffee  ori         $a2, $v1, 0xFFEE
    ctx->pc = 0x2d9f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
    // 0x2d9f60: 0xae2001dc  sw          $zero, 0x1DC($s1)
    ctx->pc = 0x2d9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
    // 0x2d9f64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9f68: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x2d9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
    // 0x2d9f6c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d9f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9f70: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x2d9f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
    // 0x2d9f74: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2d9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2d9f78: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x2d9f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x2d9f7c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x2d9f7cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d9f80: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x2d9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x2d9f84: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x2d9f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x2d9f88: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x2d9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
    // 0x2d9f8c: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x2d9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x2d9f90: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x2d9f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
    // 0x2d9f94: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x2d9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x2d9f98: 0xae20025c  sw          $zero, 0x25C($s1)
    ctx->pc = 0x2d9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x2d9f9c: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x2d9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x2d9fa0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2d9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x2d9fa4: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x2d9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x2d9fa8: 0xae2502b0  sw          $a1, 0x2B0($s1)
    ctx->pc = 0x2d9fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 5));
    // 0x2d9fac: 0xa22002c5  sb          $zero, 0x2C5($s1)
    ctx->pc = 0x2d9facu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 709), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9fb0: 0xae2402c8  sw          $a0, 0x2C8($s1)
    ctx->pc = 0x2d9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 4));
    // 0x2d9fb4: 0xae2002c0  sw          $zero, 0x2C0($s1)
    ctx->pc = 0x2d9fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 0));
    // 0x2d9fb8: 0xae2302b4  sw          $v1, 0x2B4($s1)
    ctx->pc = 0x2d9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 3));
    // 0x2d9fbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9fc0: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x2d9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x2d9fc4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9FC4u;
    {
        const bool branch_taken_0x2d9fc4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2D9FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FC4u;
            // 0x2d9fc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fc4) {
            ctx->pc = 0x2D9FDCu;
            goto label_2d9fdc;
        }
    }
    ctx->pc = 0x2D9FCCu;
    // 0x2d9fcc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2d9fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d9fd0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9FD0u;
    {
        const bool branch_taken_0x2d9fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9fd0) {
            ctx->pc = 0x2D9FDCu;
            goto label_2d9fdc;
        }
    }
    ctx->pc = 0x2D9FD8u;
    // 0x2d9fd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d9fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fdc:
    // 0x2d9fdc: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9FDCu;
    {
        const bool branch_taken_0x2d9fdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9fdc) {
            ctx->pc = 0x2D9FF8u;
            goto label_2d9ff8;
        }
    }
    ctx->pc = 0x2D9FE4u;
    // 0x2d9fe4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2D9FE4u;
    SET_GPR_U32(ctx, 31, 0x2D9FECu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FECu; }
        if (ctx->pc != 0x2D9FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FECu; }
        if (ctx->pc != 0x2D9FECu) { return; }
    }
    ctx->pc = 0x2D9FECu;
label_2d9fec:
    // 0x2d9fec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9FECu;
    {
        const bool branch_taken_0x2d9fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9fec) {
            ctx->pc = 0x2D9FF8u;
            goto label_2d9ff8;
        }
    }
    ctx->pc = 0x2D9FF4u;
    // 0x2d9ff4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ff8:
    // 0x2d9ff8: 0x56000025  bnel        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D9FF8u;
    {
        const bool branch_taken_0x2d9ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ff8) {
            ctx->pc = 0x2D9FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FF8u;
            // 0x2d9ffc: 0xae2002cc  sw          $zero, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA090u;
            goto label_2da090;
        }
    }
    ctx->pc = 0x2DA000u;
    // 0x2da000: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2da000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2da004: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2da004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2da008: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2da008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2da00c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2da00cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da010: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2da010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da014: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da018: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA018u;
    {
        const bool branch_taken_0x2da018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da018) {
            ctx->pc = 0x2DA038u;
            goto label_2da038;
        }
    }
    ctx->pc = 0x2DA020u;
    // 0x2da020: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2da020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2da024: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2da024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2da028: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x2da028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x2da02c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x2da02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2da030: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA030u;
    {
        const bool branch_taken_0x2da030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2da030) {
            ctx->pc = 0x2DA034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA030u;
            // 0x2da034: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2DA038u;
label_2da038:
    // 0x2da038: 0xae2002cc  sw          $zero, 0x2CC($s1)
    ctx->pc = 0x2da038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 0));
    // 0x2da03c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DA03Cu;
    {
        const bool branch_taken_0x2da03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da03c) {
            ctx->pc = 0x2DA090u;
            goto label_2da090;
        }
    }
    ctx->pc = 0x2DA044u;
label_2da044:
    // 0x2da044: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2da044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2da048: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2da048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2da04c: 0x8c850d98  lw          $a1, 0xD98($a0)
    ctx->pc = 0x2da04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3480)));
    // 0x2da050: 0x8c640780  lw          $a0, 0x780($v1)
    ctx->pc = 0x2da050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x2da054: 0x8c630784  lw          $v1, 0x784($v1)
    ctx->pc = 0x2da054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1924)));
    // 0x2da058: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2da058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2da05c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2da05cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2da060: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2da064: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA064u;
    {
        const bool branch_taken_0x2da064 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2DA068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA064u;
            // 0x2da068: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da064) {
            ctx->pc = 0x2DA074u;
            goto label_2da074;
        }
    }
    ctx->pc = 0x2DA06Cu;
    // 0x2da06c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2da06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2da070: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2da070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2da074:
    // 0x2da074: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2da074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2da078: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA078u;
    {
        const bool branch_taken_0x2da078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da078) {
            ctx->pc = 0x2DA07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA078u;
            // 0x2da07c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA08Cu;
            goto label_2da08c;
        }
    }
    ctx->pc = 0x2DA080u;
    // 0x2da080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da084: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA084u;
    {
        const bool branch_taken_0x2da084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA084u;
            // 0x2da088: 0xae2302cc  sw          $v1, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da084) {
            ctx->pc = 0x2DA090u;
            goto label_2da090;
        }
    }
    ctx->pc = 0x2DA08Cu;
label_2da08c:
    // 0x2da08c: 0xae2302cc  sw          $v1, 0x2CC($s1)
    ctx->pc = 0x2da08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 3));
label_2da090:
    // 0x2da090: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x2da090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
    // 0x2da094: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x2da094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
    // 0x2da098: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x2da098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
    // 0x2da09c: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x2da09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x2da0a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2da0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA0ACu;
            // 0x2da0b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA0B4u;
    // 0x2da0b4: 0x0  nop
    ctx->pc = 0x2da0b4u;
    // NOP
    // 0x2da0b8: 0x0  nop
    ctx->pc = 0x2da0b8u;
    // NOP
    // 0x2da0bc: 0x0  nop
    ctx->pc = 0x2da0bcu;
    // NOP
}
