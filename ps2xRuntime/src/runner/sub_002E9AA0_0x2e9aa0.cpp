#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9AA0
// Address: 0x2e9aa0 - 0x2ea4e0
void sub_002E9AA0_0x2e9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9AA0_0x2e9aa0");
#endif

    switch (ctx->pc) {
        case 0x2e9b70u: goto label_2e9b70;
        case 0x2e9c48u: goto label_2e9c48;
        case 0x2e9d20u: goto label_2e9d20;
        case 0x2e9d64u: goto label_2e9d64;
        case 0x2e9e38u: goto label_2e9e38;
        case 0x2e9ef8u: goto label_2e9ef8;
        case 0x2e9fecu: goto label_2e9fec;
        case 0x2ea010u: goto label_2ea010;
        case 0x2ea054u: goto label_2ea054;
        case 0x2ea12cu: goto label_2ea12c;
        case 0x2ea1f0u: goto label_2ea1f0;
        case 0x2ea2e0u: goto label_2ea2e0;
        case 0x2ea30cu: goto label_2ea30c;
        case 0x2ea350u: goto label_2ea350;
        case 0x2ea424u: goto label_2ea424;
        default: break;
    }

    ctx->pc = 0x2e9aa0u;

    // 0x2e9aa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e9aa4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2e9aa8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e9aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e9aac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e9aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e9ab0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e9ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e9ab4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e9ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e9ab8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e9ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e9abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e9ac0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e9ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e9ac8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e9ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9ad0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e9ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9ad8: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x2e9ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2e9adc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9ae0: 0x8224007a  lb          $a0, 0x7A($s1)
    ctx->pc = 0x2e9ae0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2e9ae4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x2e9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2e9ae8: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x2e9ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x2e9aec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e9af0: 0x106201b3  beq         $v1, $v0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x2E9AF0u;
    {
        const bool branch_taken_0x2e9af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9AF0u;
            // 0x2e9af4: 0x2490ffff  addiu       $s0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9af0) {
            ctx->pc = 0x2EA1C0u;
            goto label_2ea1c0;
        }
    }
    ctx->pc = 0x2E9AF8u;
    // 0x2e9af8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e9afc: 0x1062017a  beq         $v1, $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x2E9AFCu;
    {
        const bool branch_taken_0x2e9afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9afc) {
            ctx->pc = 0x2EA0E8u;
            goto label_2ea0e8;
        }
    }
    ctx->pc = 0x2E9B04u;
    // 0x2e9b04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9b08: 0x506200f0  beql        $v1, $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x2E9B08u;
    {
        const bool branch_taken_0x2e9b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9b08) {
            ctx->pc = 0x2E9B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B08u;
            // 0x2e9b0c: 0x8ea20e34  lw          $v0, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9ECCu;
            goto label_2e9ecc;
        }
    }
    ctx->pc = 0x2E9B10u;
    // 0x2e9b10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9b14: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E9B14u;
    {
        const bool branch_taken_0x2e9b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9b14) {
            ctx->pc = 0x2E9B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B14u;
            // 0x2e9b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9C04u;
            goto label_2e9c04;
        }
    }
    ctx->pc = 0x2E9B1Cu;
    // 0x2e9b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9b20: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9B20u;
    {
        const bool branch_taken_0x2e9b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9b20) {
            ctx->pc = 0x2E9B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B20u;
            // 0x2e9b24: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B30u;
            goto label_2e9b30;
        }
    }
    ctx->pc = 0x2E9B28u;
    // 0x2e9b28: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x2E9B28u;
    {
        const bool branch_taken_0x2e9b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B28u;
            // 0x2e9b2c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b28) {
            ctx->pc = 0x2EA3E4u;
            goto label_2ea3e4;
        }
    }
    ctx->pc = 0x2E9B30u;
label_2e9b30:
    // 0x2e9b30: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e9b34: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2e9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2e9b38: 0x24421ec0  addiu       $v0, $v0, 0x1EC0
    ctx->pc = 0x2e9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7872));
    // 0x2e9b3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2e9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9b40: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2e9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9b44: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e9b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9b48: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9B48u;
    {
        const bool branch_taken_0x2e9b48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B48u;
            // 0x2e9b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b48) {
            ctx->pc = 0x2E9B60u;
            goto label_2e9b60;
        }
    }
    ctx->pc = 0x2E9B50u;
    // 0x2e9b50: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9b54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9B54u;
    {
        const bool branch_taken_0x2e9b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b54) {
            ctx->pc = 0x2E9B60u;
            goto label_2e9b60;
        }
    }
    ctx->pc = 0x2E9B5Cu;
    // 0x2e9b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9b60:
    // 0x2e9b60: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9B60u;
    {
        const bool branch_taken_0x2e9b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b60) {
            ctx->pc = 0x2E9B7Cu;
            goto label_2e9b7c;
        }
    }
    ctx->pc = 0x2E9B68u;
    // 0x2e9b68: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9B68u;
    SET_GPR_U32(ctx, 31, 0x2E9B70u);
    ctx->pc = 0x2E9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B68u;
            // 0x2e9b6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B70u; }
        if (ctx->pc != 0x2E9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B70u; }
        if (ctx->pc != 0x2E9B70u) { return; }
    }
    ctx->pc = 0x2E9B70u;
label_2e9b70:
    // 0x2e9b70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9B70u;
    {
        const bool branch_taken_0x2e9b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b70) {
            ctx->pc = 0x2E9B7Cu;
            goto label_2e9b7c;
        }
    }
    ctx->pc = 0x2E9B78u;
    // 0x2e9b78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9b7c:
    // 0x2e9b7c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9B7Cu;
    {
        const bool branch_taken_0x2e9b7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b7c) {
            ctx->pc = 0x2E9B94u;
            goto label_2e9b94;
        }
    }
    ctx->pc = 0x2E9B84u;
    // 0x2e9b84: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2e9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9b88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9b8c: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E9B8Cu;
    {
        const bool branch_taken_0x2e9b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9b8c) {
            ctx->pc = 0x2E9B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B8Cu;
            // 0x2e9b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9BFCu;
            goto label_2e9bfc;
        }
    }
    ctx->pc = 0x2E9B94u;
label_2e9b94:
    // 0x2e9b94: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E9B94u;
    {
        const bool branch_taken_0x2e9b94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b94) {
            ctx->pc = 0x2E9BF8u;
            goto label_2e9bf8;
        }
    }
    ctx->pc = 0x2E9B9Cu;
    // 0x2e9b9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2e9ba0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2e9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2e9ba4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2e9ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9ba8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e9ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9bac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2e9bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9bb0: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9BB0u;
    {
        const bool branch_taken_0x2e9bb0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E9BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BB0u;
            // 0x2e9bb4: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bb0) {
            ctx->pc = 0x2E9BC4u;
            goto label_2e9bc4;
        }
    }
    ctx->pc = 0x2E9BB8u;
    // 0x2e9bb8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e9bb8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9bbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9BBCu;
    {
        const bool branch_taken_0x2e9bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BBCu;
            // 0x2e9bc0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bbc) {
            ctx->pc = 0x2E9BE0u;
            goto label_2e9be0;
        }
    }
    ctx->pc = 0x2E9BC4u;
