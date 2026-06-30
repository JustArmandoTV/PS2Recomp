#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B0C0
// Address: 0x28b0c0 - 0x28b390
void sub_0028B0C0_0x28b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B0C0_0x28b0c0");
#endif

    switch (ctx->pc) {
        case 0x28b158u: goto label_28b158;
        case 0x28b178u: goto label_28b178;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b234u: goto label_28b234;
        case 0x28b260u: goto label_28b260;
        case 0x28b280u: goto label_28b280;
        case 0x28b290u: goto label_28b290;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b34cu: goto label_28b34c;
        default: break;
    }

    ctx->pc = 0x28b0c0u;

    // 0x28b0c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x28b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x28b0c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28b0c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x28b0cc: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x28b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x28b0d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x28b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x28b0d4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x28b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x28b0d8: 0x27be0108  addiu       $fp, $sp, 0x108
    ctx->pc = 0x28b0d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x28b0dc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x28b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x28b0e0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28b0e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28b0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x28b0e8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x28b0e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28b0f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28b0f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x28b0f8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28b0f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28b100: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x28b100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28b104: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28b108: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x28b108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b10c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28b110: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b114: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28b114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28b118: 0x27b00104  addiu       $s0, $sp, 0x104
    ctx->pc = 0x28b118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x28b11c: 0xa3a0013c  sb          $zero, 0x13C($sp)
    ctx->pc = 0x28b11cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b120: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x28b120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x28b124: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x28b124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x28b128: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28b128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28b12c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x28b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x28b130: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x28b134: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x28b134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x28b138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28b138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28b13c: 0xc4b40014  lwc1        $f20, 0x14($a1)
    ctx->pc = 0x28b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28b140: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x28b140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x28b144: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x28b144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x28b148: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x28B148u;
    {
        const bool branch_taken_0x28b148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B148u;
            // 0x28b14c: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b148) {
            ctx->pc = 0x28B1C0u;
            goto label_28b1c0;
        }
    }
    ctx->pc = 0x28B150u;
    // 0x28b150: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28b150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b154: 0x0  nop
    ctx->pc = 0x28b154u;
    // NOP
label_28b158:
    // 0x28b158: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x28b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28b15c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b160: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28b164: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28b164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28b168: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B168u;
    {
        const bool branch_taken_0x28b168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B168u;
            // 0x28b16c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b168) {
            ctx->pc = 0x28B178u;
            goto label_28b178;
        }
    }
    ctx->pc = 0x28B170u;
    // 0x28b170: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28B170u;
    SET_GPR_U32(ctx, 31, 0x28B178u);
    ctx->pc = 0x28B174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B170u;
            // 0x28b174: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B178u; }
        if (ctx->pc != 0x28B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B178u; }
        if (ctx->pc != 0x28B178u) { return; }
    }
    ctx->pc = 0x28B178u;
label_28b178:
    // 0x28b178: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b17c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28b180: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x28b180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28b184: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28b184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28b188: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28b188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28b18c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28b190: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28b194: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28b19c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28b19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28b1a0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x28b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b1a4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28b1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28b1a8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x28b1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b1ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28b1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28b1b0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x28b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b1b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28b1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28b1b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28B1B8u;
    {
        const bool branch_taken_0x28b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1B8u;
            // 0x28b1bc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1b8) {
            ctx->pc = 0x28B158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b158;
        }
    }
    ctx->pc = 0x28B1C0u;
label_28b1c0:
    // 0x28b1c0: 0x82a20001  lb          $v0, 0x1($s5)
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x28b1c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B1C4u;
    {
        const bool branch_taken_0x28b1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1C4u;
            // 0x28b1c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1c4) {
            ctx->pc = 0x28B1E8u;
            goto label_28b1e8;
        }
    }
    ctx->pc = 0x28B1CCu;
    // 0x28b1cc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x28b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28b1d0: 0xc0a1498  jal         func_285260
    ctx->pc = 0x28B1D0u;
    SET_GPR_U32(ctx, 31, 0x28B1D8u);
    ctx->pc = 0x28B1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1D0u;
            // 0x28b1d4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285260u;
    if (runtime->hasFunction(0x285260u)) {
        auto targetFn = runtime->lookupFunction(0x285260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1D8u; }
        if (ctx->pc != 0x28B1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285260_0x285260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1D8u; }
        if (ctx->pc != 0x28B1D8u) { return; }
    }
    ctx->pc = 0x28B1D8u;
