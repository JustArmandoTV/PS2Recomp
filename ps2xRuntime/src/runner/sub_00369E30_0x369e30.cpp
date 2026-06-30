#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00369E30
// Address: 0x369e30 - 0x36a0e0
void sub_00369E30_0x369e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369E30_0x369e30");
#endif

    switch (ctx->pc) {
        case 0x369e8cu: goto label_369e8c;
        case 0x369f00u: goto label_369f00;
        case 0x369fccu: goto label_369fcc;
        case 0x369fe0u: goto label_369fe0;
        case 0x36a000u: goto label_36a000;
        case 0x36a020u: goto label_36a020;
        default: break;
    }

    ctx->pc = 0x369e30u;

    // 0x369e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369e34: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x369e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x369e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x369e3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x369e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369e44: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x369e44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x369e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369e4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x369e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x369e50: 0xc44118e0  lwc1        $f1, 0x18E0($v0)
    ctx->pc = 0x369e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369e54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x369e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369e58: 0xc46018e4  lwc1        $f0, 0x18E4($v1)
    ctx->pc = 0x369e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369e5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x369e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e60: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x369e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x369e64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369e68: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x369e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369e6c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x369e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x369e70: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x369e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x369e74: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x369e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x369e78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369e7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x369e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x369e80: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x369e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x369e84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x369e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369e88: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x369e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_369e8c:
    // 0x369e8c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x369e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x369e90: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x369e90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x369e94: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x369e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x369e98: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x369e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x369e9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369ea0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x369ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x369ea4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369ea8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x369ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x369eac: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x369eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x369eb0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x369EB0u;
    {
        const bool branch_taken_0x369eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x369EB0u;
            // 0x369eb4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369eb0) {
            ctx->pc = 0x369E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_369e8c;
        }
    }
    ctx->pc = 0x369EB8u;
    // 0x369eb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369ebc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369ec0: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x369ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369ec4: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x369ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x369ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ecc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x369eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x369ed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369ed4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369ed8: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x369ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x369edc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x369edcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369ee4: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x369ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x369ee8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369eec: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x369eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x369ef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369ef4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x369ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x369ef8: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x369EF8u;
    SET_GPR_U32(ctx, 31, 0x369F00u);
    ctx->pc = 0x369EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369EF8u;
            // 0x369efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369F00u; }
        if (ctx->pc != 0x369F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369F00u; }
        if (ctx->pc != 0x369F00u) { return; }
    }
    ctx->pc = 0x369F00u;
label_369f00:
    // 0x369f00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x369f04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f08: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x369f0c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x369f10: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369f14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369F14u;
    {
        const bool branch_taken_0x369f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f14) {
            ctx->pc = 0x369F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369F14u;
            // 0x369f18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369F28u;
            goto label_369f28;
        }
    }
    ctx->pc = 0x369F1Cu;
    // 0x369f1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f20: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369f24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369f28:
    // 0x369f28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f2c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369f30: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369f34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369f34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369f38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369F38u;
    {
        const bool branch_taken_0x369f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f38) {
            ctx->pc = 0x369F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369F38u;
            // 0x369f3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369F4Cu;
            goto label_369f4c;
        }
    }
    ctx->pc = 0x369F40u;
    // 0x369f40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f44: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369f48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369f4c:
    // 0x369f4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f50: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369f54: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369f58: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369f58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369f5c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369F5Cu;
    {
        const bool branch_taken_0x369f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f5c) {
            ctx->pc = 0x369F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369F5Cu;
            // 0x369f60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369F70u;
            goto label_369f70;
        }
    }
    ctx->pc = 0x369F64u;
    // 0x369f64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f68: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369f6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369f70:
    // 0x369f70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f74: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369f78: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369f7c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369f7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369f80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369F80u;
    {
        const bool branch_taken_0x369f80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f80) {
            ctx->pc = 0x369F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369F80u;
            // 0x369f84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369F94u;
            goto label_369f94;
        }
    }
    ctx->pc = 0x369F88u;
    // 0x369f88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f8c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369f90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369f94:
    // 0x369f94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369f98: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369f9c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369fa0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369fa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369fa4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369FA4u;
    {
        const bool branch_taken_0x369fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369fa4) {
            ctx->pc = 0x369FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369FA4u;
            // 0x369fa8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369FB8u;
            goto label_369fb8;
        }
    }
    ctx->pc = 0x369FACu;
    // 0x369fac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369fb0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369fb4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x369fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_369fb8:
    // 0x369fb8: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x369FB8u;
    {
        const bool branch_taken_0x369fb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x369fb8) {
            ctx->pc = 0x369FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369FB8u;
            // 0x369fbc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369FD0u;
            goto label_369fd0;
        }
    }
    ctx->pc = 0x369FC0u;
    // 0x369fc0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x369fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x369fc4: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x369FC4u;
    SET_GPR_U32(ctx, 31, 0x369FCCu);
    ctx->pc = 0x369FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369FC4u;
            // 0x369fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369FCCu; }
        if (ctx->pc != 0x369FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369FCCu; }
        if (ctx->pc != 0x369FCCu) { return; }
    }
    ctx->pc = 0x369FCCu;
