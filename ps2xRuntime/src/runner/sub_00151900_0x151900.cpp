#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151900
// Address: 0x151900 - 0x1519b0
void sub_00151900_0x151900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151900_0x151900");
#endif

    ctx->pc = 0x151900u;

    // 0x151900: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x151900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151904: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x151904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x151908: 0x50e30011  beql        $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x151908u;
    {
        const bool branch_taken_0x151908 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x151908) {
            ctx->pc = 0x15190Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151908u;
            // 0x15190c: 0x84c8000a  lh          $t0, 0xA($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151950u;
            goto label_151950;
        }
    }
    ctx->pc = 0x151910u;
    // 0x151910: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x151910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151914: 0x50e30003  beql        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151914u;
    {
        const bool branch_taken_0x151914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x151914) {
            ctx->pc = 0x151918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151914u;
            // 0x151918: 0x84c3000a  lh          $v1, 0xA($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151924u;
            goto label_151924;
        }
    }
    ctx->pc = 0x15191Cu;
    // 0x15191c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15191Cu;
    {
        const bool branch_taken_0x15191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15191c) {
            ctx->pc = 0x1519A8u;
            goto label_1519a8;
        }
    }
    ctx->pc = 0x151924u;
label_151924:
    // 0x151924: 0x1c600020  bgtz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x151924u;
    {
        const bool branch_taken_0x151924 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x151924) {
            ctx->pc = 0x1519A8u;
            goto label_1519a8;
        }
    }
    ctx->pc = 0x15192Cu;
    // 0x15192c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x15192cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151930: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x151930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151934: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x151934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x151938: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x151938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x15193c: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x15193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151940: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x151940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x151944: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x151944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151948: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x151948u;
    {
        const bool branch_taken_0x151948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151948u;
            // 0x15194c: 0xe4c0005c  swc1        $f0, 0x5C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151948) {
            ctx->pc = 0x1519A8u;
            goto label_1519a8;
        }
    }
    ctx->pc = 0x151950u;
label_151950:
    // 0x151950: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x151950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x151954: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x151954u;
    {
        const bool branch_taken_0x151954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151954) {
            ctx->pc = 0x1519A8u;
            goto label_1519a8;
        }
    }
    ctx->pc = 0x15195Cu;
    // 0x15195c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x15195cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151960: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x151960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x151964: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x151964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x151968: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x151968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15196c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15196cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151970: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x151974: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x151974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x151978: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x151978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x15197c: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x15197cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x151980: 0x84c4000a  lh          $a0, 0xA($a2)
    ctx->pc = 0x151980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x151984: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x151988: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x151988u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15198c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15198cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151990: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151994: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x151994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151998: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15199c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x15199cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1519a0: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1519a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1519a4: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x1519a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
label_1519a8:
    // 0x1519a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1519A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1519B0u;
}