label_2e9bc4:
    // 0x2e9bc4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2e9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2e9bc8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2e9bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2e9bcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9bd4: 0x0  nop
    ctx->pc = 0x2e9bd4u;
    // NOP
    // 0x2e9bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9bdc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9be0:
    // 0x2e9be0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e9be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9be4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9BE4u;
    {
        const bool branch_taken_0x2e9be4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9be4) {
            ctx->pc = 0x2E9BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BE4u;
            // 0x2e9be8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9BFCu;
            goto label_2e9bfc;
        }
    }
    ctx->pc = 0x2E9BECu;
    // 0x2e9bec: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e9becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2e9bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9BF0u;
    {
        const bool branch_taken_0x2e9bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BF0u;
            // 0x2e9bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bf0) {
            ctx->pc = 0x2E9BFCu;
            goto label_2e9bfc;
        }
    }
    ctx->pc = 0x2E9BF8u;
label_2e9bf8:
    // 0x2e9bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9bfc:
    // 0x2e9bfc: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x2E9BFCu;
    {
        const bool branch_taken_0x2e9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BFCu;
            // 0x2e9c00: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bfc) {
            ctx->pc = 0x2EA4B4u;
            goto label_2ea4b4;
        }
    }
    ctx->pc = 0x2E9C04u;
label_2e9c04:
    // 0x2e9c04: 0x5242007c  beql        $s2, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2E9C04u;
    {
        const bool branch_taken_0x2e9c04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9c04) {
            ctx->pc = 0x2E9C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C04u;
            // 0x2e9c08: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9DF8u;
            goto label_2e9df8;
        }
    }
    ctx->pc = 0x2E9C0Cu;
    // 0x2e9c0c: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9C0Cu;
    {
        const bool branch_taken_0x2e9c0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c0c) {
            ctx->pc = 0x2E9C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C0Cu;
            // 0x2e9c10: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9C1Cu;
            goto label_2e9c1c;
        }
    }
    ctx->pc = 0x2E9C14u;
    // 0x2e9c14: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x2E9C14u;
    {
        const bool branch_taken_0x2e9c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c14) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2E9C1Cu;
label_2e9c1c:
    // 0x2e9c1c: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2e9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9c20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9C20u;
    {
        const bool branch_taken_0x2e9c20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C20u;
            // 0x2e9c24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c20) {
            ctx->pc = 0x2E9C38u;
            goto label_2e9c38;
        }
    }
    ctx->pc = 0x2E9C28u;
    // 0x2e9c28: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9c2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9C2Cu;
    {
        const bool branch_taken_0x2e9c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c2c) {
            ctx->pc = 0x2E9C38u;
            goto label_2e9c38;
        }
    }
    ctx->pc = 0x2E9C34u;
    // 0x2e9c34: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2e9c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c38:
    // 0x2e9c38: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9C38u;
    {
        const bool branch_taken_0x2e9c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c38) {
            ctx->pc = 0x2E9C54u;
            goto label_2e9c54;
        }
    }
    ctx->pc = 0x2E9C40u;
    // 0x2e9c40: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9C40u;
    SET_GPR_U32(ctx, 31, 0x2E9C48u);
    ctx->pc = 0x2E9C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C40u;
            // 0x2e9c44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C48u; }
        if (ctx->pc != 0x2E9C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C48u; }
        if (ctx->pc != 0x2E9C48u) { return; }
    }
    ctx->pc = 0x2E9C48u;
label_2e9c48:
    // 0x2e9c48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9C48u;
    {
        const bool branch_taken_0x2e9c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c48) {
            ctx->pc = 0x2E9C54u;
            goto label_2e9c54;
        }
    }
    ctx->pc = 0x2E9C50u;
    // 0x2e9c50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e9c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c54:
    // 0x2e9c54: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9C54u;
    {
        const bool branch_taken_0x2e9c54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c54) {
            ctx->pc = 0x2E9C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C54u;
            // 0x2e9c58: 0x92820000  lbu         $v0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9C70u;
            goto label_2e9c70;
        }
    }
    ctx->pc = 0x2E9C5Cu;
    // 0x2e9c5c: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2e9c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9c60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9c64: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E9C64u;
    {
        const bool branch_taken_0x2e9c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9c64) {
            ctx->pc = 0x2E9D20u;
            goto label_2e9d20;
        }
    }
    ctx->pc = 0x2E9C6Cu;
    // 0x2e9c6c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e9c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_2e9c70:
    // 0x2e9c70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9C70u;
    {
        const bool branch_taken_0x2e9c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C70u;
            // 0x2e9c74: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c70) {
            ctx->pc = 0x2E9C84u;
            goto label_2e9c84;
        }
    }
    ctx->pc = 0x2E9C78u;
    // 0x2e9c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9c7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9C7Cu;
    {
        const bool branch_taken_0x2e9c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C7Cu;
            // 0x2e9c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c7c) {
            ctx->pc = 0x2E9CA0u;
            goto label_2e9ca0;
        }
    }
    ctx->pc = 0x2E9C84u;
label_2e9c84:
    // 0x2e9c84: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e9c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9c8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9c94: 0x0  nop
    ctx->pc = 0x2e9c94u;
    // NOP
    // 0x2e9c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9c9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9ca0:
    // 0x2e9ca0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2e9ca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9ca4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e9ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cac: 0x0  nop
    ctx->pc = 0x2e9cacu;
    // NOP
    // 0x2e9cb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e9cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9cb4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9CB4u;
    {
        const bool branch_taken_0x2e9cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9cb4) {
            ctx->pc = 0x2E9CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CB4u;
            // 0x2e9cb8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9CCCu;
            goto label_2e9ccc;
        }
    }
    ctx->pc = 0x2E9CBCu;
    // 0x2e9cbc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9cbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e9cc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e9cc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e9cc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9CC4u;
    {
        const bool branch_taken_0x2e9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CC4u;
            // 0x2e9cc8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9cc4) {
            ctx->pc = 0x2E9CE4u;
            goto label_2e9ce4;
        }
    }
    ctx->pc = 0x2E9CCCu;
