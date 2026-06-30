#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137C50
// Address: 0x137c50 - 0x137e30
void sub_00137C50_0x137c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137C50_0x137c50");
#endif

    switch (ctx->pc) {
        case 0x137c78u: goto label_137c78;
        case 0x137d30u: goto label_137d30;
        case 0x137de0u: goto label_137de0;
        case 0x137df4u: goto label_137df4;
        case 0x137e10u: goto label_137e10;
        default: break;
    }

    ctx->pc = 0x137c50u;

    // 0x137c50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x137c54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x137c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137c5c: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x137c5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137c60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137c64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x137c64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x137c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137c6c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x137C6Cu;
    {
        const bool branch_taken_0x137c6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C6Cu;
            // 0x137c70: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c6c) {
            ctx->pc = 0x137CC0u;
            goto label_137cc0;
        }
    }
    ctx->pc = 0x137C74u;
    // 0x137c74: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_137c78:
    // 0x137c78: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x137c7c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x137c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x137c80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x137c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x137c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137c88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137c8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137c90: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x137c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137c94: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x137C94u;
    {
        const bool branch_taken_0x137c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137c94) {
            ctx->pc = 0x137CA8u;
            goto label_137ca8;
        }
    }
    ctx->pc = 0x137C9Cu;
    // 0x137c9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137C9Cu;
    {
        const bool branch_taken_0x137c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C9Cu;
            // 0x137ca0: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c9c) {
            ctx->pc = 0x137CB0u;
            goto label_137cb0;
        }
    }
    ctx->pc = 0x137CA4u;
    // 0x137ca4: 0x0  nop
    ctx->pc = 0x137ca4u;
    // NOP
label_137ca8:
    // 0x137ca8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x137ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cac: 0x0  nop
    ctx->pc = 0x137cacu;
    // NOP
label_137cb0:
    // 0x137cb0: 0xea1823  subu        $v1, $a3, $t2
    ctx->pc = 0x137cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137cb4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x137cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137cb8: 0x5020ffef  beql        $at, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137CB8u;
    {
        const bool branch_taken_0x137cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137cb8) {
            ctx->pc = 0x137CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137CB8u;
            // 0x137cbc: 0x1471821  addu        $v1, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137c78;
        }
    }
    ctx->pc = 0x137CC0u;
label_137cc0:
    // 0x137cc0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x137cc4: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x137cc8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x137ccc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x137cccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x137cd0: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x137cd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x137cd4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x137CD4u;
    {
        const bool branch_taken_0x137cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CD4u;
            // 0x137cd8: 0x864821  addu        $t1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cd4) {
            ctx->pc = 0x137D00u;
            goto label_137d00;
        }
    }
    ctx->pc = 0x137CDCu;
    // 0x137cdc: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x137cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ce0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x137ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x137ce4: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x137ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ce8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x137ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x137cec: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x137cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137cf0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x137cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x137cf4: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x137cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137cf8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x137CF8u;
    {
        const bool branch_taken_0x137cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CF8u;
            // 0x137cfc: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cf8) {
            ctx->pc = 0x137E10u;
            goto label_137e10;
        }
    }
    ctx->pc = 0x137D00u;
label_137d00:
    // 0x137d00: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x137D00u;
    {
        const bool branch_taken_0x137d00 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D00u;
            // 0x137d04: 0x25280014  addiu       $t0, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d00) {
            ctx->pc = 0x137D24u;
            goto label_137d24;
        }
    }
    ctx->pc = 0x137D08u;
    // 0x137d08: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x137d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x137d0c: 0x142082a  slt         $at, $t2, $v0
    ctx->pc = 0x137d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137d10: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x137D10u;
    {
        const bool branch_taken_0x137d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d10) {
            ctx->pc = 0x137D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137D10u;
            // 0x137d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137D28u;
            goto label_137d28;
        }
    }
    ctx->pc = 0x137D18u;
    // 0x137d18: 0x2523ffec  addiu       $v1, $t1, -0x14
    ctx->pc = 0x137d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967276));
    // 0x137d1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137D1Cu;
    {
        const bool branch_taken_0x137d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D1Cu;
            // 0x137d20: 0x25220028  addiu       $v0, $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d1c) {
            ctx->pc = 0x137D38u;
            goto label_137d38;
        }
    }
    ctx->pc = 0x137D24u;
