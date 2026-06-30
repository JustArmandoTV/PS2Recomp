#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193B58
// Address: 0x193b58 - 0x193ca8
void sub_00193B58_0x193b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193B58_0x193b58");
#endif

    switch (ctx->pc) {
        case 0x193b90u: goto label_193b90;
        case 0x193c40u: goto label_193c40;
        default: break;
    }

    ctx->pc = 0x193b58u;

    // 0x193b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193b68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x193b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193b70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b74: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193B74u;
    {
        const bool branch_taken_0x193b74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B74u;
            // 0x193b78: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b74) {
            ctx->pc = 0x193B88u;
            goto label_193b88;
        }
    }
    ctx->pc = 0x193B7Cu;
    // 0x193b7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x193b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x193b80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x193B80u;
    {
        const bool branch_taken_0x193b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B80u;
            // 0x193b84: 0x2444feb8  addiu       $a0, $v0, -0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b80) {
            ctx->pc = 0x193BBCu;
            goto label_193bbc;
        }
    }
    ctx->pc = 0x193B88u;
label_193b88:
    // 0x193b88: 0xc06599a  jal         func_196668
    ctx->pc = 0x193B88u;
    SET_GPR_U32(ctx, 31, 0x193B90u);
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B90u; }
        if (ctx->pc != 0x193B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B90u; }
        if (ctx->pc != 0x193B90u) { return; }
    }
    ctx->pc = 0x193B90u;
label_193b90:
    // 0x193b90: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x193b94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193B94u;
    {
        const bool branch_taken_0x193b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B94u;
            // 0x193b98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b94) {
            ctx->pc = 0x193BB8u;
            goto label_193bb8;
        }
    }
    ctx->pc = 0x193B9Cu;
    // 0x193b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ba0: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x193ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x193ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193ba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193bac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x193bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193bb0: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x193BB0u;
    ctx->pc = 0x193BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BB0u;
            // 0x193bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193BB8u;
label_193bb8:
    // 0x193bb8: 0x2604025c  addiu       $a0, $s0, 0x25C
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
label_193bbc:
    // 0x193bbc: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x193bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x193bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bc4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x193bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x193bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193bd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193bd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x193bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x193BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193BD8u;
            // 0x193bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193BE0u;
    // 0x193be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193bf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x193bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bf4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x193BF4u;
    {
        const bool branch_taken_0x193bf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x193BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193BF4u;
            // 0x193bf8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bf4) {
            ctx->pc = 0x193C38u;
            goto label_193c38;
        }
    }
    ctx->pc = 0x193BFCu;
    // 0x193bfc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x193bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x193c00: 0x2446feb8  addiu       $a2, $v0, -0x148
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966968));
    // 0x193c04: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x193c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x193c08: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x193c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x193c0c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x193c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x193c10: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x193c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x193c14: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x193c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x193c18: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x193c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c1c: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x193c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c20: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x193c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c24: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x193c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c28: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x193c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x193c2c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x193C2Cu;
    {
        const bool branch_taken_0x193c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C2Cu;
            // 0x193c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c2c) {
            ctx->pc = 0x193C94u;
            goto label_193c94;
        }
    }
    ctx->pc = 0x193C34u;
    // 0x193c34: 0x0  nop
    ctx->pc = 0x193c34u;
    // NOP
label_193c38:
    // 0x193c38: 0xc06599a  jal         func_196668
    ctx->pc = 0x193C38u;
    SET_GPR_U32(ctx, 31, 0x193C40u);
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C40u; }
        if (ctx->pc != 0x193C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C40u; }
        if (ctx->pc != 0x193C40u) { return; }
    }
    ctx->pc = 0x193C40u;
label_193c40:
    // 0x193c40: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x193c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193C44u;
    {
        const bool branch_taken_0x193c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C44u;
            // 0x193c48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c44) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C4Cu;
    // 0x193c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c50: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x193c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x193c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193c5c: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x193C5Cu;
    ctx->pc = 0x193C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C5Cu;
            // 0x193c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193C64u;
    // 0x193c64: 0x0  nop
    ctx->pc = 0x193c64u;
    // NOP
label_193c68:
    // 0x193c68: 0x6a020263  ldl         $v0, 0x263($s0)
    ctx->pc = 0x193c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 611); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x193c6c: 0x6e02025c  ldr         $v0, 0x25C($s0)
    ctx->pc = 0x193c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 604); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x193c70: 0x6a03026b  ldl         $v1, 0x26B($s0)
    ctx->pc = 0x193c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 619); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x193c74: 0x6e030264  ldr         $v1, 0x264($s0)
    ctx->pc = 0x193c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 612); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x193c78: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x193c7c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x193c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c80: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x193c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c84: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x193c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c88: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x193c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c8c: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x193c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x193c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193c94:
    // 0x193c94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x193CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CA0u;
            // 0x193ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193CA8u;
}