label_2e9ccc:
    // 0x2e9ccc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e9cd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9cd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e9cd4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e9cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e9cd8: 0x0  nop
    ctx->pc = 0x2e9cd8u;
    // NOP
    // 0x2e9cdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9ce0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e9ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e9ce4:
    // 0x2e9ce4: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2e9ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9ce8: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e9ce8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e9cec: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x2e9cecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e9cf0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2E9CF0u;
    {
        const bool branch_taken_0x2e9cf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9cf0) {
            ctx->pc = 0x2E9D20u;
            goto label_2e9d20;
        }
    }
    ctx->pc = 0x2E9CF8u;
    // 0x2e9cf8: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x2e9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9cfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9d00: 0x92a411aa  lbu         $a0, 0x11AA($s5)
    ctx->pc = 0x2e9d00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
    // 0x2e9d04: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2e9d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e9d08: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9d08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9d0c: 0x26a60890  addiu       $a2, $s5, 0x890
    ctx->pc = 0x2e9d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
    // 0x2e9d10: 0x26a702c0  addiu       $a3, $s5, 0x2C0
    ctx->pc = 0x2e9d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
    // 0x2e9d14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d18: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9D18u;
    SET_GPR_U32(ctx, 31, 0x2E9D20u);
    ctx->pc = 0x2E9D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D18u;
            // 0x2e9d1c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D20u; }
        if (ctx->pc != 0x2E9D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D20u; }
        if (ctx->pc != 0x2E9D20u) { return; }
    }
    ctx->pc = 0x2E9D20u;
label_2e9d20:
    // 0x2e9d20: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2e9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2e9d24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e9d28: 0x24421ed0  addiu       $v0, $v0, 0x1ED0
    ctx->pc = 0x2e9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7888));
    // 0x2e9d2c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2e9d2cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e9d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9d34: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e9d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9d38: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2e9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9d3c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9D3Cu;
    {
        const bool branch_taken_0x2e9d3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D3Cu;
            // 0x2e9d40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d3c) {
            ctx->pc = 0x2E9D54u;
            goto label_2e9d54;
        }
    }
    ctx->pc = 0x2E9D44u;
    // 0x2e9d44: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9d44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9d48: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9D48u;
    {
        const bool branch_taken_0x2e9d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d48) {
            ctx->pc = 0x2E9D54u;
            goto label_2e9d54;
        }
    }
    ctx->pc = 0x2E9D50u;
    // 0x2e9d50: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2e9d50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9d54:
    // 0x2e9d54: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9D54u;
    {
        const bool branch_taken_0x2e9d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d54) {
            ctx->pc = 0x2E9D70u;
            goto label_2e9d70;
        }
    }
    ctx->pc = 0x2E9D5Cu;
    // 0x2e9d5c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D64u);
    ctx->pc = 0x2E9D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D5Cu;
            // 0x2e9d60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D64u; }
        if (ctx->pc != 0x2E9D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9D64u; }
        if (ctx->pc != 0x2E9D64u) { return; }
    }
    ctx->pc = 0x2E9D64u;
label_2e9d64:
    // 0x2e9d64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9D64u;
    {
        const bool branch_taken_0x2e9d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d64) {
            ctx->pc = 0x2E9D70u;
            goto label_2e9d70;
        }
    }
    ctx->pc = 0x2E9D6Cu;
    // 0x2e9d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9d70:
    // 0x2e9d70: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9D70u;
    {
        const bool branch_taken_0x2e9d70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d70) {
            ctx->pc = 0x2E9D88u;
            goto label_2e9d88;
        }
    }
    ctx->pc = 0x2E9D78u;
    // 0x2e9d78: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2e9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9d7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9d80: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E9D80u;
    {
        const bool branch_taken_0x2e9d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9d80) {
            ctx->pc = 0x2E9D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D80u;
            // 0x2e9d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9DF0u;
            goto label_2e9df0;
        }
    }
    ctx->pc = 0x2E9D88u;
label_2e9d88:
    // 0x2e9d88: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E9D88u;
    {
        const bool branch_taken_0x2e9d88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d88) {
            ctx->pc = 0x2E9DECu;
            goto label_2e9dec;
        }
    }
    ctx->pc = 0x2E9D90u;
    // 0x2e9d90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2e9d94: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2e9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2e9d98: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2e9d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d9c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e9d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9da0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2e9da0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9da4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9DA4u;
    {
        const bool branch_taken_0x2e9da4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E9DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DA4u;
            // 0x2e9da8: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9da4) {
            ctx->pc = 0x2E9DB8u;
            goto label_2e9db8;
        }
    }
    ctx->pc = 0x2E9DACu;
    // 0x2e9dac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e9dacu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9DB0u;
    {
        const bool branch_taken_0x2e9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DB0u;
            // 0x2e9db4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9db0) {
            ctx->pc = 0x2E9DD4u;
            goto label_2e9dd4;
        }
    }
    ctx->pc = 0x2E9DB8u;
label_2e9db8:
    // 0x2e9db8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2e9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2e9dbc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2e9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2e9dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dc8: 0x0  nop
    ctx->pc = 0x2e9dc8u;
    // NOP
    // 0x2e9dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9dd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9dd4:
    // 0x2e9dd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e9dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9dd8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9DD8u;
    {
        const bool branch_taken_0x2e9dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9dd8) {
            ctx->pc = 0x2E9DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DD8u;
            // 0x2e9ddc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9DF0u;
            goto label_2e9df0;
        }
    }
    ctx->pc = 0x2E9DE0u;
    // 0x2e9de0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2e9de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9DE4u;
    {
        const bool branch_taken_0x2e9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DE4u;
            // 0x2e9de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9de4) {
            ctx->pc = 0x2E9DF0u;
            goto label_2e9df0;
        }
    }
    ctx->pc = 0x2E9DECu;
label_2e9dec:
    // 0x2e9dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9df0:
    // 0x2e9df0: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x2E9DF0u;
    {
        const bool branch_taken_0x2e9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9df0) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2E9DF8u;
label_2e9df8:
    // 0x2e9df8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e9dfc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2e9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2e9e00: 0x24421ed0  addiu       $v0, $v0, 0x1ED0
    ctx->pc = 0x2e9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7888));
    // 0x2e9e04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2e9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9e08: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9e0c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e9e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9e10: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9E10u;
    {
        const bool branch_taken_0x2e9e10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E10u;
            // 0x2e9e14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e10) {
            ctx->pc = 0x2E9E28u;
            goto label_2e9e28;
        }
    }
    ctx->pc = 0x2E9E18u;
    // 0x2e9e18: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9e1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9E1Cu;
    {
        const bool branch_taken_0x2e9e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e1c) {
            ctx->pc = 0x2E9E28u;
            goto label_2e9e28;
        }
    }
    ctx->pc = 0x2E9E24u;
    // 0x2e9e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9e28:
    // 0x2e9e28: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9E28u;
    {
        const bool branch_taken_0x2e9e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e28) {
            ctx->pc = 0x2E9E44u;
            goto label_2e9e44;
        }
    }
    ctx->pc = 0x2E9E30u;
    // 0x2e9e30: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9E30u;
    SET_GPR_U32(ctx, 31, 0x2E9E38u);
    ctx->pc = 0x2E9E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E30u;
            // 0x2e9e34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9E38u; }
        if (ctx->pc != 0x2E9E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9E38u; }
        if (ctx->pc != 0x2E9E38u) { return; }
    }
    ctx->pc = 0x2E9E38u;
