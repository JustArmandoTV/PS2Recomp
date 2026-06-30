#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00114988
// Address: 0x114988 - 0x114b08
void sub_00114988_0x114988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114988_0x114988");
#endif

    switch (ctx->pc) {
        case 0x114998u: goto label_114998;
        case 0x1149f8u: goto label_1149f8;
        case 0x114a7cu: goto label_114a7c;
        case 0x114ae8u: goto label_114ae8;
        default: break;
    }

    ctx->pc = 0x114988u;

    // 0x114988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11498c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114990: 0xc045244  jal         func_114910
    ctx->pc = 0x114990u;
    SET_GPR_U32(ctx, 31, 0x114998u);
    ctx->pc = 0x114910u;
    if (runtime->hasFunction(0x114910u)) {
        auto targetFn = runtime->lookupFunction(0x114910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114998u; }
        if (ctx->pc != 0x114998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114910_0x114910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114998u; }
        if (ctx->pc != 0x114998u) { return; }
    }
    ctx->pc = 0x114998u;
label_114998:
    // 0x114998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11499c: 0x3e00008  jr          $ra
    ctx->pc = 0x11499Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1149A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11499Cu;
            // 0x1149a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1149A4u;
    // 0x1149a4: 0x0  nop
    ctx->pc = 0x1149a4u;
    // NOP
    // 0x1149a8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1149ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1149acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1149b0: 0x8c43e458  lw          $v1, -0x1BA8($v0)
    ctx->pc = 0x1149b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960216)));
    // 0x1149b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1149b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1149b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1149bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1149BCu;
    {
        const bool branch_taken_0x1149bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1149C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1149BCu;
            // 0x1149c0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149bc) {
            ctx->pc = 0x1149CCu;
            goto label_1149cc;
        }
    }
    ctx->pc = 0x1149C4u;
    // 0x1149c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1149C4u;
    {
        const bool branch_taken_0x1149c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1149C4u;
            // 0x1149c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149c4) {
            ctx->pc = 0x114A88u;
            goto label_114a88;
        }
    }
    ctx->pc = 0x1149CCu;
label_1149cc:
    // 0x1149cc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1149ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1149d0: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x1149d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x1149d4: 0x24e3cd00  addiu       $v1, $a3, -0x3300
    ctx->pc = 0x1149d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954240));
    // 0x1149d8: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1149d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1149dc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1149dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1149e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1149E0u;
    {
        const bool branch_taken_0x1149e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1149E0u;
            // 0x1149e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149e0) {
            ctx->pc = 0x114A28u;
            goto label_114a28;
        }
    }
    ctx->pc = 0x1149E8u;
    // 0x1149e8: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x1149e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x1149ec: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1149ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x1149f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1149f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1149f4: 0x0  nop
    ctx->pc = 0x1149f4u;
    // NOP
label_1149f8:
    // 0x1149f8: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1149f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1149fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1149FCu;
    {
        const bool branch_taken_0x1149fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1149FCu;
            // 0x114a00: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149fc) {
            ctx->pc = 0x114A30u;
            goto label_114a30;
        }
    }
    ctx->pc = 0x114A04u;
    // 0x114a04: 0x24e3cd00  addiu       $v1, $a3, -0x3300
    ctx->pc = 0x114a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954240));
    // 0x114a08: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x114a08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114a0c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x114a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x114a10: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x114a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x114a14: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x114a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x114a18: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x114A18u;
    {
        const bool branch_taken_0x114a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x114a18) {
            ctx->pc = 0x114A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114A18u;
            // 0x114a1c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1149F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1149f8;
        }
    }
    ctx->pc = 0x114A20u;
    // 0x114a20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114A20u;
    {
        const bool branch_taken_0x114a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114A20u;
            // 0x114a24: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a20) {
            ctx->pc = 0x114A34u;
            goto label_114a34;
        }
    }
    ctx->pc = 0x114A28u;
