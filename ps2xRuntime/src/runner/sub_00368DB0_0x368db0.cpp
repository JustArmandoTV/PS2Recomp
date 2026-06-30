#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00368DB0
// Address: 0x368db0 - 0x369080
void sub_00368DB0_0x368db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368DB0_0x368db0");
#endif

    switch (ctx->pc) {
        case 0x368e24u: goto label_368e24;
        case 0x368e98u: goto label_368e98;
        case 0x368f64u: goto label_368f64;
        case 0x368f78u: goto label_368f78;
        case 0x368f98u: goto label_368f98;
        case 0x368fb8u: goto label_368fb8;
        default: break;
    }

    ctx->pc = 0x368db0u;

    // 0x368db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368db4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x368db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x368db8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x368db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x368dbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x368dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x368dc0: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x368dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x368dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368dcc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x368dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x368dd0: 0xc4601930  lwc1        $f0, 0x1930($v1)
    ctx->pc = 0x368dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368dd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x368dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x368dd8: 0xc4a21934  lwc1        $f2, 0x1934($a1)
    ctx->pc = 0x368dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368de0: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x368de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368de4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x368de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x368de8: 0xc4611938  lwc1        $f1, 0x1938($v1)
    ctx->pc = 0x368de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368dec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x368decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x368df0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x368df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368df4: 0xc4a0193c  lwc1        $f0, 0x193C($a1)
    ctx->pc = 0x368df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368df8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368dfc: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x368dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x368e00: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x368e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x368e04: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x368e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x368e08: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x368e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x368e0c: 0x24a54080  addiu       $a1, $a1, 0x4080
    ctx->pc = 0x368e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16512));
    // 0x368e10: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x368e14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x368e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x368e18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x368e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x368e1c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x368e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x368e20: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x368e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_368e24:
    // 0x368e24: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x368e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368e2c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x368e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x368e30: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x368e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x368e34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368e38: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x368e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x368e3c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x368e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x368e40: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x368e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x368e44: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x368e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x368e48: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x368E48u;
    {
        const bool branch_taken_0x368e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368E48u;
            // 0x368e4c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e48) {
            ctx->pc = 0x368E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_368e24;
        }
    }
    ctx->pc = 0x368E50u;
    // 0x368e50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368e54: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368e58: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x368e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x368e5c: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x368e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x368e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e64: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x368e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x368e68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368e6c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x368e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x368e70: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x368e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x368e74: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x368e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x368e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368e7c: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x368e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x368e80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x368e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x368e84: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x368e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368e88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368e8c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x368e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368e90: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x368E90u;
    SET_GPR_U32(ctx, 31, 0x368E98u);
    ctx->pc = 0x368E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368E90u;
            // 0x368e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368E98u; }
        if (ctx->pc != 0x368E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368E98u; }
        if (ctx->pc != 0x368E98u) { return; }
    }
    ctx->pc = 0x368E98u;
label_368e98:
    // 0x368e98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x368e9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368ea0: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x368ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x368ea4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x368ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x368ea8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368ea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368eac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368EACu;
    {
        const bool branch_taken_0x368eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368eac) {
            ctx->pc = 0x368EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368EACu;
            // 0x368eb0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368EC0u;
            goto label_368ec0;
        }
    }
    ctx->pc = 0x368EB4u;
    // 0x368eb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368eb8: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x368eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x368ebc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368ec0:
    // 0x368ec0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368ec4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x368ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x368ec8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368ecc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368ed0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368ED0u;
    {
        const bool branch_taken_0x368ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ed0) {
            ctx->pc = 0x368ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368ED0u;
            // 0x368ed4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368EE4u;
            goto label_368ee4;
        }
    }
    ctx->pc = 0x368ED8u;
    // 0x368ed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368edc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x368edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x368ee0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368ee4:
    // 0x368ee4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368ee8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x368ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x368eec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368ef0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368ef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368ef4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368EF4u;
    {
        const bool branch_taken_0x368ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ef4) {
            ctx->pc = 0x368EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368EF4u;
            // 0x368ef8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368F08u;
            goto label_368f08;
        }
    }
    ctx->pc = 0x368EFCu;
    // 0x368efc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368f00: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x368f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x368f04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368f08:
    // 0x368f08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368f0c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x368f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x368f10: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368f14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368f14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368f18: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368F18u;
    {
        const bool branch_taken_0x368f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f18) {
            ctx->pc = 0x368F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368F18u;
            // 0x368f1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368F2Cu;
            goto label_368f2c;
        }
    }
    ctx->pc = 0x368F20u;
    // 0x368f20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368f24: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x368f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x368f28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368f2c:
    // 0x368f2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368f30: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x368f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x368f34: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368f38: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368f3c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368F3Cu;
    {
        const bool branch_taken_0x368f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f3c) {
            ctx->pc = 0x368F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368F3Cu;
            // 0x368f40: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368F50u;
            goto label_368f50;
        }
    }
    ctx->pc = 0x368F44u;
    // 0x368f44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368f48: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x368f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x368f4c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x368f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_368f50:
    // 0x368f50: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x368F50u;
    {
        const bool branch_taken_0x368f50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f50) {
            ctx->pc = 0x368F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368F50u;
            // 0x368f54: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368F68u;
            goto label_368f68;
        }
    }
    ctx->pc = 0x368F58u;
    // 0x368f58: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x368f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x368f5c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x368F5Cu;
    SET_GPR_U32(ctx, 31, 0x368F64u);
    ctx->pc = 0x368F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368F5Cu;
            // 0x368f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368F64u; }
        if (ctx->pc != 0x368F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368F64u; }
        if (ctx->pc != 0x368F64u) { return; }
    }
    ctx->pc = 0x368F64u;