label_2e9e38:
    // 0x2e9e38: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9E38u;
    {
        const bool branch_taken_0x2e9e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e38) {
            ctx->pc = 0x2E9E44u;
            goto label_2e9e44;
        }
    }
    ctx->pc = 0x2E9E40u;
    // 0x2e9e40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9e44:
    // 0x2e9e44: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9E44u;
    {
        const bool branch_taken_0x2e9e44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e44) {
            ctx->pc = 0x2E9E5Cu;
            goto label_2e9e5c;
        }
    }
    ctx->pc = 0x2E9E4Cu;
    // 0x2e9e4c: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9e50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9e54: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E9E54u;
    {
        const bool branch_taken_0x2e9e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9e54) {
            ctx->pc = 0x2E9E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E54u;
            // 0x2e9e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EC4u;
            goto label_2e9ec4;
        }
    }
    ctx->pc = 0x2E9E5Cu;
label_2e9e5c:
    // 0x2e9e5c: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E9E5Cu;
    {
        const bool branch_taken_0x2e9e5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e5c) {
            ctx->pc = 0x2E9EC0u;
            goto label_2e9ec0;
        }
    }
    ctx->pc = 0x2E9E64u;
    // 0x2e9e64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2e9e68: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2e9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2e9e6c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2e9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9e70: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9e74: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2e9e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9e78: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9E78u;
    {
        const bool branch_taken_0x2e9e78 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E9E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E78u;
            // 0x2e9e7c: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e78) {
            ctx->pc = 0x2E9E8Cu;
            goto label_2e9e8c;
        }
    }
    ctx->pc = 0x2E9E80u;
    // 0x2e9e80: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e9e80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9E84u;
    {
        const bool branch_taken_0x2e9e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E84u;
            // 0x2e9e88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e84) {
            ctx->pc = 0x2E9EA8u;
            goto label_2e9ea8;
        }
    }
    ctx->pc = 0x2E9E8Cu;
label_2e9e8c:
    // 0x2e9e8c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2e9e90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2e9e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2e9e94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e9c: 0x0  nop
    ctx->pc = 0x2e9e9cu;
    // NOP
    // 0x2e9ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9ea4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9ea8:
    // 0x2e9ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e9ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9eac: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9EACu;
    {
        const bool branch_taken_0x2e9eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9eac) {
            ctx->pc = 0x2E9EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EACu;
            // 0x2e9eb0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EC4u;
            goto label_2e9ec4;
        }
    }
    ctx->pc = 0x2E9EB4u;
    // 0x2e9eb4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2e9eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9EB8u;
    {
        const bool branch_taken_0x2e9eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EB8u;
            // 0x2e9ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9eb8) {
            ctx->pc = 0x2E9EC4u;
            goto label_2e9ec4;
        }
    }
    ctx->pc = 0x2E9EC0u;
label_2e9ec0:
    // 0x2e9ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ec4:
    // 0x2e9ec4: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2E9EC4u;
    {
        const bool branch_taken_0x2e9ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ec4) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2E9ECCu;
label_2e9ecc:
    // 0x2e9ecc: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x2e9eccu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e9ed0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9ED0u;
    {
        const bool branch_taken_0x2e9ed0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9ED0u;
            // 0x2e9ed4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ed0) {
            ctx->pc = 0x2E9EE8u;
            goto label_2e9ee8;
        }
    }
    ctx->pc = 0x2E9ED8u;
    // 0x2e9ed8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9edc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9EDCu;
    {
        const bool branch_taken_0x2e9edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9edc) {
            ctx->pc = 0x2E9EE8u;
            goto label_2e9ee8;
        }
    }
    ctx->pc = 0x2E9EE4u;
    // 0x2e9ee4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2e9ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ee8:
    // 0x2e9ee8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9EE8u;
    {
        const bool branch_taken_0x2e9ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ee8) {
            ctx->pc = 0x2E9F04u;
            goto label_2e9f04;
        }
    }
    ctx->pc = 0x2E9EF0u;
    // 0x2e9ef0: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2E9EF0u;
    SET_GPR_U32(ctx, 31, 0x2E9EF8u);
    ctx->pc = 0x2E9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EF0u;
            // 0x2e9ef4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9EF8u; }
        if (ctx->pc != 0x2E9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9EF8u; }
        if (ctx->pc != 0x2E9EF8u) { return; }
    }
    ctx->pc = 0x2E9EF8u;
label_2e9ef8:
    // 0x2e9ef8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9EF8u;
    {
        const bool branch_taken_0x2e9ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ef8) {
            ctx->pc = 0x2E9F04u;
            goto label_2e9f04;
        }
    }
    ctx->pc = 0x2E9F00u;
    // 0x2e9f00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e9f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f04:
    // 0x2e9f04: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9F04u;
    {
        const bool branch_taken_0x2e9f04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f04) {
            ctx->pc = 0x2E9F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F04u;
            // 0x2e9f08: 0x92820000  lbu         $v0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F20u;
            goto label_2e9f20;
        }
    }
    ctx->pc = 0x2E9F0Cu;
    // 0x2e9f0c: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2e9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2e9f10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9f14: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E9F14u;
    {
        const bool branch_taken_0x2e9f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9f14) {
            ctx->pc = 0x2EA010u;
            goto label_2ea010;
        }
    }
    ctx->pc = 0x2E9F1Cu;
    // 0x2e9f1c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e9f1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_2e9f20:
    // 0x2e9f20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9F20u;
    {
        const bool branch_taken_0x2e9f20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F20u;
            // 0x2e9f24: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f20) {
            ctx->pc = 0x2E9F34u;
            goto label_2e9f34;
        }
    }
    ctx->pc = 0x2E9F28u;
    // 0x2e9f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9F2Cu;
    {
        const bool branch_taken_0x2e9f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F2Cu;
            // 0x2e9f30: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f2c) {
            ctx->pc = 0x2E9F50u;
            goto label_2e9f50;
        }
    }
    ctx->pc = 0x2E9F34u;
label_2e9f34:
    // 0x2e9f34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e9f38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9f3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f44: 0x0  nop
    ctx->pc = 0x2e9f44u;
    // NOP
    // 0x2e9f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9f4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9f50:
    // 0x2e9f50: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2e9f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9f54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e9f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f5c: 0x0  nop
    ctx->pc = 0x2e9f5cu;
    // NOP
    // 0x2e9f60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e9f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9f64: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9F64u;
    {
        const bool branch_taken_0x2e9f64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9f64) {
            ctx->pc = 0x2E9F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F64u;
            // 0x2e9f68: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F7Cu;
            goto label_2e9f7c;
        }
    }
    ctx->pc = 0x2E9F6Cu;
    // 0x2e9f6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e9f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e9f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e9f74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9F74u;
    {
        const bool branch_taken_0x2e9f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F74u;
            // 0x2e9f78: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f74) {
            ctx->pc = 0x2E9F94u;
            goto label_2e9f94;
        }
    }
    ctx->pc = 0x2E9F7Cu;