label_28b1d8:
    // 0x28b1d8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b1dc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x28b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28b1e0: 0xc0a1498  jal         func_285260
    ctx->pc = 0x28B1E0u;
    SET_GPR_U32(ctx, 31, 0x28B1E8u);
    ctx->pc = 0x28B1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1E0u;
            // 0x28b1e4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285260u;
    if (runtime->hasFunction(0x285260u)) {
        auto targetFn = runtime->lookupFunction(0x285260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1E8u; }
        if (ctx->pc != 0x28B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285260_0x285260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1E8u; }
        if (ctx->pc != 0x28B1E8u) { return; }
    }
    ctx->pc = 0x28B1E8u;
label_28b1e8:
    // 0x28b1e8: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x28b1ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28b1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28b1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1f8: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x28b1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28b1fc: 0x27a9013c  addiu       $t1, $sp, 0x13C
    ctx->pc = 0x28b1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x28b200: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x28b200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b204: 0xc0a0f38  jal         func_283CE0
    ctx->pc = 0x28B204u;
    SET_GPR_U32(ctx, 31, 0x28B20Cu);
    ctx->pc = 0x28B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B204u;
            // 0x28b208: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CE0u;
    if (runtime->hasFunction(0x283CE0u)) {
        auto targetFn = runtime->lookupFunction(0x283CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B20Cu; }
        if (ctx->pc != 0x28B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283CE0_0x283ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B20Cu; }
        if (ctx->pc != 0x28B20Cu) { return; }
    }
    ctx->pc = 0x28B20Cu;
label_28b20c:
    // 0x28b20c: 0x83a2013c  lb          $v0, 0x13C($sp)
    ctx->pc = 0x28b20cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28b210: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28B210u;
    {
        const bool branch_taken_0x28b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B210u;
            // 0x28b214: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b210) {
            ctx->pc = 0x28B240u;
            goto label_28b240;
        }
    }
    ctx->pc = 0x28B218u;
    // 0x28b218: 0x27a40134  addiu       $a0, $sp, 0x134
    ctx->pc = 0x28b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x28b21c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28b220: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b224: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28b224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b228: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x28b228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b22c: 0xc0a2d88  jal         func_28B620
    ctx->pc = 0x28B22Cu;
    SET_GPR_U32(ctx, 31, 0x28B234u);
    ctx->pc = 0x28B230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B22Cu;
            // 0x28b230: 0x27a90120  addiu       $t1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B620u;
    if (runtime->hasFunction(0x28B620u)) {
        auto targetFn = runtime->lookupFunction(0x28B620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B234u; }
        if (ctx->pc != 0x28B234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B620_0x28b620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B234u; }
        if (ctx->pc != 0x28B234u) { return; }
    }
    ctx->pc = 0x28B234u;
label_28b234:
    // 0x28b234: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28B234u;
    {
        const bool branch_taken_0x28b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B234u;
            // 0x28b238: 0x83b00134  lb          $s0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b234) {
            ctx->pc = 0x28B268u;
            goto label_28b268;
        }
    }
    ctx->pc = 0x28B23Cu;
    // 0x28b23c: 0x0  nop
    ctx->pc = 0x28b23cu;
    // NOP
label_28b240:
    // 0x28b240: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28b240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b244: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28b248: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x28b248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x28b24c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b250: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28b250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b254: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x28b254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b258: 0xc0a2de0  jal         func_28B780
    ctx->pc = 0x28B258u;
    SET_GPR_U32(ctx, 31, 0x28B260u);
    ctx->pc = 0x28B25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B258u;
            // 0x28b25c: 0x27a90120  addiu       $t1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B780u;
    if (runtime->hasFunction(0x28B780u)) {
        auto targetFn = runtime->lookupFunction(0x28B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B260u; }
        if (ctx->pc != 0x28B260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B780_0x28b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B260u; }
        if (ctx->pc != 0x28B260u) { return; }
    }
    ctx->pc = 0x28B260u;
label_28b260:
    // 0x28b260: 0x83b00130  lb          $s0, 0x130($sp)
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28b264: 0x0  nop
    ctx->pc = 0x28b264u;
    // NOP
label_28b268:
    // 0x28b268: 0x82a20001  lb          $v0, 0x1($s5)
    ctx->pc = 0x28b268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x28b26c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B26Cu;
    {
        const bool branch_taken_0x28b26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B26Cu;
            // 0x28b270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b26c) {
            ctx->pc = 0x28B290u;
            goto label_28b290;
        }
    }
    ctx->pc = 0x28B274u;
    // 0x28b274: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x28b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28b278: 0xc0a154c  jal         func_285530
    ctx->pc = 0x28B278u;
    SET_GPR_U32(ctx, 31, 0x28B280u);
    ctx->pc = 0x28B27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B278u;
            // 0x28b27c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285530u;
    if (runtime->hasFunction(0x285530u)) {
        auto targetFn = runtime->lookupFunction(0x285530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B280u; }
        if (ctx->pc != 0x28B280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285530_0x285530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B280u; }
        if (ctx->pc != 0x28B280u) { return; }
    }
    ctx->pc = 0x28B280u;
