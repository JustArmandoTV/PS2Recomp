#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00368AE0
// Address: 0x368ae0 - 0x368db0
void sub_00368AE0_0x368ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368AE0_0x368ae0");
#endif

    switch (ctx->pc) {
        case 0x368b54u: goto label_368b54;
        case 0x368bc8u: goto label_368bc8;
        case 0x368c94u: goto label_368c94;
        case 0x368ca8u: goto label_368ca8;
        case 0x368cc8u: goto label_368cc8;
        case 0x368ce8u: goto label_368ce8;
        default: break;
    }

    ctx->pc = 0x368ae0u;

    // 0x368ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368ae4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x368ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x368ae8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x368ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x368aec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x368aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x368af0: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x368af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x368af4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368afc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x368afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x368b00: 0xc4601940  lwc1        $f0, 0x1940($v1)
    ctx->pc = 0x368b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368b04: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x368b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x368b08: 0xc4a21944  lwc1        $f2, 0x1944($a1)
    ctx->pc = 0x368b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368b0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b10: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x368b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368b14: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x368b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x368b18: 0xc4611948  lwc1        $f1, 0x1948($v1)
    ctx->pc = 0x368b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b1c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x368b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x368b20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x368b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368b24: 0xc4a0194c  lwc1        $f0, 0x194C($a1)
    ctx->pc = 0x368b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368b28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368b2c: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x368b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x368b30: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x368b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x368b34: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x368b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x368b38: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x368b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x368b3c: 0x24a54080  addiu       $a1, $a1, 0x4080
    ctx->pc = 0x368b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16512));
    // 0x368b40: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x368b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x368b44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x368b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x368b48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x368b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x368b4c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x368b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x368b50: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x368b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_368b54:
    // 0x368b54: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x368b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x368b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368b5c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x368b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x368b60: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x368b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x368b64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368b68: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x368b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x368b6c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x368b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x368b70: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x368b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x368b74: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x368b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x368b78: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x368B78u;
    {
        const bool branch_taken_0x368b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368B78u;
            // 0x368b7c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368b78) {
            ctx->pc = 0x368B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_368b54;
        }
    }
    ctx->pc = 0x368B80u;
    // 0x368b80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368b84: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368b88: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x368b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x368b8c: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x368b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x368b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b94: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x368b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x368b98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368b9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x368b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x368ba0: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x368ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x368ba4: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x368ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x368ba8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368bac: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x368bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x368bb0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x368bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x368bb4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x368bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368bbc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x368bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368bc0: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x368BC0u;
    SET_GPR_U32(ctx, 31, 0x368BC8u);
    ctx->pc = 0x368BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368BC0u;
            // 0x368bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368BC8u; }
        if (ctx->pc != 0x368BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368BC8u; }
        if (ctx->pc != 0x368BC8u) { return; }
    }
    ctx->pc = 0x368BC8u;
label_368bc8:
    // 0x368bc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x368bcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368bd0: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x368bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x368bd4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x368bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x368bd8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368bd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368bdc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368BDCu;
    {
        const bool branch_taken_0x368bdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368bdc) {
            ctx->pc = 0x368BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368BDCu;
            // 0x368be0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368BF0u;
            goto label_368bf0;
        }
    }
    ctx->pc = 0x368BE4u;
    // 0x368be4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368be8: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x368be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x368bec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368bf0:
    // 0x368bf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368bf4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x368bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x368bf8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368bfc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368c00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368C00u;
    {
        const bool branch_taken_0x368c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c00) {
            ctx->pc = 0x368C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368C00u;
            // 0x368c04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368C14u;
            goto label_368c14;
        }
    }
    ctx->pc = 0x368C08u;
    // 0x368c08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c0c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x368c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x368c10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368c14:
    // 0x368c14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c18: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x368c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x368c1c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368c20: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368c20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368c24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368C24u;
    {
        const bool branch_taken_0x368c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c24) {
            ctx->pc = 0x368C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368C24u;
            // 0x368c28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368C38u;
            goto label_368c38;
        }
    }
    ctx->pc = 0x368C2Cu;
    // 0x368c2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c30: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x368c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x368c34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368c38:
    // 0x368c38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c3c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x368c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x368c40: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368c44: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368c44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368c48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368C48u;
    {
        const bool branch_taken_0x368c48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c48) {
            ctx->pc = 0x368C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368C48u;
            // 0x368c4c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368C5Cu;
            goto label_368c5c;
        }
    }
    ctx->pc = 0x368C50u;
    // 0x368c50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c54: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x368c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x368c58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x368c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_368c5c:
    // 0x368c5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c60: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x368c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x368c64: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368c68: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368c6c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368C6Cu;
    {
        const bool branch_taken_0x368c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c6c) {
            ctx->pc = 0x368C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368C6Cu;
            // 0x368c70: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368C80u;
            goto label_368c80;
        }
    }
    ctx->pc = 0x368C74u;
    // 0x368c74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368c78: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x368c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x368c7c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x368c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_368c80:
    // 0x368c80: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x368C80u;
    {
        const bool branch_taken_0x368c80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c80) {
            ctx->pc = 0x368C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368C80u;
            // 0x368c84: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368C98u;
            goto label_368c98;
        }
    }
    ctx->pc = 0x368C88u;
    // 0x368c88: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x368c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x368c8c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x368C8Cu;
    SET_GPR_U32(ctx, 31, 0x368C94u);
    ctx->pc = 0x368C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368C8Cu;
            // 0x368c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368C94u; }
        if (ctx->pc != 0x368C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368C94u; }
        if (ctx->pc != 0x368C94u) { return; }
    }
    ctx->pc = 0x368C94u;