label_2e9f7c:
    // 0x2e9f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e9f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e9f84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e9f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e9f88: 0x0  nop
    ctx->pc = 0x2e9f88u;
    // NOP
    // 0x2e9f8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9f90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e9f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e9f94:
    // 0x2e9f94: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2e9f94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9f98: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e9f98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e9f9c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2e9f9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9fa0: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E9FA0u;
    {
        const bool branch_taken_0x2e9fa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9fa0) {
            ctx->pc = 0x2EA010u;
            goto label_2ea010;
        }
    }
    ctx->pc = 0x2E9FA8u;
    // 0x2e9fa8: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x2e9fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9fac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e9facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2e9fb0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x2e9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x2e9fb4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2e9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2e9fb8: 0x8ea70d98  lw          $a3, 0xD98($s5)
    ctx->pc = 0x2e9fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
    // 0x2e9fbc: 0x26a60890  addiu       $a2, $s5, 0x890
    ctx->pc = 0x2e9fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
    // 0x2e9fc0: 0x92a411aa  lbu         $a0, 0x11AA($s5)
    ctx->pc = 0x2e9fc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
    // 0x2e9fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9fcc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2e9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e9fd0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9fd4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9fd8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e9fdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9fe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9fe4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9FE4u;
    SET_GPR_U32(ctx, 31, 0x2E9FECu);
    ctx->pc = 0x2E9FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FE4u;
            // 0x2e9fe8: 0x24470200  addiu       $a3, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FECu; }
        if (ctx->pc != 0x2E9FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FECu; }
        if (ctx->pc != 0x2E9FECu) { return; }
    }
    ctx->pc = 0x2E9FECu;
label_2e9fec:
    // 0x2e9fec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9ff0: 0x92a411aa  lbu         $a0, 0x11AA($s5)
    ctx->pc = 0x2e9ff0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
    // 0x2e9ff4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9ff8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2e9ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2e9ffc: 0x26a60890  addiu       $a2, $s5, 0x890
    ctx->pc = 0x2e9ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
    // 0x2ea000: 0x26a702c0  addiu       $a3, $s5, 0x2C0
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
    // 0x2ea004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea008: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA008u;
    SET_GPR_U32(ctx, 31, 0x2EA010u);
    ctx->pc = 0x2EA00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA008u;
            // 0x2ea00c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA010u; }
        if (ctx->pc != 0x2EA010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA010u; }
        if (ctx->pc != 0x2EA010u) { return; }
    }
    ctx->pc = 0x2EA010u;
label_2ea010:
    // 0x2ea010: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ea014: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ea014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea018: 0x24421ee0  addiu       $v0, $v0, 0x1EE0
    ctx->pc = 0x2ea018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
    // 0x2ea01c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2ea01cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2ea020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea024: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ea024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ea028: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea02c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA02Cu;
    {
        const bool branch_taken_0x2ea02c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA02Cu;
            // 0x2ea030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea02c) {
            ctx->pc = 0x2EA044u;
            goto label_2ea044;
        }
    }
    ctx->pc = 0x2EA034u;
    // 0x2ea034: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ea034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ea038: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA038u;
    {
        const bool branch_taken_0x2ea038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea038) {
            ctx->pc = 0x2EA044u;
            goto label_2ea044;
        }
    }
    ctx->pc = 0x2EA040u;
    // 0x2ea040: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2ea040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea044:
    // 0x2ea044: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA044u;
    {
        const bool branch_taken_0x2ea044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea044) {
            ctx->pc = 0x2EA060u;
            goto label_2ea060;
        }
    }
    ctx->pc = 0x2EA04Cu;
    // 0x2ea04c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2EA04Cu;
    SET_GPR_U32(ctx, 31, 0x2EA054u);
    ctx->pc = 0x2EA050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA04Cu;
            // 0x2ea050: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA054u; }
        if (ctx->pc != 0x2EA054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA054u; }
        if (ctx->pc != 0x2EA054u) { return; }
    }
    ctx->pc = 0x2EA054u;
label_2ea054:
    // 0x2ea054: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA054u;
    {
        const bool branch_taken_0x2ea054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea054) {
            ctx->pc = 0x2EA060u;
            goto label_2ea060;
        }
    }
    ctx->pc = 0x2EA05Cu;
    // 0x2ea05c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ea05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea060:
    // 0x2ea060: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA060u;
    {
        const bool branch_taken_0x2ea060 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea060) {
            ctx->pc = 0x2EA078u;
            goto label_2ea078;
        }
    }
    ctx->pc = 0x2EA068u;
    // 0x2ea068: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2ea068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea06c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ea06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea070: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EA070u;
    {
        const bool branch_taken_0x2ea070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea070) {
            ctx->pc = 0x2EA074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA070u;
            // 0x2ea074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0E0u;
            goto label_2ea0e0;
        }
    }
    ctx->pc = 0x2EA078u;
label_2ea078:
    // 0x2ea078: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA078u;
    {
        const bool branch_taken_0x2ea078 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea078) {
            ctx->pc = 0x2EA0DCu;
            goto label_2ea0dc;
        }
    }
    ctx->pc = 0x2EA080u;
    // 0x2ea080: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ea080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ea084: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ea084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ea088: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2ea088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea08c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ea08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea090: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ea090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea094: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA094u;
    {
        const bool branch_taken_0x2ea094 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2EA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA094u;
            // 0x2ea098: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea094) {
            ctx->pc = 0x2EA0A8u;
            goto label_2ea0a8;
        }
    }
    ctx->pc = 0x2EA09Cu;
    // 0x2ea09c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ea09cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA0A0u;
    {
        const bool branch_taken_0x2ea0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0A0u;
            // 0x2ea0a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0a0) {
            ctx->pc = 0x2EA0C4u;
            goto label_2ea0c4;
        }
    }
    ctx->pc = 0x2EA0A8u;
label_2ea0a8:
    // 0x2ea0a8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2ea0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ea0ac: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ea0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ea0b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0b8: 0x0  nop
    ctx->pc = 0x2ea0b8u;
    // NOP
    // 0x2ea0bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea0c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ea0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ea0c4:
    // 0x2ea0c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ea0c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea0c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA0C8u;
    {
        const bool branch_taken_0x2ea0c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea0c8) {
            ctx->pc = 0x2EA0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0C8u;
            // 0x2ea0cc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0E0u;
            goto label_2ea0e0;
        }
    }
    ctx->pc = 0x2EA0D0u;
    // 0x2ea0d0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2ea0d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA0D4u;
    {
        const bool branch_taken_0x2ea0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0D4u;
            // 0x2ea0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0d4) {
            ctx->pc = 0x2EA0E0u;
            goto label_2ea0e0;
        }
    }
    ctx->pc = 0x2EA0DCu;
label_2ea0dc:
    // 0x2ea0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea0e0:
    // 0x2ea0e0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x2EA0E0u;
    {
        const bool branch_taken_0x2ea0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0e0) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA0E8u;
