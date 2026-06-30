#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4AE0
// Address: 0x2f4ae0 - 0x2f4c00
void sub_002F4AE0_0x2f4ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4AE0_0x2f4ae0");
#endif

    switch (ctx->pc) {
        case 0x2f4b28u: goto label_2f4b28;
        case 0x2f4b58u: goto label_2f4b58;
        case 0x2f4b7cu: goto label_2f4b7c;
        case 0x2f4b98u: goto label_2f4b98;
        case 0x2f4bb0u: goto label_2f4bb0;
        case 0x2f4bc8u: goto label_2f4bc8;
        case 0x2f4be4u: goto label_2f4be4;
        default: break;
    }

    ctx->pc = 0x2f4ae0u;

    // 0x2f4ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f4ae4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f4ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2f4ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f4ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f4aec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2f4af0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f4af4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4afc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f4afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4b04: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2f4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4b08: 0x8c90e370  lw          $s0, -0x1C90($a0)
    ctx->pc = 0x2f4b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
    // 0x2f4b0c: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x2f4b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x2f4b10: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F4B10u;
    {
        const bool branch_taken_0x2f4b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B10u;
            // 0x2f4b14: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b10) {
            ctx->pc = 0x2F4BE4u;
            goto label_2f4be4;
        }
    }
    ctx->pc = 0x2F4B18u;
    // 0x2f4b18: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x2f4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2f4b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b20: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x2F4B20u;
    SET_GPR_U32(ctx, 31, 0x2F4B28u);
    ctx->pc = 0x2F4B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B20u;
            // 0x2f4b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B28u; }
        if (ctx->pc != 0x2F4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B28u; }
        if (ctx->pc != 0x2F4B28u) { return; }
    }
    ctx->pc = 0x2F4B28u;
label_2f4b28:
    // 0x2f4b28: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x2f4b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2f4b2c: 0x50e0000c  beql        $a3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2F4B2Cu;
    {
        const bool branch_taken_0x2f4b2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b2c) {
            ctx->pc = 0x2F4B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B2Cu;
            // 0x2f4b30: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4B60u;
            goto label_2f4b60;
        }
    }
    ctx->pc = 0x2F4B34u;
    // 0x2f4b34: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2f4b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f4b38: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x2f4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f4b3c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x2f4b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x2f4b40: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f4b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f4b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b4c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x2f4b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x2f4b50: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x2F4B50u;
    SET_GPR_U32(ctx, 31, 0x2F4B58u);
    ctx->pc = 0x2F4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B50u;
            // 0x2f4b54: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B58u; }
        if (ctx->pc != 0x2F4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B58u; }
        if (ctx->pc != 0x2F4B58u) { return; }
    }
    ctx->pc = 0x2F4B58u;
label_2f4b58:
    // 0x2f4b58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4B58u;
    {
        const bool branch_taken_0x2f4b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B58u;
            // 0x2f4b5c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b58) {
            ctx->pc = 0x2F4B80u;
            goto label_2f4b80;
        }
    }
    ctx->pc = 0x2F4B60u;
label_2f4b60:
    // 0x2f4b60: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2f4b60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x2f4b64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f4b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f4b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b70: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x2f4b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x2f4b74: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x2F4B74u;
    SET_GPR_U32(ctx, 31, 0x2F4B7Cu);
    ctx->pc = 0x2F4B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B74u;
            // 0x2f4b78: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B7Cu; }
        if (ctx->pc != 0x2F4B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B7Cu; }
        if (ctx->pc != 0x2F4B7Cu) { return; }
    }
    ctx->pc = 0x2F4B7Cu;
label_2f4b7c:
    // 0x2f4b7c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2f4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2f4b80:
    // 0x2f4b80: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F4B80u;
    {
        const bool branch_taken_0x2f4b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b80) {
            ctx->pc = 0x2F4B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B80u;
            // 0x2f4b84: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4BD0u;
            goto label_2f4bd0;
        }
    }
    ctx->pc = 0x2F4B88u;
    // 0x2f4b88: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2f4b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2f4b8c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f4b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f4b90: 0xc054c00  jal         func_153000
    ctx->pc = 0x2F4B90u;
    SET_GPR_U32(ctx, 31, 0x2F4B98u);
    ctx->pc = 0x2F4B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4B90u;
            // 0x2f4b94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153000u;
    if (runtime->hasFunction(0x153000u)) {
        auto targetFn = runtime->lookupFunction(0x153000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B98u; }
        if (ctx->pc != 0x2F4B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153000_0x153000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4B98u; }
        if (ctx->pc != 0x2F4B98u) { return; }
    }
    ctx->pc = 0x2F4B98u;
label_2f4b98:
    // 0x2f4b98: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x2f4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f4b9c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f4ba0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x2f4ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2f4ba4: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x2f4ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2f4ba8: 0xc054bdc  jal         func_152F70
    ctx->pc = 0x2F4BA8u;
    SET_GPR_U32(ctx, 31, 0x2F4BB0u);
    ctx->pc = 0x2F4BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BA8u;
            // 0x2f4bac: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152F70u;
    if (runtime->hasFunction(0x152F70u)) {
        auto targetFn = runtime->lookupFunction(0x152F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4BB0u; }
        if (ctx->pc != 0x2F4BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152F70_0x152f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4BB0u; }
        if (ctx->pc != 0x2F4BB0u) { return; }
    }
    ctx->pc = 0x2F4BB0u;
label_2f4bb0:
    // 0x2f4bb0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2f4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2f4bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f4bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bbc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2f4bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2f4bc0: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x2F4BC0u;
    SET_GPR_U32(ctx, 31, 0x2F4BC8u);
    ctx->pc = 0x2F4BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BC0u;
            // 0x2f4bc4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4BC8u; }
        if (ctx->pc != 0x2F4BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4BC8u; }
        if (ctx->pc != 0x2F4BC8u) { return; }
    }
    ctx->pc = 0x2F4BC8u;
label_2f4bc8:
    // 0x2f4bc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4BC8u;
    {
        const bool branch_taken_0x2f4bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BC8u;
            // 0x2f4bcc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bc8) {
            ctx->pc = 0x2F4BE8u;
            goto label_2f4be8;
        }
    }
    ctx->pc = 0x2F4BD0u;
label_2f4bd0:
    // 0x2f4bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bd4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f4bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bd8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2f4bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2f4bdc: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x2F4BDCu;
    SET_GPR_U32(ctx, 31, 0x2F4BE4u);
    ctx->pc = 0x2F4BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BDCu;
            // 0x2f4be0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4BE4u; }
        if (ctx->pc != 0x2F4BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4BE4u; }
        if (ctx->pc != 0x2F4BE4u) { return; }
    }
    ctx->pc = 0x2F4BE4u;
label_2f4be4:
    // 0x2f4be4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f4be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4be8:
    // 0x2f4be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f4be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f4becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BF8u;
            // 0x2f4bfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4C00u;
}
