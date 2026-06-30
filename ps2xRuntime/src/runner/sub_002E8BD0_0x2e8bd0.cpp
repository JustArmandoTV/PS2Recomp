#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8BD0
// Address: 0x2e8bd0 - 0x2e8d90
void sub_002E8BD0_0x2e8bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8BD0_0x2e8bd0");
#endif

    switch (ctx->pc) {
        case 0x2e8c30u: goto label_2e8c30;
        case 0x2e8c48u: goto label_2e8c48;
        case 0x2e8cd4u: goto label_2e8cd4;
        case 0x2e8cecu: goto label_2e8cec;
        case 0x2e8d08u: goto label_2e8d08;
        case 0x2e8d28u: goto label_2e8d28;
        default: break;
    }

    ctx->pc = 0x2e8bd0u;

    // 0x2e8bd0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2e8bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e8bd4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e8bd8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e8bdc: 0xa48514a0  sh          $a1, 0x14A0($a0)
    ctx->pc = 0x2e8bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5280), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e8be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BE0u;
            // 0x2e8be4: 0xa46514a8  sh          $a1, 0x14A8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 5288), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8BE8u;
    // 0x2e8be8: 0x0  nop
    ctx->pc = 0x2e8be8u;
    // NOP
    // 0x2e8bec: 0x0  nop
    ctx->pc = 0x2e8becu;
    // NOP
    // 0x2e8bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8C04u;
    {
        const bool branch_taken_0x2e8c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C04u;
            // 0x2e8c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c04) {
            ctx->pc = 0x2E8C48u;
            goto label_2e8c48;
        }
    }
    ctx->pc = 0x2E8C0Cu;
    // 0x2e8c0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e8c10: 0x244230d0  addiu       $v0, $v0, 0x30D0
    ctx->pc = 0x2e8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12496));
    // 0x2e8c14: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8C14u;
    {
        const bool branch_taken_0x2e8c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C14u;
            // 0x2e8c18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c14) {
            ctx->pc = 0x2E8C30u;
            goto label_2e8c30;
        }
    }
    ctx->pc = 0x2E8C1Cu;
    // 0x2e8c1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e8c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c24: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x2e8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x2e8c28: 0xc075bf8  jal         func_1D6FE0
    ctx->pc = 0x2E8C28u;
    SET_GPR_U32(ctx, 31, 0x2E8C30u);
    ctx->pc = 0x2E8C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C28u;
            // 0x2e8c2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C30u; }
        if (ctx->pc != 0x2E8C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C30u; }
        if (ctx->pc != 0x2E8C30u) { return; }
    }
    ctx->pc = 0x2E8C30u;
label_2e8c30:
    // 0x2e8c30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2e8c34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e8c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e8c38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8C38u;
    {
        const bool branch_taken_0x2e8c38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e8c38) {
            ctx->pc = 0x2E8C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C38u;
            // 0x2e8c3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8C4Cu;
            goto label_2e8c4c;
        }
    }
    ctx->pc = 0x2E8C40u;
    // 0x2e8c40: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2E8C40u;
    SET_GPR_U32(ctx, 31, 0x2E8C48u);
    ctx->pc = 0x2E8C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C40u;
            // 0x2e8c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C48u; }
        if (ctx->pc != 0x2E8C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C48u; }
        if (ctx->pc != 0x2E8C48u) { return; }
    }
    ctx->pc = 0x2E8C48u;