label_2ea0e8:
    // 0x2ea0e8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ea0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ea0ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ea0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea0f0: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x2ea0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x2ea0f4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2ea0f4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2ea0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea0fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ea0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ea100: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2ea100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea104: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA104u;
    {
        const bool branch_taken_0x2ea104 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA104u;
            // 0x2ea108: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea104) {
            ctx->pc = 0x2EA11Cu;
            goto label_2ea11c;
        }
    }
    ctx->pc = 0x2EA10Cu;
    // 0x2ea10c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ea10cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ea110: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA110u;
    {
        const bool branch_taken_0x2ea110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea110) {
            ctx->pc = 0x2EA11Cu;
            goto label_2ea11c;
        }
    }
    ctx->pc = 0x2EA118u;
    // 0x2ea118: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2ea118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea11c:
    // 0x2ea11c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA11Cu;
    {
        const bool branch_taken_0x2ea11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea11c) {
            ctx->pc = 0x2EA138u;
            goto label_2ea138;
        }
    }
    ctx->pc = 0x2EA124u;
    // 0x2ea124: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2EA124u;
    SET_GPR_U32(ctx, 31, 0x2EA12Cu);
    ctx->pc = 0x2EA128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA124u;
            // 0x2ea128: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA12Cu; }
        if (ctx->pc != 0x2EA12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA12Cu; }
        if (ctx->pc != 0x2EA12Cu) { return; }
    }
    ctx->pc = 0x2EA12Cu;
label_2ea12c:
    // 0x2ea12c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA12Cu;
    {
        const bool branch_taken_0x2ea12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea12c) {
            ctx->pc = 0x2EA138u;
            goto label_2ea138;
        }
    }
    ctx->pc = 0x2EA134u;
    // 0x2ea134: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ea134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea138:
    // 0x2ea138: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA138u;
    {
        const bool branch_taken_0x2ea138 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea138) {
            ctx->pc = 0x2EA150u;
            goto label_2ea150;
        }
    }
    ctx->pc = 0x2EA140u;
    // 0x2ea140: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2ea140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea144: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ea144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea148: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EA148u;
    {
        const bool branch_taken_0x2ea148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea148) {
            ctx->pc = 0x2EA14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA148u;
            // 0x2ea14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1B8u;
            goto label_2ea1b8;
        }
    }
    ctx->pc = 0x2EA150u;
label_2ea150:
    // 0x2ea150: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA150u;
    {
        const bool branch_taken_0x2ea150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea150) {
            ctx->pc = 0x2EA1B4u;
            goto label_2ea1b4;
        }
    }
    ctx->pc = 0x2EA158u;
    // 0x2ea158: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ea158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ea15c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ea15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ea160: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2ea160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea164: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ea164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea168: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ea168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea16c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA16Cu;
    {
        const bool branch_taken_0x2ea16c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2EA170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA16Cu;
            // 0x2ea170: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea16c) {
            ctx->pc = 0x2EA180u;
            goto label_2ea180;
        }
    }
    ctx->pc = 0x2EA174u;
    // 0x2ea174: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ea174u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA178u;
    {
        const bool branch_taken_0x2ea178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA178u;
            // 0x2ea17c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea178) {
            ctx->pc = 0x2EA19Cu;
            goto label_2ea19c;
        }
    }
    ctx->pc = 0x2EA180u;
label_2ea180:
    // 0x2ea180: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2ea180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ea184: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ea184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ea188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea18c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea190: 0x0  nop
    ctx->pc = 0x2ea190u;
    // NOP
    // 0x2ea194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea198: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ea198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ea19c:
    // 0x2ea19c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ea19cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea1a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA1A0u;
    {
        const bool branch_taken_0x2ea1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea1a0) {
            ctx->pc = 0x2EA1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1A0u;
            // 0x2ea1a4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1B8u;
            goto label_2ea1b8;
        }
    }
    ctx->pc = 0x2EA1A8u;
    // 0x2ea1a8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2ea1ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA1ACu;
    {
        const bool branch_taken_0x2ea1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1ACu;
            // 0x2ea1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1ac) {
            ctx->pc = 0x2EA1B8u;
            goto label_2ea1b8;
        }
    }
    ctx->pc = 0x2EA1B4u;
label_2ea1b4:
    // 0x2ea1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1b8:
    // 0x2ea1b8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2EA1B8u;
    {
        const bool branch_taken_0x2ea1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1b8) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA1C0u;
label_2ea1c0:
    // 0x2ea1c0: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea1c4: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x2ea1c4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2ea1c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA1C8u;
    {
        const bool branch_taken_0x2ea1c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1C8u;
            // 0x2ea1cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1c8) {
            ctx->pc = 0x2EA1E0u;
            goto label_2ea1e0;
        }
    }
    ctx->pc = 0x2EA1D0u;
    // 0x2ea1d0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ea1d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ea1d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA1D4u;
    {
        const bool branch_taken_0x2ea1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1d4) {
            ctx->pc = 0x2EA1E0u;
            goto label_2ea1e0;
        }
    }
    ctx->pc = 0x2EA1DCu;
    // 0x2ea1dc: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x2ea1dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1e0:
    // 0x2ea1e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA1E0u;
    {
        const bool branch_taken_0x2ea1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1e0) {
            ctx->pc = 0x2EA1FCu;
            goto label_2ea1fc;
        }
    }
    ctx->pc = 0x2EA1E8u;
    // 0x2ea1e8: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2EA1E8u;
    SET_GPR_U32(ctx, 31, 0x2EA1F0u);
    ctx->pc = 0x2EA1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1E8u;
            // 0x2ea1ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA1F0u; }
        if (ctx->pc != 0x2EA1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA1F0u; }
        if (ctx->pc != 0x2EA1F0u) { return; }
    }
    ctx->pc = 0x2EA1F0u;
label_2ea1f0:
    // 0x2ea1f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA1F0u;
    {
        const bool branch_taken_0x2ea1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1f0) {
            ctx->pc = 0x2EA1FCu;
            goto label_2ea1fc;
        }
    }
    ctx->pc = 0x2EA1F8u;
    // 0x2ea1f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ea1f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1fc:
    // 0x2ea1fc: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA1FCu;
    {
        const bool branch_taken_0x2ea1fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1fc) {
            ctx->pc = 0x2EA200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1FCu;
            // 0x2ea200: 0x92820000  lbu         $v0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA218u;
            goto label_2ea218;
        }
    }
    ctx->pc = 0x2EA204u;
    // 0x2ea204: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2ea204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea208: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea20c: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EA20Cu;
    {
        const bool branch_taken_0x2ea20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea20c) {
            ctx->pc = 0x2EA30Cu;
            goto label_2ea30c;
        }
    }
    ctx->pc = 0x2EA214u;
    // 0x2ea214: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2ea214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_2ea218:
    // 0x2ea218: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA218u;
    {
        const bool branch_taken_0x2ea218 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA218u;
            // 0x2ea21c: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea218) {
            ctx->pc = 0x2EA22Cu;
            goto label_2ea22c;
        }
    }
    ctx->pc = 0x2EA220u;
    // 0x2ea220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA224u;
    {
        const bool branch_taken_0x2ea224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA224u;
            // 0x2ea228: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea224) {
            ctx->pc = 0x2EA248u;
            goto label_2ea248;
        }
    }
    ctx->pc = 0x2EA22Cu;