label_368c94:
    // 0x368c94: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x368c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_368c98:
    // 0x368c98: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368C98u;
    {
        const bool branch_taken_0x368c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c98) {
            ctx->pc = 0x368C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368C98u;
            // 0x368c9c: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368CACu;
            goto label_368cac;
        }
    }
    ctx->pc = 0x368CA0u;
    // 0x368ca0: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x368CA0u;
    SET_GPR_U32(ctx, 31, 0x368CA8u);
    ctx->pc = 0x368CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368CA0u;
            // 0x368ca4: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368CA8u; }
        if (ctx->pc != 0x368CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368CA8u; }
        if (ctx->pc != 0x368CA8u) { return; }
    }
    ctx->pc = 0x368CA8u;
label_368ca8:
    // 0x368ca8: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x368ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_368cac:
    // 0x368cac: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x368CACu;
    {
        const bool branch_taken_0x368cac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x368cac) {
            ctx->pc = 0x368CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368CACu;
            // 0x368cb0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368CCCu;
            goto label_368ccc;
        }
    }
    ctx->pc = 0x368CB4u;
    // 0x368cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368cb8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x368cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x368cbc: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x368cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x368cc0: 0xc075188  jal         func_1D4620
    ctx->pc = 0x368CC0u;
    SET_GPR_U32(ctx, 31, 0x368CC8u);
    ctx->pc = 0x368CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368CC0u;
            // 0x368cc4: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368CC8u; }
        if (ctx->pc != 0x368CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368CC8u; }
        if (ctx->pc != 0x368CC8u) { return; }
    }
    ctx->pc = 0x368CC8u;
label_368cc8:
    // 0x368cc8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x368cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_368ccc:
    // 0x368ccc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x368CCCu;
    {
        const bool branch_taken_0x368ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ccc) {
            ctx->pc = 0x368CE8u;
            goto label_368ce8;
        }
    }
    ctx->pc = 0x368CD4u;
    // 0x368cd4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x368cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x368cd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x368CD8u;
    {
        const bool branch_taken_0x368cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x368cd8) {
            ctx->pc = 0x368CE8u;
            goto label_368ce8;
        }
    }
    ctx->pc = 0x368CE0u;
    // 0x368ce0: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x368CE0u;
    SET_GPR_U32(ctx, 31, 0x368CE8u);
    ctx->pc = 0x368CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368CE0u;
            // 0x368ce4: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368CE8u; }
        if (ctx->pc != 0x368CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368CE8u; }
        if (ctx->pc != 0x368CE8u) { return; }
    }
    ctx->pc = 0x368CE8u;
label_368ce8:
    // 0x368ce8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368cec: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368cf0: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x368cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x368cf4: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x368cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x368cf8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x368cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x368cfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368d00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x368d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x368d04: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x368d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x368d08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368d0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x368d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x368d10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x368d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368d14: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x368d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x368d18: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x368d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x368d1c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x368d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x368d20: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368d20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368d24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368D24u;
    {
        const bool branch_taken_0x368d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368d24) {
            ctx->pc = 0x368D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368D24u;
            // 0x368d28: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368D38u;
            goto label_368d38;
        }
    }
    ctx->pc = 0x368D2Cu;
    // 0x368d2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368d30: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x368d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x368d34: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x368d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_368d38:
    // 0x368d38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368d3c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x368d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x368d40: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368d44: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368d44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368d48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x368D48u;
    {
        const bool branch_taken_0x368d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368d48) {
            ctx->pc = 0x368D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368D48u;
            // 0x368d4c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368D5Cu;
            goto label_368d5c;
        }
    }
    ctx->pc = 0x368D50u;
    // 0x368d50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368d54: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x368d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x368d58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x368d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_368d5c:
    // 0x368d5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368d60: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x368d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x368d64: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x368d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x368d68: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x368d68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x368d6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x368D6Cu;
    {
        const bool branch_taken_0x368d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x368d6c) {
            ctx->pc = 0x368D7Cu;
            goto label_368d7c;
        }
    }
    ctx->pc = 0x368D74u;
    // 0x368d74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x368d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x368d78: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x368d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_368d7c:
    // 0x368d7c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x368d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x368d80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368d84: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x368d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x368d88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x368d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x368d8c: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x368d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x368d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x368D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368D9Cu;
            // 0x368da0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368DA4u;
    // 0x368da4: 0x0  nop
    ctx->pc = 0x368da4u;
    // NOP
    // 0x368da8: 0x0  nop
    ctx->pc = 0x368da8u;
    // NOP
    // 0x368dac: 0x0  nop
    ctx->pc = 0x368dacu;
    // NOP
}