label_28b280:
    // 0x28b280: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b284: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x28b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28b288: 0xc0a154c  jal         func_285530
    ctx->pc = 0x28B288u;
    SET_GPR_U32(ctx, 31, 0x28B290u);
    ctx->pc = 0x28B28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B288u;
            // 0x28b28c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285530u;
    if (runtime->hasFunction(0x285530u)) {
        auto targetFn = runtime->lookupFunction(0x285530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B290u; }
        if (ctx->pc != 0x28B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285530_0x285530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B290u; }
        if (ctx->pc != 0x28B290u) { return; }
    }
    ctx->pc = 0x28B290u;
label_28b290:
    // 0x28b290: 0xa2f00000  sb          $s0, 0x0($s7)
    ctx->pc = 0x28b290u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28b294: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x28b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28b298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28b29c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28b2a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28B2A0u;
    {
        const bool branch_taken_0x28b2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b2a0) {
            ctx->pc = 0x28B2D0u;
            goto label_28b2d0;
        }
    }
    ctx->pc = 0x28B2A8u;
    // 0x28b2a8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x28b2ac: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28b2b0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28b2b4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28b2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28b2b8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x28b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28b2bc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28b2c0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28b2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28b2c4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28B2C4u;
    SET_GPR_U32(ctx, 31, 0x28B2CCu);
    ctx->pc = 0x28B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2C4u;
            // 0x28b2c8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2CCu; }
        if (ctx->pc != 0x28B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2CCu; }
        if (ctx->pc != 0x28B2CCu) { return; }
    }
    ctx->pc = 0x28B2CCu;
label_28b2cc:
    // 0x28b2cc: 0x0  nop
    ctx->pc = 0x28b2ccu;
    // NOP
label_28b2d0:
    // 0x28b2d0: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x28b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x28b2d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b2d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28b2dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28b2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28b2e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28B2E0u;
    {
        const bool branch_taken_0x28b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b2e0) {
            ctx->pc = 0x28B310u;
            goto label_28b310;
        }
    }
    ctx->pc = 0x28B2E8u;
    // 0x28b2e8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x28b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28b2ec: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28b2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28b2f0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28b2f4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28b2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28b2f8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x28b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28b2fc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28b300: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28b304: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28B304u;
    SET_GPR_U32(ctx, 31, 0x28B30Cu);
    ctx->pc = 0x28B308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B304u;
            // 0x28b308: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B30Cu; }
        if (ctx->pc != 0x28B30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B30Cu; }
        if (ctx->pc != 0x28B30Cu) { return; }
    }
    ctx->pc = 0x28B30Cu;
label_28b30c:
    // 0x28b30c: 0x0  nop
    ctx->pc = 0x28b30cu;
    // NOP
label_28b310:
    // 0x28b310: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x28b314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28b314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b318: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28b31c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28b31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28b320: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28B320u;
    {
        const bool branch_taken_0x28b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b320) {
            ctx->pc = 0x28B350u;
            goto label_28b350;
        }
    }
    ctx->pc = 0x28B328u;
    // 0x28b328: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28b32c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28b32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28b330: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28b330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28b334: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28b334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28b338: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x28b338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28b33c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28b340: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28b344: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28B344u;
    SET_GPR_U32(ctx, 31, 0x28B34Cu);
    ctx->pc = 0x28B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B344u;
            // 0x28b348: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B34Cu; }
        if (ctx->pc != 0x28B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B34Cu; }
        if (ctx->pc != 0x28B34Cu) { return; }
    }
    ctx->pc = 0x28B34Cu;
label_28b34c:
    // 0x28b34c: 0x0  nop
    ctx->pc = 0x28b34cu;
    // NOP
label_28b350:
    // 0x28b350: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28b350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b354: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28b354u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b358: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28b358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28b35c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x28b35cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28b360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b364: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x28b364u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b368: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28b368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b36c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28b36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b370: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28b370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b374: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28b374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28b378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b37c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28b37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b380: 0x3e00008  jr          $ra
    ctx->pc = 0x28B380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B380u;
            // 0x28b384: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B388u;
    // 0x28b388: 0x0  nop
    ctx->pc = 0x28b388u;
    // NOP
    // 0x28b38c: 0x0  nop
    ctx->pc = 0x28b38cu;
    // NOP
}
