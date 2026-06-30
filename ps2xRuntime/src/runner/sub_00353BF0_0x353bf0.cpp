#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353BF0
// Address: 0x353bf0 - 0x353d60
void sub_00353BF0_0x353bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353BF0_0x353bf0");
#endif

    switch (ctx->pc) {
        case 0x353c7cu: goto label_353c7c;
        case 0x353cacu: goto label_353cac;
        case 0x353cf4u: goto label_353cf4;
        case 0x353d0cu: goto label_353d0c;
        case 0x353d40u: goto label_353d40;
        default: break;
    }

    ctx->pc = 0x353bf0u;

    // 0x353bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x353bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x353bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x353c00: 0x8ca30518  lw          $v1, 0x518($a1)
    ctx->pc = 0x353c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1304)));
    // 0x353c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x353c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c08: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x353c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x353c0c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x353C0Cu;
    {
        const bool branch_taken_0x353c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353C0Cu;
            // 0x353c10: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c0c) {
            ctx->pc = 0x353D40u;
            goto label_353d40;
        }
    }
    ctx->pc = 0x353C14u;
    // 0x353c14: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x353c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x353c18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x353c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353c1c: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x353C1Cu;
    {
        const bool branch_taken_0x353c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353c1c) {
            ctx->pc = 0x353C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353C1Cu;
            // 0x353c20: 0xc480002c  lwc1        $f0, 0x2C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x353C70u;
            goto label_353c70;
        }
    }
    ctx->pc = 0x353C24u;
    // 0x353c24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x353c28: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x353c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x353c2c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x353c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x353c30: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x353c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x353c34: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353C34u;
    {
        const bool branch_taken_0x353c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x353c34) {
            ctx->pc = 0x353C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353C34u;
            // 0x353c38: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353C54u;
            goto label_353c54;
        }
    }
    ctx->pc = 0x353C3Cu;
    // 0x353c3c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x353c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x353c40: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353C40u;
    {
        const bool branch_taken_0x353c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x353c40) {
            ctx->pc = 0x353C50u;
            goto label_353c50;
        }
    }
    ctx->pc = 0x353C48u;
    // 0x353c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353C48u;
    {
        const bool branch_taken_0x353c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353C48u;
            // 0x353c4c: 0x8e020d78  lw          $v0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c48) {
            ctx->pc = 0x353C60u;
            goto label_353c60;
        }
    }
    ctx->pc = 0x353C50u;
label_353c50:
    // 0x353c50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x353c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_353c54:
    // 0x353c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x353c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353c58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353C58u;
    {
        const bool branch_taken_0x353c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353C58u;
            // 0x353c5c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c58) {
            ctx->pc = 0x353C6Cu;
            goto label_353c6c;
        }
    }
    ctx->pc = 0x353C60u;
label_353c60:
    // 0x353c60: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x353c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353c64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x353c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x353c68: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x353c68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_353c6c:
    // 0x353c6c: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x353c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353c70:
    // 0x353c70: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x353c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x353c74: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x353C74u;
    SET_GPR_U32(ctx, 31, 0x353C7Cu);
    ctx->pc = 0x353C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353C74u;
            // 0x353c78: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353C7Cu; }
        if (ctx->pc != 0x353C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353C7Cu; }
        if (ctx->pc != 0x353C7Cu) { return; }
    }
    ctx->pc = 0x353C7Cu;
label_353c7c:
    // 0x353c7c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x353c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x353c80: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x353c80u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x353c84: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x353C84u;
    {
        const bool branch_taken_0x353c84 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x353C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353C84u;
            // 0x353c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c84) {
            ctx->pc = 0x353C9Cu;
            goto label_353c9c;
        }
    }
    ctx->pc = 0x353C8Cu;
    // 0x353c8c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x353c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x353c90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x353C90u;
    {
        const bool branch_taken_0x353c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c90) {
            ctx->pc = 0x353C9Cu;
            goto label_353c9c;
        }
    }
    ctx->pc = 0x353C98u;
    // 0x353c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_353c9c:
    // 0x353c9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x353C9Cu;
    {
        const bool branch_taken_0x353c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x353c9c) {
            ctx->pc = 0x353CB8u;
            goto label_353cb8;
        }
    }
    ctx->pc = 0x353CA4u;
    // 0x353ca4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x353CA4u;
    SET_GPR_U32(ctx, 31, 0x353CACu);
    ctx->pc = 0x353CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353CA4u;
            // 0x353ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353CACu; }
        if (ctx->pc != 0x353CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353CACu; }
        if (ctx->pc != 0x353CACu) { return; }
    }
    ctx->pc = 0x353CACu;