label_2ea22c:
    // 0x2ea22c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ea22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2ea230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ea234: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea23c: 0x0  nop
    ctx->pc = 0x2ea23cu;
    // NOP
    // 0x2ea240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ea244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ea248:
    // 0x2ea248: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ea248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea24c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea254: 0x0  nop
    ctx->pc = 0x2ea254u;
    // NOP
    // 0x2ea258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea25c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA25Cu;
    {
        const bool branch_taken_0x2ea25c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea25c) {
            ctx->pc = 0x2EA260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA25Cu;
            // 0x2ea260: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA274u;
            goto label_2ea274;
        }
    }
    ctx->pc = 0x2EA264u;
    // 0x2ea264: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea268: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ea268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea26c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA26Cu;
    {
        const bool branch_taken_0x2ea26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA26Cu;
            // 0x2ea270: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea26c) {
            ctx->pc = 0x2EA28Cu;
            goto label_2ea28c;
        }
    }
    ctx->pc = 0x2EA274u;
label_2ea274:
    // 0x2ea274: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea278: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea27c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ea27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea280: 0x0  nop
    ctx->pc = 0x2ea280u;
    // NOP
    // 0x2ea284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea288: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ea288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ea28c:
    // 0x2ea28c: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2ea28cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea290: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2ea290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ea294: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x2ea294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ea298: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EA298u;
    {
        const bool branch_taken_0x2ea298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea298) {
            ctx->pc = 0x2EA30Cu;
            goto label_2ea30c;
        }
    }
    ctx->pc = 0x2EA2A0u;
    // 0x2ea2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea2a4: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EA2A4u;
    {
        const bool branch_taken_0x2ea2a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2A4u;
            // 0x2ea2a8: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2a4) {
            ctx->pc = 0x2EA2E8u;
            goto label_2ea2e8;
        }
    }
    ctx->pc = 0x2EA2ACu;
    // 0x2ea2ac: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA2ACu;
    {
        const bool branch_taken_0x2ea2ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2ac) {
            ctx->pc = 0x2EA2BCu;
            goto label_2ea2bc;
        }
    }
    ctx->pc = 0x2EA2B4u;
    // 0x2ea2b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EA2B4u;
    {
        const bool branch_taken_0x2ea2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2b4) {
            ctx->pc = 0x2EA30Cu;
            goto label_2ea30c;
        }
    }
    ctx->pc = 0x2EA2BCu;
label_2ea2bc:
    // 0x2ea2bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea2c0: 0x92a411aa  lbu         $a0, 0x11AA($s5)
    ctx->pc = 0x2ea2c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
    // 0x2ea2c4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea2c8: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2ea2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2ea2cc: 0x26a60890  addiu       $a2, $s5, 0x890
    ctx->pc = 0x2ea2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
    // 0x2ea2d0: 0x26a702c0  addiu       $a3, $s5, 0x2C0
    ctx->pc = 0x2ea2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
    // 0x2ea2d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea2d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2d8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA2D8u;
    SET_GPR_U32(ctx, 31, 0x2EA2E0u);
    ctx->pc = 0x2EA2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2D8u;
            // 0x2ea2dc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2E0u; }
        if (ctx->pc != 0x2EA2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2E0u; }
        if (ctx->pc != 0x2EA2E0u) { return; }
    }
    ctx->pc = 0x2EA2E0u;
label_2ea2e0:
    // 0x2ea2e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA2E0u;
    {
        const bool branch_taken_0x2ea2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2e0) {
            ctx->pc = 0x2EA30Cu;
            goto label_2ea30c;
        }
    }
    ctx->pc = 0x2EA2E8u;
label_2ea2e8:
    // 0x2ea2e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea2ec: 0x92a411aa  lbu         $a0, 0x11AA($s5)
    ctx->pc = 0x2ea2ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4522)));
    // 0x2ea2f0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea2f4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2ea2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2ea2f8: 0x26a60890  addiu       $a2, $s5, 0x890
    ctx->pc = 0x2ea2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
    // 0x2ea2fc: 0x26a702c0  addiu       $a3, $s5, 0x2C0
    ctx->pc = 0x2ea2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
    // 0x2ea300: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea304: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA304u;
    SET_GPR_U32(ctx, 31, 0x2EA30Cu);
    ctx->pc = 0x2EA308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA304u;
            // 0x2ea308: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA30Cu; }
        if (ctx->pc != 0x2EA30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA30Cu; }
        if (ctx->pc != 0x2EA30Cu) { return; }
    }
    ctx->pc = 0x2EA30Cu;
label_2ea30c:
    // 0x2ea30c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ea30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ea310: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ea310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea314: 0x24421f00  addiu       $v0, $v0, 0x1F00
    ctx->pc = 0x2ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x2ea318: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2ea318u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2ea31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea320: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ea320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ea324: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2ea324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea328: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA328u;
    {
        const bool branch_taken_0x2ea328 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA328u;
            // 0x2ea32c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea328) {
            ctx->pc = 0x2EA340u;
            goto label_2ea340;
        }
    }
    ctx->pc = 0x2EA330u;
    // 0x2ea330: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ea330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ea334: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA334u;
    {
        const bool branch_taken_0x2ea334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea334) {
            ctx->pc = 0x2EA340u;
            goto label_2ea340;
        }
    }
    ctx->pc = 0x2EA33Cu;
    // 0x2ea33c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2ea33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea340:
    // 0x2ea340: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA340u;
    {
        const bool branch_taken_0x2ea340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea340) {
            ctx->pc = 0x2EA35Cu;
            goto label_2ea35c;
        }
    }
    ctx->pc = 0x2EA348u;
    // 0x2ea348: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2EA348u;
    SET_GPR_U32(ctx, 31, 0x2EA350u);
    ctx->pc = 0x2EA34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA348u;
            // 0x2ea34c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA350u; }
        if (ctx->pc != 0x2EA350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA350u; }
        if (ctx->pc != 0x2EA350u) { return; }
    }
    ctx->pc = 0x2EA350u;
label_2ea350:
    // 0x2ea350: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA350u;
    {
        const bool branch_taken_0x2ea350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea350) {
            ctx->pc = 0x2EA35Cu;
            goto label_2ea35c;
        }
    }
    ctx->pc = 0x2EA358u;
    // 0x2ea358: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ea358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea35c:
    // 0x2ea35c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA35Cu;
    {
        const bool branch_taken_0x2ea35c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea35c) {
            ctx->pc = 0x2EA374u;
            goto label_2ea374;
        }
    }
    ctx->pc = 0x2EA364u;
    // 0x2ea364: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2ea364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea368: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ea368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea36c: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EA36Cu;
    {
        const bool branch_taken_0x2ea36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea36c) {
            ctx->pc = 0x2EA370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA36Cu;
            // 0x2ea370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA3DCu;
            goto label_2ea3dc;
        }
    }
    ctx->pc = 0x2EA374u;