label_114a28:
    // 0x114a28: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x114a28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x114a2c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_114a30:
    // 0x114a30: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x114a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_114a34:
    // 0x114a34: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114A34u;
    {
        const bool branch_taken_0x114a34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x114a34) {
            ctx->pc = 0x114A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114A34u;
            // 0x114a38: 0xace5cd00  sw          $a1, -0x3300($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294954240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114A4Cu;
            goto label_114a4c;
        }
    }
    ctx->pc = 0x114A3Cu;
    // 0x114a3c: 0x24e2cd00  addiu       $v0, $a3, -0x3300
    ctx->pc = 0x114a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954240));
    // 0x114a40: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x114a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x114a44: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x114a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x114a48: 0xace5cd00  sw          $a1, -0x3300($a3)
    ctx->pc = 0x114a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954240), GPR_U32(ctx, 5));
label_114a4c:
    // 0x114a4c: 0x24e2cd00  addiu       $v0, $a3, -0x3300
    ctx->pc = 0x114a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954240));
    // 0x114a50: 0x2524cc40  addiu       $a0, $t1, -0x33C0
    ctx->pc = 0x114a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954048));
    // 0x114a54: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x114a54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x114a58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x114a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a5c: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x114a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x114a60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114a64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x114a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a6c: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x114a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114a70: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114a74: 0xc04410c  jal         func_110430
    ctx->pc = 0x114A74u;
    SET_GPR_U32(ctx, 31, 0x114A7Cu);
    ctx->pc = 0x114A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114A74u;
            // 0x114a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114A7Cu; }
        if (ctx->pc != 0x114A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114A7Cu; }
        if (ctx->pc != 0x114A7Cu) { return; }
    }
    ctx->pc = 0x114A7Cu;
label_114a7c:
    // 0x114a7c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x114A7Cu;
    {
        const bool branch_taken_0x114a7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114A7Cu;
            // 0x114a80: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a7c) {
            ctx->pc = 0x114A88u;
            goto label_114a88;
        }
    }
    ctx->pc = 0x114A84u;
    // 0x114a84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x114a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114a88:
    // 0x114a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114a8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a90: 0x3e00008  jr          $ra
    ctx->pc = 0x114A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114A90u;
            // 0x114a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A98u;
    // 0x114a98: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x114a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x114a9c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114aa0: 0x8c43e458  lw          $v1, -0x1BA8($v0)
    ctx->pc = 0x114aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960216)));
    // 0x114aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114aa8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114AA8u;
    {
        const bool branch_taken_0x114aa8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x114AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114AA8u;
            // 0x114aac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aa8) {
            ctx->pc = 0x114AB8u;
            goto label_114ab8;
        }
    }
    ctx->pc = 0x114AB0u;
    // 0x114ab0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x114AB0u;
    {
        const bool branch_taken_0x114ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114AB0u;
            // 0x114ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ab0) {
            ctx->pc = 0x114AF8u;
            goto label_114af8;
        }
    }
    ctx->pc = 0x114AB8u;
label_114ab8:
    // 0x114ab8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x114ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x114abc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114ac0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x114ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x114ac4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114ac8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x114ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x114acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x114ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ad8: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x114ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114adc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114ae0: 0xc04410c  jal         func_110430
    ctx->pc = 0x114AE0u;
    SET_GPR_U32(ctx, 31, 0x114AE8u);
    ctx->pc = 0x114AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114AE0u;
            // 0x114ae4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114AE8u; }
        if (ctx->pc != 0x114AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114AE8u; }
        if (ctx->pc != 0x114AE8u) { return; }
    }
    ctx->pc = 0x114AE8u;
label_114ae8:
    // 0x114ae8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114AE8u;
    {
        const bool branch_taken_0x114ae8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114ae8) {
            ctx->pc = 0x114AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114AE8u;
            // 0x114aec: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114AF8u;
            goto label_114af8;
        }
    }
    ctx->pc = 0x114AF0u;
    // 0x114af0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x114af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_114af8:
    // 0x114af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114afc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b00: 0x3e00008  jr          $ra
    ctx->pc = 0x114B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B00u;
            // 0x114b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114B08u;
}
