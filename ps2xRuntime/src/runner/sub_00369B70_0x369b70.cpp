#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00369B70
// Address: 0x369b70 - 0x369e30
void sub_00369B70_0x369b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369B70_0x369b70");
#endif

    switch (ctx->pc) {
        case 0x369bd8u: goto label_369bd8;
        case 0x369c4cu: goto label_369c4c;
        case 0x369d18u: goto label_369d18;
        case 0x369d2cu: goto label_369d2c;
        case 0x369d4cu: goto label_369d4c;
        case 0x369d6cu: goto label_369d6c;
        default: break;
    }

    ctx->pc = 0x369b70u;

    // 0x369b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369b74: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x369b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x369b78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x369b7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x369b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369b84: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x369b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x369b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369b8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x369b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369b90: 0xc46218e8  lwc1        $f2, 0x18E8($v1)
    ctx->pc = 0x369b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x369b94: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x369b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x369b98: 0xc44118ec  lwc1        $f1, 0x18EC($v0)
    ctx->pc = 0x369b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369b9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x369b9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ba0: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x369ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x369ba4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x369ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369ba8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369bac: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x369bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369bb0: 0xc46018f0  lwc1        $f0, 0x18F0($v1)
    ctx->pc = 0x369bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369bb4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x369bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x369bb8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x369bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x369bbc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x369bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x369bc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369bc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x369bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x369bc8: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x369bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x369bcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x369bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369bd0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x369bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x369bd4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x369bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_369bd8:
    // 0x369bd8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x369bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369bdc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x369bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x369be0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x369be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x369be4: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x369be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x369be8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369bec: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x369becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x369bf0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369bf4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x369bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x369bf8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x369bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x369bfc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x369BFCu;
    {
        const bool branch_taken_0x369bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x369BFCu;
            // 0x369c00: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369bfc) {
            ctx->pc = 0x369BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_369bd8;
        }
    }
    ctx->pc = 0x369C04u;
    // 0x369c04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369c08: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369c0c: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x369c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369c10: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x369c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x369c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c18: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x369c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x369c1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369c20: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369c24: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x369c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x369c28: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x369c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369c30: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x369c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x369c34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369c38: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x369c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369c3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369c40: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x369c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x369c44: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x369C44u;
    SET_GPR_U32(ctx, 31, 0x369C4Cu);
    ctx->pc = 0x369C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369C44u;
            // 0x369c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369C4Cu; }
        if (ctx->pc != 0x369C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369C4Cu; }
        if (ctx->pc != 0x369C4Cu) { return; }
    }
    ctx->pc = 0x369C4Cu;
label_369c4c:
    // 0x369c4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x369c50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369c54: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x369c58: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x369c5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369c5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369c60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369C60u;
    {
        const bool branch_taken_0x369c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c60) {
            ctx->pc = 0x369C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369C60u;
            // 0x369c64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369C74u;
            goto label_369c74;
        }
    }
    ctx->pc = 0x369C68u;
    // 0x369c68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369c6c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369c70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369c74:
    // 0x369c74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369c78: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369c7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369c80: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369c80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369c84: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369C84u;
    {
        const bool branch_taken_0x369c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c84) {
            ctx->pc = 0x369C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369C84u;
            // 0x369c88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369C98u;
            goto label_369c98;
        }
    }
    ctx->pc = 0x369C8Cu;
    // 0x369c8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369c90: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369c94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369c98:
    // 0x369c98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369c9c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369ca0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369ca4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369ca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369ca8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369CA8u;
    {
        const bool branch_taken_0x369ca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369ca8) {
            ctx->pc = 0x369CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369CA8u;
            // 0x369cac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369CBCu;
            goto label_369cbc;
        }
    }
    ctx->pc = 0x369CB0u;
    // 0x369cb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369cb4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369cb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369cbc:
    // 0x369cbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369cc0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369cc4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369cc8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369cc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369ccc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369CCCu;
    {
        const bool branch_taken_0x369ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369ccc) {
            ctx->pc = 0x369CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369CCCu;
            // 0x369cd0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369CE0u;
            goto label_369ce0;
        }
    }
    ctx->pc = 0x369CD4u;
    // 0x369cd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369cd8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369cdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369ce0:
    // 0x369ce0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369ce4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369ce8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369cec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369cecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369cf0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369CF0u;
    {
        const bool branch_taken_0x369cf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369cf0) {
            ctx->pc = 0x369CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369CF0u;
            // 0x369cf4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369D04u;
            goto label_369d04;
        }
    }
    ctx->pc = 0x369CF8u;
    // 0x369cf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369cfc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369d00: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x369d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_369d04:
    // 0x369d04: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x369D04u;
    {
        const bool branch_taken_0x369d04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d04) {
            ctx->pc = 0x369D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369D04u;
            // 0x369d08: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369D1Cu;
            goto label_369d1c;
        }
    }
    ctx->pc = 0x369D0Cu;
    // 0x369d0c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x369d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x369d10: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x369D10u;
    SET_GPR_U32(ctx, 31, 0x369D18u);
    ctx->pc = 0x369D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369D10u;
            // 0x369d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D18u; }
        if (ctx->pc != 0x369D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D18u; }
        if (ctx->pc != 0x369D18u) { return; }
    }
    ctx->pc = 0x369D18u;