label_2ea374:
    // 0x2ea374: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA374u;
    {
        const bool branch_taken_0x2ea374 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea374) {
            ctx->pc = 0x2EA3D8u;
            goto label_2ea3d8;
        }
    }
    ctx->pc = 0x2EA37Cu;
    // 0x2ea37c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ea380: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ea384: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2ea384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea388: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ea388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea38c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ea38cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea390: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA390u;
    {
        const bool branch_taken_0x2ea390 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2EA394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA390u;
            // 0x2ea394: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea390) {
            ctx->pc = 0x2EA3A4u;
            goto label_2ea3a4;
        }
    }
    ctx->pc = 0x2EA398u;
    // 0x2ea398: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ea398u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea39c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA39Cu;
    {
        const bool branch_taken_0x2ea39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA39Cu;
            // 0x2ea3a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea39c) {
            ctx->pc = 0x2EA3C0u;
            goto label_2ea3c0;
        }
    }
    ctx->pc = 0x2EA3A4u;
label_2ea3a4:
    // 0x2ea3a4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2ea3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ea3a8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ea3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ea3ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea3b4: 0x0  nop
    ctx->pc = 0x2ea3b4u;
    // NOP
    // 0x2ea3b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea3bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ea3bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ea3c0:
    // 0x2ea3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ea3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea3c4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA3C4u;
    {
        const bool branch_taken_0x2ea3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea3c4) {
            ctx->pc = 0x2EA3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3C4u;
            // 0x2ea3c8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA3DCu;
            goto label_2ea3dc;
        }
    }
    ctx->pc = 0x2EA3CCu;
    // 0x2ea3cc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2ea3d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA3D0u;
    {
        const bool branch_taken_0x2ea3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3D0u;
            // 0x2ea3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3d0) {
            ctx->pc = 0x2EA3DCu;
            goto label_2ea3dc;
        }
    }
    ctx->pc = 0x2EA3D8u;
label_2ea3d8:
    // 0x2ea3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea3dc:
    // 0x2ea3dc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2EA3DCu;
    {
        const bool branch_taken_0x2ea3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea3dc) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA3E4u;
label_2ea3e4:
    // 0x2ea3e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ea3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea3e8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ea3ec: 0x24421f10  addiu       $v0, $v0, 0x1F10
    ctx->pc = 0x2ea3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
    // 0x2ea3f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ea3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea3f4: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x2ea3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea3f8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ea3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea3fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA3FCu;
    {
        const bool branch_taken_0x2ea3fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3FCu;
            // 0x2ea400: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3fc) {
            ctx->pc = 0x2EA414u;
            goto label_2ea414;
        }
    }
    ctx->pc = 0x2EA404u;
    // 0x2ea404: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ea404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ea408: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA408u;
    {
        const bool branch_taken_0x2ea408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea408) {
            ctx->pc = 0x2EA414u;
            goto label_2ea414;
        }
    }
    ctx->pc = 0x2EA410u;
    // 0x2ea410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea414:
    // 0x2ea414: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA414u;
    {
        const bool branch_taken_0x2ea414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea414) {
            ctx->pc = 0x2EA430u;
            goto label_2ea430;
        }
    }
    ctx->pc = 0x2EA41Cu;
    // 0x2ea41c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2EA41Cu;
    SET_GPR_U32(ctx, 31, 0x2EA424u);
    ctx->pc = 0x2EA420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA41Cu;
            // 0x2ea420: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA424u; }
        if (ctx->pc != 0x2EA424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA424u; }
        if (ctx->pc != 0x2EA424u) { return; }
    }
    ctx->pc = 0x2EA424u;
label_2ea424:
    // 0x2ea424: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA424u;
    {
        const bool branch_taken_0x2ea424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea424) {
            ctx->pc = 0x2EA430u;
            goto label_2ea430;
        }
    }
    ctx->pc = 0x2EA42Cu;
    // 0x2ea42c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ea42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea430:
    // 0x2ea430: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA430u;
    {
        const bool branch_taken_0x2ea430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea430) {
            ctx->pc = 0x2EA448u;
            goto label_2ea448;
        }
    }
    ctx->pc = 0x2EA438u;
    // 0x2ea438: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2ea438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
    // 0x2ea43c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ea43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea440: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EA440u;
    {
        const bool branch_taken_0x2ea440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea440) {
            ctx->pc = 0x2EA444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA440u;
            // 0x2ea444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA448u;
label_2ea448:
    // 0x2ea448: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA448u;
    {
        const bool branch_taken_0x2ea448 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea448) {
            ctx->pc = 0x2EA4ACu;
            goto label_2ea4ac;
        }
    }
    ctx->pc = 0x2EA450u;
    // 0x2ea450: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ea450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ea454: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ea454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ea458: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2ea458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea45c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ea45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea460: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ea460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea464: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA464u;
    {
        const bool branch_taken_0x2ea464 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2EA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA464u;
            // 0x2ea468: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea464) {
            ctx->pc = 0x2EA478u;
            goto label_2ea478;
        }
    }
    ctx->pc = 0x2EA46Cu;
    // 0x2ea46c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ea46cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA470u;
    {
        const bool branch_taken_0x2ea470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA470u;
            // 0x2ea474: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea470) {
            ctx->pc = 0x2EA494u;
            goto label_2ea494;
        }
    }
    ctx->pc = 0x2EA478u;
label_2ea478:
    // 0x2ea478: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2ea478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ea47c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2ea47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ea480: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea488: 0x0  nop
    ctx->pc = 0x2ea488u;
    // NOP
    // 0x2ea48c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea490: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ea490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ea494:
    // 0x2ea494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ea494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea498: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA498u;
    {
        const bool branch_taken_0x2ea498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea498) {
            ctx->pc = 0x2EA49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA498u;
            // 0x2ea49c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA4A0u;
    // 0x2ea4a0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2ea4a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA4A4u;
    {
        const bool branch_taken_0x2ea4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA4A4u;
            // 0x2ea4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4a4) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA4ACu;
label_2ea4ac:
    // 0x2ea4ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea4b0:
    // 0x2ea4b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ea4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ea4b4:
    // 0x2ea4b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ea4b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ea4b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ea4b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ea4bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ea4bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea4c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ea4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ea4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ea4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA4D0u;
            // 0x2ea4d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EA4D8u;
    // 0x2ea4d8: 0x0  nop
    ctx->pc = 0x2ea4d8u;
    // NOP
    // 0x2ea4dc: 0x0  nop
    ctx->pc = 0x2ea4dcu;
    // NOP
}