label_137d24:
    // 0x137d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x137d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137d28:
    // 0x137d28: 0xc04dd4c  jal         func_137530
    ctx->pc = 0x137D28u;
    SET_GPR_U32(ctx, 31, 0x137D30u);
    ctx->pc = 0x137530u;
    if (runtime->hasFunction(0x137530u)) {
        auto targetFn = runtime->lookupFunction(0x137530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D30u; }
        if (ctx->pc != 0x137D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137530_0x137530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D30u; }
        if (ctx->pc != 0x137D30u) { return; }
    }
    ctx->pc = 0x137D30u;
label_137d30:
    // 0x137d30: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x137D30u;
    {
        const bool branch_taken_0x137d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D30u;
            // 0x137d34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d30) {
            ctx->pc = 0x137E14u;
            goto label_137e14;
        }
    }
    ctx->pc = 0x137D38u;
label_137d38:
    // 0x137d38: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x137d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137d3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x137d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x137d40: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x137d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137d44: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137d48: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x137d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d4c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137d50: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x137d50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x137d54: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x137d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x137d58: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x137d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x137d5c: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x137d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x137d60: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x137d60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
    // 0x137d64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x137d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d68: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x137d6c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x137d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d70: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x137d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x137d74: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x137d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d78: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x137d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x137d7c: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x137d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d80: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x137d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x137d84: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x137d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d88: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x137d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x137d8c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x137d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d90: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x137d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x137d94: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x137d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d98: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x137d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x137d9c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x137d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137da0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x137da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x137da4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x137da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137da8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x137da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x137dac: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x137dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137db0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x137db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x137db4: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x137db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137db8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x137db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x137dbc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x137dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dc0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x137dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x137dc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x137dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dc8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x137dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x137dcc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x137dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dd0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x137dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x137dd4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x137dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dd8: 0xc04c7dc  jal         func_131F70
    ctx->pc = 0x137DD8u;
    SET_GPR_U32(ctx, 31, 0x137DE0u);
    ctx->pc = 0x137DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DD8u;
            // 0x137ddc: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F70u;
    if (runtime->hasFunction(0x131F70u)) {
        auto targetFn = runtime->lookupFunction(0x131F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DE0u; }
        if (ctx->pc != 0x137DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F70_0x131f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DE0u; }
        if (ctx->pc != 0x137DE0u) { return; }
    }
    ctx->pc = 0x137DE0u;
label_137de0:
    // 0x137de0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x137de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137de4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137de8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x137dec: 0xc04c7dc  jal         func_131F70
    ctx->pc = 0x137DECu;
    SET_GPR_U32(ctx, 31, 0x137DF4u);
    ctx->pc = 0x137DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DECu;
            // 0x137df0: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F70u;
    if (runtime->hasFunction(0x131F70u)) {
        auto targetFn = runtime->lookupFunction(0x131F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DF4u; }
        if (ctx->pc != 0x137DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F70_0x131f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DF4u; }
        if (ctx->pc != 0x137DF4u) { return; }
    }
    ctx->pc = 0x137DF4u;
label_137df4:
    // 0x137df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137df8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137dfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137dfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137e00: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x137e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x137e04: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x137e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137e08: 0xc04c940  jal         func_132500
    ctx->pc = 0x137E08u;
    SET_GPR_U32(ctx, 31, 0x137E10u);
    ctx->pc = 0x137E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E08u;
            // 0x137e0c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132500u;
    if (runtime->hasFunction(0x132500u)) {
        auto targetFn = runtime->lookupFunction(0x132500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E10u; }
        if (ctx->pc != 0x137E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132500_0x132500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E10u; }
        if (ctx->pc != 0x137E10u) { return; }
    }
    ctx->pc = 0x137E10u;
label_137e10:
    // 0x137e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_137e14:
    // 0x137e14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x137e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x137E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E1Cu;
            // 0x137e20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137E24u;
    // 0x137e24: 0x0  nop
    ctx->pc = 0x137e24u;
    // NOP
    // 0x137e28: 0x0  nop
    ctx->pc = 0x137e28u;
    // NOP
    // 0x137e2c: 0x0  nop
    ctx->pc = 0x137e2cu;
    // NOP
}
