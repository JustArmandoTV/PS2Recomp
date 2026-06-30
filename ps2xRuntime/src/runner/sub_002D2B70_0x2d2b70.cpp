#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2B70
// Address: 0x2d2b70 - 0x2d2cf0
void sub_002D2B70_0x2d2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2B70_0x2d2b70");
#endif

    switch (ctx->pc) {
        case 0x2d2bc0u: goto label_2d2bc0;
        case 0x2d2bc8u: goto label_2d2bc8;
        case 0x2d2bdcu: goto label_2d2bdc;
        case 0x2d2c00u: goto label_2d2c00;
        case 0x2d2c08u: goto label_2d2c08;
        case 0x2d2c2cu: goto label_2d2c2c;
        case 0x2d2cc0u: goto label_2d2cc0;
        case 0x2d2cd4u: goto label_2d2cd4;
        default: break;
    }

    ctx->pc = 0x2d2b70u;

    // 0x2d2b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2b84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d2b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2b8c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x2d2b8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d2b90: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D2B90u;
    {
        const bool branch_taken_0x2d2b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B90u;
            // 0x2d2b94: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b90) {
            ctx->pc = 0x2D2CD4u;
            goto label_2d2cd4;
        }
    }
    ctx->pc = 0x2D2B98u;
    // 0x2d2b98: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x2d2b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2b9c: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x2d2b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2d2ba0: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2BA0u;
    {
        const bool branch_taken_0x2d2ba0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ba0) {
            ctx->pc = 0x2D2BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BA0u;
            // 0x2d2ba4: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2BCCu;
            goto label_2d2bcc;
        }
    }
    ctx->pc = 0x2D2BA8u;
    // 0x2d2ba8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d2bac: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d2bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d2bb0: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d2bb4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d2bb8: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D2BB8u;
    SET_GPR_U32(ctx, 31, 0x2D2BC0u);
    ctx->pc = 0x2D2BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BB8u;
            // 0x2d2bbc: 0x24a517b0  addiu       $a1, $a1, 0x17B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BC0u; }
        if (ctx->pc != 0x2D2BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BC0u; }
        if (ctx->pc != 0x2D2BC0u) { return; }
    }
    ctx->pc = 0x2D2BC0u;
label_2d2bc0:
    // 0x2d2bc0: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D2BC0u;
    SET_GPR_U32(ctx, 31, 0x2D2BC8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BC8u; }
        if (ctx->pc != 0x2D2BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BC8u; }
        if (ctx->pc != 0x2D2BC8u) { return; }
    }
    ctx->pc = 0x2D2BC8u;
label_2d2bc8:
    // 0x2d2bc8: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x2d2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2d2bcc:
    // 0x2d2bcc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2d2bd0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2d2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2d2bd4: 0xc040180  jal         func_100600
    ctx->pc = 0x2D2BD4u;
    SET_GPR_U32(ctx, 31, 0x2D2BDCu);
    ctx->pc = 0x2D2BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BD4u;
            // 0x2d2bd8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BDCu; }
        if (ctx->pc != 0x2D2BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BDCu; }
        if (ctx->pc != 0x2D2BDCu) { return; }
    }
    ctx->pc = 0x2D2BDCu;
label_2d2bdc:
    // 0x2d2bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2be0: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2BE0u;
    {
        const bool branch_taken_0x2d2be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2be0) {
            ctx->pc = 0x2D2BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BE0u;
            // 0x2d2be4: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2C0Cu;
            goto label_2d2c0c;
        }
    }
    ctx->pc = 0x2D2BE8u;
    // 0x2d2be8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d2bec: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d2becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d2bf0: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d2bf4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d2bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d2bf8: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D2BF8u;
    SET_GPR_U32(ctx, 31, 0x2D2C00u);
    ctx->pc = 0x2D2BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BF8u;
            // 0x2d2bfc: 0x24a51820  addiu       $a1, $a1, 0x1820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C00u; }
        if (ctx->pc != 0x2D2C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C00u; }
        if (ctx->pc != 0x2D2C00u) { return; }
    }
    ctx->pc = 0x2D2C00u;