label_369fcc:
    // 0x369fcc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x369fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_369fd0:
    // 0x369fd0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369FD0u;
    {
        const bool branch_taken_0x369fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369fd0) {
            ctx->pc = 0x369FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369FD0u;
            // 0x369fd4: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369FE4u;
            goto label_369fe4;
        }
    }
    ctx->pc = 0x369FD8u;
    // 0x369fd8: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x369FD8u;
    SET_GPR_U32(ctx, 31, 0x369FE0u);
    ctx->pc = 0x369FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369FD8u;
            // 0x369fdc: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369FE0u; }
        if (ctx->pc != 0x369FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369FE0u; }
        if (ctx->pc != 0x369FE0u) { return; }
    }
    ctx->pc = 0x369FE0u;
label_369fe0:
    // 0x369fe0: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x369fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_369fe4:
    // 0x369fe4: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x369FE4u;
    {
        const bool branch_taken_0x369fe4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x369fe4) {
            ctx->pc = 0x369FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369FE4u;
            // 0x369fe8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A004u;
            goto label_36a004;
        }
    }
    ctx->pc = 0x369FECu;
    // 0x369fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ff0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x369ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x369ff4: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x369ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x369ff8: 0xc075188  jal         func_1D4620
    ctx->pc = 0x369FF8u;
    SET_GPR_U32(ctx, 31, 0x36A000u);
    ctx->pc = 0x369FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369FF8u;
            // 0x369ffc: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A000u; }
        if (ctx->pc != 0x36A000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A000u; }
        if (ctx->pc != 0x36A000u) { return; }
    }
    ctx->pc = 0x36A000u;
label_36a000:
    // 0x36a000: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x36a000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_36a004:
    // 0x36a004: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A004u;
    {
        const bool branch_taken_0x36a004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a004) {
            ctx->pc = 0x36A020u;
            goto label_36a020;
        }
    }
    ctx->pc = 0x36A00Cu;
    // 0x36a00c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x36a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x36a010: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A010u;
    {
        const bool branch_taken_0x36a010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a010) {
            ctx->pc = 0x36A020u;
            goto label_36a020;
        }
    }
    ctx->pc = 0x36A018u;
    // 0x36a018: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x36A018u;
    SET_GPR_U32(ctx, 31, 0x36A020u);
    ctx->pc = 0x36A01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A018u;
            // 0x36a01c: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A020u; }
        if (ctx->pc != 0x36A020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A020u; }
        if (ctx->pc != 0x36A020u) { return; }
    }
    ctx->pc = 0x36A020u;
label_36a020:
    // 0x36a020: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a024: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a028: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x36a028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x36a02c: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x36a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36a030: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36a030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x36a034: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a038: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a03c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x36a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36a040: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a044: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a048: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a04c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36a050: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36a054: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36a058: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a05c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A05Cu;
    {
        const bool branch_taken_0x36a05c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a05c) {
            ctx->pc = 0x36A060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A05Cu;
            // 0x36a060: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A070u;
            goto label_36a070;
        }
    }
    ctx->pc = 0x36A064u;
    // 0x36a064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a068: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36a068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x36a06c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36a070:
    // 0x36a070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a074: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a078: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a07c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a07cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a080: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A080u;
    {
        const bool branch_taken_0x36a080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a080) {
            ctx->pc = 0x36A084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A080u;
            // 0x36a084: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A094u;
            goto label_36a094;
        }
    }
    ctx->pc = 0x36A088u;
    // 0x36a088: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a08c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a090: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36a094:
    // 0x36a094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a098: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a09c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a0a0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a0a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a0a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A0A4u;
    {
        const bool branch_taken_0x36a0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a0a4) {
            ctx->pc = 0x36A0B4u;
            goto label_36a0b4;
        }
    }
    ctx->pc = 0x36A0ACu;
    // 0x36a0ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a0b0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_36a0b4:
    // 0x36a0b4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a0b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a0bc: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x36a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x36a0c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36a0c4: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x36a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x36a0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A0D4u;
            // 0x36a0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A0DCu;
    // 0x36a0dc: 0x0  nop
    ctx->pc = 0x36a0dcu;
    // NOP
}