label_368f64:
    // 0x368f64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x368f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_368f68:
    // 0x368f68: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368F68u;
    {
        const bool branch_taken_0x368f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f68) {
            ctx->pc = 0x368F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368F68u;
            // 0x368f6c: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368F7Cu;
            goto label_368f7c;
        }
    }
    ctx->pc = 0x368F70u;
    // 0x368f70: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x368F70u;
    SET_GPR_U32(ctx, 31, 0x368F78u);
    ctx->pc = 0x368F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368F70u;
            // 0x368f74: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368F78u; }
        if (ctx->pc != 0x368F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368F78u; }
        if (ctx->pc != 0x368F78u) { return; }
    }
    ctx->pc = 0x368F78u;
label_368f78:
    // 0x368f78: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x368f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_368f7c:
    // 0x368f7c: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x368F7Cu;
    {
        const bool branch_taken_0x368f7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f7c) {
            ctx->pc = 0x368F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368F7Cu;
            // 0x368f80: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368F9Cu;
            goto label_368f9c;
        }
    }
    ctx->pc = 0x368F84u;
    // 0x368f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f88: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x368f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x368f8c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x368f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x368f90: 0xc075188  jal         func_1D4620
    ctx->pc = 0x368F90u;
    SET_GPR_U32(ctx, 31, 0x368F98u);
    ctx->pc = 0x368F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368F90u;
            // 0x368f94: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368F98u; }
        if (ctx->pc != 0x368F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368F98u; }
        if (ctx->pc != 0x368F98u) { return; }
    }
    ctx->pc = 0x368F98u;
label_368f98:
    // 0x368f98: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x368f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_368f9c:
    // 0x368f9c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x368F9Cu;
    {
        const bool branch_taken_0x368f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f9c) {
            ctx->pc = 0x368FB8u;
            goto label_368fb8;
        }
    }
    ctx->pc = 0x368FA4u;
    // 0x368fa4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x368fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x368fa8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x368FA8u;
    {
        const bool branch_taken_0x368fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x368fa8) {
            ctx->pc = 0x368FB8u;
            goto label_368fb8;
        }
    }
    ctx->pc = 0x368FB0u;
    // 0x368fb0: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x368FB0u;
    SET_GPR_U32(ctx, 31, 0x368FB8u);
    ctx->pc = 0x368FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368FB0u;
            // 0x368fb4: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368FB8u; }
        if (ctx->pc != 0x368FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368FB8u; }
        if (ctx->pc != 0x368FB8u) { return; }
    }
    ctx->pc = 0x368FB8u;
label_368fb8:
    // 0x368fb8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368fbc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368fc0: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x368fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x368fc4: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x368fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x368fc8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x368fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x368fcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368fd0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x368fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x368fd4: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x368fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x368fd8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368fdc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x368fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x368fe0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368fe4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x368fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x368fe8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x368fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x368fec: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x368fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x368ff0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368ff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368ff4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368FF4u;
    {
        const bool branch_taken_0x368ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ff4) {
            ctx->pc = 0x368FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368FF4u;
            // 0x368ff8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369008u;
            goto label_369008;
        }
    }
    ctx->pc = 0x368FFCu;
    // 0x368ffc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369000: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369004: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_369008:
    // 0x369008: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36900c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369010: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369014: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369018: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369018u;
    {
        const bool branch_taken_0x369018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369018) {
            ctx->pc = 0x36901Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369018u;
            // 0x36901c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36902Cu;
            goto label_36902c;
        }
    }
    ctx->pc = 0x369020u;
    // 0x369020: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369024: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369028: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36902c:
    // 0x36902c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36902cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369030: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369034: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369038: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36903c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36903Cu;
    {
        const bool branch_taken_0x36903c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36903c) {
            ctx->pc = 0x36904Cu;
            goto label_36904c;
        }
    }
    ctx->pc = 0x369044u;
    // 0x369044: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369048: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_36904c:
    // 0x36904c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36904cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369050: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369054: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x369054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x369058: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x369058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36905c: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x36905cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x369060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x369060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36906c: 0x3e00008  jr          $ra
    ctx->pc = 0x36906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36906Cu;
            // 0x369070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x369074u;
    // 0x369074: 0x0  nop
    ctx->pc = 0x369074u;
    // NOP
    // 0x369078: 0x0  nop
    ctx->pc = 0x369078u;
    // NOP
    // 0x36907c: 0x0  nop
    ctx->pc = 0x36907cu;
    // NOP
}