label_369d18:
    // 0x369d18: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x369d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_369d1c:
    // 0x369d1c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369D1Cu;
    {
        const bool branch_taken_0x369d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d1c) {
            ctx->pc = 0x369D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369D1Cu;
            // 0x369d20: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369D30u;
            goto label_369d30;
        }
    }
    ctx->pc = 0x369D24u;
    // 0x369d24: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x369D24u;
    SET_GPR_U32(ctx, 31, 0x369D2Cu);
    ctx->pc = 0x369D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369D24u;
            // 0x369d28: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D2Cu; }
        if (ctx->pc != 0x369D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D2Cu; }
        if (ctx->pc != 0x369D2Cu) { return; }
    }
    ctx->pc = 0x369D2Cu;
label_369d2c:
    // 0x369d2c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x369d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_369d30:
    // 0x369d30: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x369D30u;
    {
        const bool branch_taken_0x369d30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d30) {
            ctx->pc = 0x369D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369D30u;
            // 0x369d34: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369D50u;
            goto label_369d50;
        }
    }
    ctx->pc = 0x369D38u;
    // 0x369d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d3c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x369d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x369d40: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x369d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x369d44: 0xc075188  jal         func_1D4620
    ctx->pc = 0x369D44u;
    SET_GPR_U32(ctx, 31, 0x369D4Cu);
    ctx->pc = 0x369D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369D44u;
            // 0x369d48: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D4Cu; }
        if (ctx->pc != 0x369D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D4Cu; }
        if (ctx->pc != 0x369D4Cu) { return; }
    }
    ctx->pc = 0x369D4Cu;
label_369d4c:
    // 0x369d4c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x369d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_369d50:
    // 0x369d50: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x369D50u;
    {
        const bool branch_taken_0x369d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d50) {
            ctx->pc = 0x369D6Cu;
            goto label_369d6c;
        }
    }
    ctx->pc = 0x369D58u;
    // 0x369d58: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x369d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x369d5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x369D5Cu;
    {
        const bool branch_taken_0x369d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x369d5c) {
            ctx->pc = 0x369D6Cu;
            goto label_369d6c;
        }
    }
    ctx->pc = 0x369D64u;
    // 0x369d64: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x369D64u;
    SET_GPR_U32(ctx, 31, 0x369D6Cu);
    ctx->pc = 0x369D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369D64u;
            // 0x369d68: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D6Cu; }
        if (ctx->pc != 0x369D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369D6Cu; }
        if (ctx->pc != 0x369D6Cu) { return; }
    }
    ctx->pc = 0x369D6Cu;
label_369d6c:
    // 0x369d6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369d70: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369d74: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x369d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x369d78: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x369d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x369d7c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x369d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x369d80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369d84: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369d88: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x369d8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x369d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369d90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369d94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x369d94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369d98: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369d9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x369da0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x369da4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369da8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369DA8u;
    {
        const bool branch_taken_0x369da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369da8) {
            ctx->pc = 0x369DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369DA8u;
            // 0x369dac: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369DBCu;
            goto label_369dbc;
        }
    }
    ctx->pc = 0x369DB0u;
    // 0x369db0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369db4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369db8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_369dbc:
    // 0x369dbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369dc0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369dc4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369dc8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369dc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369dcc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369DCCu;
    {
        const bool branch_taken_0x369dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369dcc) {
            ctx->pc = 0x369DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369DCCu;
            // 0x369dd0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369DE0u;
            goto label_369de0;
        }
    }
    ctx->pc = 0x369DD4u;
    // 0x369dd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369dd8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369ddc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_369de0:
    // 0x369de0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369de4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369de8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369dec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369decu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369df0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x369DF0u;
    {
        const bool branch_taken_0x369df0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369df0) {
            ctx->pc = 0x369E00u;
            goto label_369e00;
        }
    }
    ctx->pc = 0x369DF8u;
    // 0x369df8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369dfc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_369e00:
    // 0x369e00: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369e04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369e08: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x369e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x369e0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x369e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x369e10: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x369e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x369e14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x369e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369e20: 0x3e00008  jr          $ra
    ctx->pc = 0x369E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x369E20u;
            // 0x369e24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x369E28u;
    // 0x369e28: 0x0  nop
    ctx->pc = 0x369e28u;
    // NOP
    // 0x369e2c: 0x0  nop
    ctx->pc = 0x369e2cu;
    // NOP
}