label_353cac:
    // 0x353cac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x353CACu;
    {
        const bool branch_taken_0x353cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353cac) {
            ctx->pc = 0x353CB8u;
            goto label_353cb8;
        }
    }
    ctx->pc = 0x353CB4u;
    // 0x353cb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x353cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353cb8:
    // 0x353cb8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x353CB8u;
    {
        const bool branch_taken_0x353cb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x353cb8) {
            ctx->pc = 0x353CD0u;
            goto label_353cd0;
        }
    }
    ctx->pc = 0x353CC0u;
    // 0x353cc0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x353cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x353cc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x353cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353cc8: 0x5483001e  bnel        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x353CC8u;
    {
        const bool branch_taken_0x353cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x353cc8) {
            ctx->pc = 0x353CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353CC8u;
            // 0x353ccc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353D44u;
            goto label_353d44;
        }
    }
    ctx->pc = 0x353CD0u;
label_353cd0:
    // 0x353cd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x353cd4: 0x92040d98  lbu         $a0, 0xD98($s0)
    ctx->pc = 0x353cd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x353cd8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x353cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x353cdc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x353cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x353ce0: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x353ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x353ce4: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x353ce8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353ce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cec: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x353CECu;
    SET_GPR_U32(ctx, 31, 0x353CF4u);
    ctx->pc = 0x353CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353CECu;
            // 0x353cf0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353CF4u; }
        if (ctx->pc != 0x353CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353CF4u; }
        if (ctx->pc != 0x353CF4u) { return; }
    }
    ctx->pc = 0x353CF4u;
label_353cf4:
    // 0x353cf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x353cf8: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x353cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x353cfc: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x353cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x353d00: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x353d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x353d04: 0xc040180  jal         func_100600
    ctx->pc = 0x353D04u;
    SET_GPR_U32(ctx, 31, 0x353D0Cu);
    ctx->pc = 0x353D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353D04u;
            // 0x353d08: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353D0Cu; }
        if (ctx->pc != 0x353D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353D0Cu; }
        if (ctx->pc != 0x353D0Cu) { return; }
    }
    ctx->pc = 0x353D0Cu;
label_353d0c:
    // 0x353d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x353d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d10: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x353D10u;
    {
        const bool branch_taken_0x353d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d10) {
            ctx->pc = 0x353D40u;
            goto label_353d40;
        }
    }
    ctx->pc = 0x353D18u;
    // 0x353d18: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x353d18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x353d1c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x353d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x353d20: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x353d20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x353d24: 0x262702d8  addiu       $a3, $s1, 0x2D8
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
    // 0x353d28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x353d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353d2c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353d30: 0x3445aaac  ori         $a1, $v0, 0xAAAC
    ctx->pc = 0x353d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43692);
    // 0x353d34: 0x24081041  addiu       $t0, $zero, 0x1041
    ctx->pc = 0x353d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4161));
    // 0x353d38: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x353D38u;
    SET_GPR_U32(ctx, 31, 0x353D40u);
    ctx->pc = 0x353D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353D38u;
            // 0x353d3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353D40u; }
        if (ctx->pc != 0x353D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353D40u; }
        if (ctx->pc != 0x353D40u) { return; }
    }
    ctx->pc = 0x353D40u;
label_353d40:
    // 0x353d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_353d44:
    // 0x353d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x353D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353D4Cu;
            // 0x353d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353D54u;
    // 0x353d54: 0x0  nop
    ctx->pc = 0x353d54u;
    // NOP
    // 0x353d58: 0x0  nop
    ctx->pc = 0x353d58u;
    // NOP
    // 0x353d5c: 0x0  nop
    ctx->pc = 0x353d5cu;
    // NOP
}