label_2d2c00:
    // 0x2d2c00: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D2C00u;
    SET_GPR_U32(ctx, 31, 0x2D2C08u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C08u; }
        if (ctx->pc != 0x2D2C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C08u; }
        if (ctx->pc != 0x2D2C08u) { return; }
    }
    ctx->pc = 0x2D2C08u;
label_2d2c08:
    // 0x2d2c08: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x2d2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
label_2d2c0c:
    // 0x2d2c0c: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x2d2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x2d2c10: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d2c14: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2d2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d2c18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d2c1c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2d2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d2c20: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x2d2c20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d2c24: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D2C24u;
    {
        const bool branch_taken_0x2d2c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c24) {
            ctx->pc = 0x2D2C78u;
            goto label_2d2c78;
        }
    }
    ctx->pc = 0x2D2C2Cu;
label_2d2c2c:
    // 0x2d2c2c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2C2Cu;
    {
        const bool branch_taken_0x2d2c2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c2c) {
            ctx->pc = 0x2D2C58u;
            goto label_2d2c58;
        }
    }
    ctx->pc = 0x2D2C34u;
    // 0x2d2c34: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d2c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2c38: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d2c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2c3c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d2c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2c40: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2c44: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x2d2c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d2c48: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2d2c48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d2c4c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2d2c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d2c50: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d2c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d2c54: 0x0  nop
    ctx->pc = 0x2d2c54u;
    // NOP
label_2d2c58:
    // 0x2d2c58: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d2c5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2d2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d2c60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2d2c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d2c64: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2d2c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d2c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2c6c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D2C6Cu;
    {
        const bool branch_taken_0x2d2c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C6Cu;
            // 0x2d2c70: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c6c) {
            ctx->pc = 0x2D2C2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2c2c;
        }
    }
    ctx->pc = 0x2D2C74u;
    // 0x2d2c74: 0x0  nop
    ctx->pc = 0x2d2c74u;
    // NOP
label_2d2c78:
    // 0x2d2c78: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2d2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2c7c: 0x5052000e  beql        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2C7Cu;
    {
        const bool branch_taken_0x2d2c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2d2c7c) {
            ctx->pc = 0x2D2C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C7Cu;
            // 0x2d2c80: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CB8u;
            goto label_2d2cb8;
        }
    }
    ctx->pc = 0x2D2C84u;
    // 0x2d2c84: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2c88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d2c8c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2d2c90: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2d2c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c98: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d2c9c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2d2ca0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2d2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2d2ca4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2d2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d2ca8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d2cac: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2d2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2d2cb0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2d2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2d2cb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d2cb8:
    // 0x2d2cb8: 0xc0b6460  jal         func_2D9180
    ctx->pc = 0x2D2CB8u;
    SET_GPR_U32(ctx, 31, 0x2D2CC0u);
    ctx->pc = 0x2D9180u;
    if (runtime->hasFunction(0x2D9180u)) {
        auto targetFn = runtime->lookupFunction(0x2D9180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CC0u; }
        if (ctx->pc != 0x2D2CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9180_0x2d9180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CC0u; }
        if (ctx->pc != 0x2D2CC0u) { return; }
    }
    ctx->pc = 0x2D2CC0u;
label_2d2cc0:
    // 0x2d2cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2cc4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2CC4u;
    {
        const bool branch_taken_0x2d2cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cc4) {
            ctx->pc = 0x2D2CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CC4u;
            // 0x2d2cc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CD8u;
            goto label_2d2cd8;
        }
    }
    ctx->pc = 0x2D2CCCu;
    // 0x2d2ccc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2CCCu;
    SET_GPR_U32(ctx, 31, 0x2D2CD4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CD4u; }
        if (ctx->pc != 0x2D2CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CD4u; }
        if (ctx->pc != 0x2D2CD4u) { return; }
    }
    ctx->pc = 0x2D2CD4u;
label_2d2cd4:
    // 0x2d2cd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d2cd8:
    // 0x2d2cd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CE4u;
            // 0x2d2ce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2CECu;
    // 0x2d2cec: 0x0  nop
    ctx->pc = 0x2d2cecu;
    // NOP
}