label_2e8c48:
    // 0x2e8c48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e8c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c4c:
    // 0x2e8c4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C58u;
            // 0x2e8c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8C60u;
    // 0x2e8c60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e8c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e8c64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e8c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e8c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e8c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8c6c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e8c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e8c70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e8c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e8c74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e8c74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e8c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e8c7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e8c7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e8c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e8c84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e8c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e8c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e8c8c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e8c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8c94: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e8c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e8c9c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2e8c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ca0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2e8ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8ca4: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x2e8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2e8ca8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e8ca8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8cac: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x2e8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x2e8cb0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e8cb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8cb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e8cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cb8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2e8cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8cbc: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2e8cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8cc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8cc4: 0x4600a01d  msub.s      $f0, $f20, $f0
    ctx->pc = 0x2e8cc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x2e8cc8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2e8cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2e8ccc: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E8CCCu;
    SET_GPR_U32(ctx, 31, 0x2E8CD4u);
    ctx->pc = 0x2E8CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CCCu;
            // 0x2e8cd0: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CD4u; }
        if (ctx->pc != 0x2E8CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CD4u; }
        if (ctx->pc != 0x2E8CD4u) { return; }
    }
    ctx->pc = 0x2E8CD4u;
label_2e8cd4:
    // 0x2e8cd4: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E8CD4u;
    {
        const bool branch_taken_0x2e8cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cd4) {
            ctx->pc = 0x2E8CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CD4u;
            // 0x2e8cd8: 0x8ea200f4  lw          $v0, 0xF4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D10u;
            goto label_2e8d10;
        }
    }
    ctx->pc = 0x2E8CDCu;
    // 0x2e8cdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e8cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ce0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e8ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ce4: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E8CE4u;
    SET_GPR_U32(ctx, 31, 0x2E8CECu);
    ctx->pc = 0x2E8CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CE4u;
            // 0x2e8ce8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CECu; }
        if (ctx->pc != 0x2E8CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CECu; }
        if (ctx->pc != 0x2E8CECu) { return; }
    }
    ctx->pc = 0x2E8CECu;
label_2e8cec:
    // 0x2e8cec: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x2e8cf0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2e8cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e8cf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e8cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e8cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cfc: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2e8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8d00: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E8D00u;
    SET_GPR_U32(ctx, 31, 0x2E8D08u);
    ctx->pc = 0x2E8D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D00u;
            // 0x2e8d04: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D08u; }
        if (ctx->pc != 0x2E8D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D08u; }
        if (ctx->pc != 0x2E8D08u) { return; }
    }
    ctx->pc = 0x2E8D08u;
label_2e8d08:
    // 0x2e8d08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8D08u;
    {
        const bool branch_taken_0x2e8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D08u;
            // 0x2e8d0c: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d08) {
            ctx->pc = 0x2E8D2Cu;
            goto label_2e8d2c;
        }
    }
    ctx->pc = 0x2E8D10u;
label_2e8d10:
    // 0x2e8d10: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2e8d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e8d14: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e8d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d1c: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2e8d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8d20: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E8D20u;
    SET_GPR_U32(ctx, 31, 0x2E8D28u);
    ctx->pc = 0x2E8D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D20u;
            // 0x2e8d24: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D28u; }
        if (ctx->pc != 0x2E8D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8D28u; }
        if (ctx->pc != 0x2E8D28u) { return; }
    }
    ctx->pc = 0x2E8D28u;
label_2e8d28:
    // 0x2e8d28: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2e8d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8d2c:
    // 0x2e8d2c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2e8d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2e8d30: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2e8d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8d34: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2e8d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2e8d38: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2e8d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8d3c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2e8d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2e8d40: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x2e8d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8d44: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2e8d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2e8d48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e8d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8d4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8d50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e8d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8d54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e8d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8d58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e8d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8d5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e8d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8d60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8d64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D68u;
            // 0x2e8d6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8D70u;
    // 0x2e8d70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e8d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e8d74: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e8d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e8d78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8d7c: 0x804cbd8  j           func_132F60
    ctx->pc = 0x2E8D7Cu;
    ctx->pc = 0x2E8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8D7Cu;
            // 0x2e8d80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00132F60_0x132f60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2E8D84u;
    // 0x2e8d84: 0x0  nop
    ctx->pc = 0x2e8d84u;
    // NOP
    // 0x2e8d88: 0x0  nop
    ctx->pc = 0x2e8d88u;
    // NOP
    // 0x2e8d8c: 0x0  nop
    ctx->pc = 0x2e8d8cu;
    // NOP
}
