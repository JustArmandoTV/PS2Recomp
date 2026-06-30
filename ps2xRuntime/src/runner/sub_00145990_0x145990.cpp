#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145990
// Address: 0x145990 - 0x145ec0
void sub_00145990_0x145990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145990_0x145990");
#endif

    switch (ctx->pc) {
        case 0x145b48u: goto label_145b48;
        case 0x145b58u: goto label_145b58;
        case 0x145b70u: goto label_145b70;
        case 0x145b8cu: goto label_145b8c;
        case 0x145bbcu: goto label_145bbc;
        case 0x145bdcu: goto label_145bdc;
        case 0x145bfcu: goto label_145bfc;
        case 0x145c0cu: goto label_145c0c;
        case 0x145c24u: goto label_145c24;
        case 0x145c68u: goto label_145c68;
        case 0x145c70u: goto label_145c70;
        case 0x145c88u: goto label_145c88;
        case 0x145c98u: goto label_145c98;
        case 0x145cb0u: goto label_145cb0;
        case 0x145cc4u: goto label_145cc4;
        case 0x145cdcu: goto label_145cdc;
        case 0x145cecu: goto label_145cec;
        case 0x145d04u: goto label_145d04;
        case 0x145d10u: goto label_145d10;
        case 0x145d20u: goto label_145d20;
        case 0x145d2cu: goto label_145d2c;
        case 0x145d40u: goto label_145d40;
        case 0x145d5cu: goto label_145d5c;
        case 0x145d78u: goto label_145d78;
        case 0x145d90u: goto label_145d90;
        case 0x145da0u: goto label_145da0;
        case 0x145db8u: goto label_145db8;
        case 0x145dc0u: goto label_145dc0;
        case 0x145dd8u: goto label_145dd8;
        case 0x145de8u: goto label_145de8;
        case 0x145e00u: goto label_145e00;
        case 0x145e0cu: goto label_145e0c;
        case 0x145e1cu: goto label_145e1c;
        case 0x145e28u: goto label_145e28;
        case 0x145e60u: goto label_145e60;
        case 0x145e7cu: goto label_145e7c;
        case 0x145e88u: goto label_145e88;
        default: break;
    }

    ctx->pc = 0x145990u;

label_145990:
    // 0x145990: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x145990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x145994: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x145994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x145998: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x145998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14599c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x14599cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1459a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1459a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1459a4: 0x64840  sll         $t1, $a2, 1
    ctx->pc = 0x1459a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1459a8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1459a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1459ac: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x1459acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1459b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1459b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1459b4: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1459b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1459b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1459b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1459bc: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1459bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1459c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1459c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1459c4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1459c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1459c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1459cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1459ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1459d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1459d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1459d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1459d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1459d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1459d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1459dc: 0xe98021  addu        $s0, $a3, $t1
    ctx->pc = 0x1459dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1459e0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1459e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1459e4: 0x4a9821  addu        $s3, $v0, $t2
    ctx->pc = 0x1459e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1459e8: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x1459e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1459ec: 0x31492000  andi        $t1, $t2, 0x2000
    ctx->pc = 0x1459ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8192);
    // 0x1459f0: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1459F0u;
    {
        const bool branch_taken_0x1459f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1459F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1459F0u;
            // 0x1459f4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459f0) {
            ctx->pc = 0x145A68u;
            goto label_145a68;
        }
    }
    ctx->pc = 0x1459F8u;
    // 0x1459f8: 0x866c0006  lh          $t4, 0x6($s3)
    ctx->pc = 0x1459f8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1459fc: 0xc48c0  sll         $t1, $t4, 3
    ctx->pc = 0x1459fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x145a00: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x145a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x145a04: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x145a04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x145a08: 0x495821  addu        $t3, $v0, $t1
    ctx->pc = 0x145a08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x145a0c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x145a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x145a10: 0x31494000  andi        $t1, $t2, 0x4000
    ctx->pc = 0x145a10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16384);
    // 0x145a14: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x145A14u;
    {
        const bool branch_taken_0x145a14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A14u;
            // 0x145a18: 0x27be0140  addiu       $fp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a14) {
            ctx->pc = 0x145A30u;
            goto label_145a30;
        }
    }
    ctx->pc = 0x145A1Cu;
    // 0x145a1c: 0x85680006  lh          $t0, 0x6($t3)
    ctx->pc = 0x145a1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x145a20: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x145a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a24: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x145a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a28: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x145A28u;
    {
        const bool branch_taken_0x145a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A28u;
            // 0x145a2c: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a28) {
            ctx->pc = 0x145C2Cu;
            goto label_145c2c;
        }
    }
    ctx->pc = 0x145A30u;
label_145a30:
    // 0x145a30: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x145a34: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x145a34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x145a38: 0x5120007d  beql        $t1, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x145A38u;
    {
        const bool branch_taken_0x145a38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a38) {
            ctx->pc = 0x145A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145A38u;
            // 0x145a3c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145C30u;
            goto label_145c30;
        }
    }
    ctx->pc = 0x145A40u;
    // 0x145a40: 0x85640006  lh          $a0, 0x6($t3)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x145a44: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x145a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a48: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145a4c: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x145a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x145a50: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x145a54: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x145a54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x145a58: 0x48a821  addu        $s5, $v0, $t0
    ctx->pc = 0x145a58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x145a5c: 0x86a80006  lh          $t0, 0x6($s5)
    ctx->pc = 0x145a5cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x145a60: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x145A60u;
    {
        const bool branch_taken_0x145a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A60u;
            // 0x145a64: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a60) {
            ctx->pc = 0x145C2Cu;
            goto label_145c2c;
        }
    }
    ctx->pc = 0x145A68u;
label_145a68:
    // 0x145a68: 0x31484000  andi        $t0, $t2, 0x4000
    ctx->pc = 0x145a68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16384);
    // 0x145a6c: 0x5100000c  beql        $t0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x145A6Cu;
    {
        const bool branch_taken_0x145a6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a6c) {
            ctx->pc = 0x145A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145A6Cu;
            // 0x145a70: 0x31438000  andi        $v1, $t2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x145AA0u;
            goto label_145aa0;
        }
    }
    ctx->pc = 0x145A74u;
    // 0x145a74: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x145a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a78: 0x86680006  lh          $t0, 0x6($s3)
    ctx->pc = 0x145a78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x145a7c: 0x86660008  lh          $a2, 0x8($s3)
    ctx->pc = 0x145a7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x145a80: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x145a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a84: 0x27be01c0  addiu       $fp, $sp, 0x1C0
    ctx->pc = 0x145a84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x145a88: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a8c: 0x648c0  sll         $t1, $a2, 3
    ctx->pc = 0x145a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x145a90: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x145a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x145a94: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x145a94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x145a98: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x145A98u;
    {
        const bool branch_taken_0x145a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A98u;
            // 0x145a9c: 0x499821  addu        $s3, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a98) {
            ctx->pc = 0x145C2Cu;
            goto label_145c2c;
        }
    }
    ctx->pc = 0x145AA0u;
label_145aa0:
    // 0x145aa0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x145AA0u;
    {
        const bool branch_taken_0x145aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145aa0) {
            ctx->pc = 0x145AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145AA0u;
            // 0x145aa4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145AE8u;
            goto label_145ae8;
        }
    }
    ctx->pc = 0x145AA8u;
    // 0x145aa8: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x145aa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x145aac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x145aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ab0: 0x86680006  lh          $t0, 0x6($s3)
    ctx->pc = 0x145ab0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x145ab4: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x145ab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ab8: 0x27be01c0  addiu       $fp, $sp, 0x1C0
    ctx->pc = 0x145ab8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x145abc: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x145abcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145ac0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x145ac4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x145ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x145ac8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x145ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x145acc: 0x46b821  addu        $s7, $v0, $a2
    ctx->pc = 0x145accu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x145ad0: 0x86e60008  lh          $a2, 0x8($s7)
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x145ad4: 0x648c0  sll         $t1, $a2, 3
    ctx->pc = 0x145ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x145ad8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x145ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x145adc: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x145ae0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x145AE0u;
    {
        const bool branch_taken_0x145ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145AE0u;
            // 0x145ae4: 0x499821  addu        $s3, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ae0) {
            ctx->pc = 0x145C2Cu;
            goto label_145c2c;
        }
    }
    ctx->pc = 0x145AE8u;
label_145ae8:
    // 0x145ae8: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x145ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x145aec: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x145AECu;
    {
        const bool branch_taken_0x145aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145aec) {
            ctx->pc = 0x145AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145AECu;
            // 0x145af0: 0x86660006  lh          $a2, 0x6($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145B34u;
            goto label_145b34;
        }
    }
    ctx->pc = 0x145AF4u;
    // 0x145af4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x145af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145af8: 0x86640006  lh          $a0, 0x6($s3)
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x145afc: 0x86660008  lh          $a2, 0x8($s3)
    ctx->pc = 0x145afcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x145b00: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x145b00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b04: 0x27be0180  addiu       $fp, $sp, 0x180
    ctx->pc = 0x145b04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x145b08: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x145b08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145b0c: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x145b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x145b10: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x145b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x145b14: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x145b14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x145b18: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x145b18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x145b1c: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x145b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x145b20: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x145b24: 0x48a821  addu        $s5, $v0, $t0
    ctx->pc = 0x145b24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x145b28: 0x86a80006  lh          $t0, 0x6($s5)
    ctx->pc = 0x145b28u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x145b2c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x145B2Cu;
    {
        const bool branch_taken_0x145b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B2Cu;
            // 0x145b30: 0x499821  addu        $s3, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b2c) {
            ctx->pc = 0x145C2Cu;
            goto label_145c2c;
        }
    }
    ctx->pc = 0x145B34u;
label_145b34:
    // 0x145b34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x145b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145b38: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145B38u;
    {
        const bool branch_taken_0x145b38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x145b38) {
            ctx->pc = 0x145B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145B38u;
            // 0x145b3c: 0x8f8582e0  lw          $a1, -0x7D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145B50u;
            goto label_145b50;
        }
    }
    ctx->pc = 0x145B40u;
    // 0x145b40: 0xc051664  jal         func_145990
    ctx->pc = 0x145B40u;
    SET_GPR_U32(ctx, 31, 0x145B48u);
    ctx->pc = 0x145990u;
    goto label_145990;
    ctx->pc = 0x145B48u;
label_145b48:
    // 0x145b48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145B48u;
    {
        const bool branch_taken_0x145b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B48u;
            // 0x145b4c: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b48) {
            ctx->pc = 0x145B5Cu;
            goto label_145b5c;
        }
    }
    ctx->pc = 0x145B50u;
label_145b50:
    // 0x145b50: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x145B50u;
    SET_GPR_U32(ctx, 31, 0x145B58u);
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B58u; }
        if (ctx->pc != 0x145B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B58u; }
        if (ctx->pc != 0x145B58u) { return; }
    }
    ctx->pc = 0x145B58u;
label_145b58:
    // 0x145b58: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x145b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_145b5c:
    // 0x145b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b60: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x145b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145b64: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x145b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145b68: 0xc04ce64  jal         func_133990
    ctx->pc = 0x145B68u;
    SET_GPR_U32(ctx, 31, 0x145B70u);
    ctx->pc = 0x145B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B68u;
            // 0x145b6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B70u; }
        if (ctx->pc != 0x145B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B70u; }
        if (ctx->pc != 0x145B70u) { return; }
    }
    ctx->pc = 0x145B70u;
label_145b70:
    // 0x145b70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145b74: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x145b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x145b78: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145B78u;
    {
        const bool branch_taken_0x145b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b78) {
            ctx->pc = 0x145B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145B78u;
            // 0x145b7c: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145B94u;
            goto label_145b94;
        }
    }
    ctx->pc = 0x145B80u;
    // 0x145b80: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145b84: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x145B84u;
    SET_GPR_U32(ctx, 31, 0x145B8Cu);
    ctx->pc = 0x145B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B84u;
            // 0x145b88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B8Cu; }
        if (ctx->pc != 0x145B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B8Cu; }
        if (ctx->pc != 0x145B8Cu) { return; }
    }
    ctx->pc = 0x145B8Cu;
label_145b8c:
    // 0x145b8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x145B8Cu;
    {
        const bool branch_taken_0x145b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B8Cu;
            // 0x145b90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b8c) {
            ctx->pc = 0x145C00u;
            goto label_145c00;
        }
    }
    ctx->pc = 0x145B94u;
label_145b94:
    // 0x145b94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145b98: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145B98u;
    {
        const bool branch_taken_0x145b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b98) {
            ctx->pc = 0x145BFCu;
            goto label_145bfc;
        }
    }
    ctx->pc = 0x145BA0u;
    // 0x145ba0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x145ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x145ba4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145ba8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x145BA8u;
    {
        const bool branch_taken_0x145ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ba8) {
            ctx->pc = 0x145BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145BA8u;
            // 0x145bac: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145BB0u;
    // 0x145bb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145bb4: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x145BB4u;
    SET_GPR_U32(ctx, 31, 0x145BBCu);
    ctx->pc = 0x145BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145BB4u;
            // 0x145bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BBCu; }
        if (ctx->pc != 0x145BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BBCu; }
        if (ctx->pc != 0x145BBCu) { return; }
    }
    ctx->pc = 0x145BBCu;
label_145bbc:
    // 0x145bbc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x145bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_145bc0:
    // 0x145bc0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x145bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x145bc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145bc8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x145BC8u;
    {
        const bool branch_taken_0x145bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bc8) {
            ctx->pc = 0x145BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145BC8u;
            // 0x145bcc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145BE0u;
            goto label_145be0;
        }
    }
    ctx->pc = 0x145BD0u;
    // 0x145bd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145bd4: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x145BD4u;
    SET_GPR_U32(ctx, 31, 0x145BDCu);
    ctx->pc = 0x145BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145BD4u;
            // 0x145bd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BDCu; }
        if (ctx->pc != 0x145BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BDCu; }
        if (ctx->pc != 0x145BDCu) { return; }
    }
    ctx->pc = 0x145BDCu;
label_145bdc:
    // 0x145bdc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x145bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_145be0:
    // 0x145be0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x145be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x145be4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145be8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145BE8u;
    {
        const bool branch_taken_0x145be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145be8) {
            ctx->pc = 0x145BFCu;
            goto label_145bfc;
        }
    }
    ctx->pc = 0x145BF0u;
    // 0x145bf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145bf4: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x145BF4u;
    SET_GPR_U32(ctx, 31, 0x145BFCu);
    ctx->pc = 0x145BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145BF4u;
            // 0x145bf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BFCu; }
        if (ctx->pc != 0x145BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BFCu; }
        if (ctx->pc != 0x145BFCu) { return; }
    }
    ctx->pc = 0x145BFCu;
label_145bfc:
    // 0x145bfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_145c00:
    // 0x145c00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x145c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c04: 0xc04cd80  jal         func_133600
    ctx->pc = 0x145C04u;
    SET_GPR_U32(ctx, 31, 0x145C0Cu);
    ctx->pc = 0x145C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C04u;
            // 0x145c08: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C0Cu; }
        if (ctx->pc != 0x145C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C0Cu; }
        if (ctx->pc != 0x145C0Cu) { return; }
    }
    ctx->pc = 0x145C0Cu;
label_145c0c:
    // 0x145c0c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x145c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145c10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c14: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x145c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145c18: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x145c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145c1c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x145C1Cu;
    SET_GPR_U32(ctx, 31, 0x145C24u);
    ctx->pc = 0x145C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C1Cu;
            // 0x145c20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C24u; }
        if (ctx->pc != 0x145C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C24u; }
        if (ctx->pc != 0x145C24u) { return; }
    }
    ctx->pc = 0x145C24u;
label_145c24:
    // 0x145c24: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x145C24u;
    {
        const bool branch_taken_0x145c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C24u;
            // 0x145c28: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c24) {
            ctx->pc = 0x145E8Cu;
            goto label_145e8c;
        }
    }
    ctx->pc = 0x145C2Cu;
label_145c2c:
    // 0x145c2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x145c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_145c30:
    // 0x145c30: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x145c30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x145c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145c38: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x145c3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x145c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145c40: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x145c44: 0xe28821  addu        $s1, $a3, $v0
    ctx->pc = 0x145c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x145c48: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x145c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x145c4c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x145c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x145c50: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x145c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x145c54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x145c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x145c58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145c5c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x145c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c60: 0xc051664  jal         func_145990
    ctx->pc = 0x145C60u;
    SET_GPR_U32(ctx, 31, 0x145C68u);
    ctx->pc = 0x145C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C60u;
            // 0x145c64: 0xe28021  addu        $s0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145990u;
    goto label_145990;
    ctx->pc = 0x145C68u;
label_145c68:
    // 0x145c68: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x145C68u;
    SET_GPR_U32(ctx, 31, 0x145C70u);
    ctx->pc = 0x145C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C68u;
            // 0x145c6c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C70u; }
        if (ctx->pc != 0x145C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C70u; }
        if (ctx->pc != 0x145C70u) { return; }
    }
    ctx->pc = 0x145C70u;
label_145c70:
    // 0x145c70: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x145c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145c74: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x145c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x145c78: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x145c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145c7c: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x145c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145c80: 0xc04ce64  jal         func_133990
    ctx->pc = 0x145C80u;
    SET_GPR_U32(ctx, 31, 0x145C88u);
    ctx->pc = 0x145C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C80u;
            // 0x145c84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C88u; }
        if (ctx->pc != 0x145C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C88u; }
        if (ctx->pc != 0x145C88u) { return; }
    }
    ctx->pc = 0x145C88u;
label_145c88:
    // 0x145c88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x145c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x145c8c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x145c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x145c90: 0xc04cd80  jal         func_133600
    ctx->pc = 0x145C90u;
    SET_GPR_U32(ctx, 31, 0x145C98u);
    ctx->pc = 0x145C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C90u;
            // 0x145c94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C98u; }
        if (ctx->pc != 0x145C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C98u; }
        if (ctx->pc != 0x145C98u) { return; }
    }
    ctx->pc = 0x145C98u;
label_145c98:
    // 0x145c98: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x145c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145c9c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x145c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x145ca0: 0xc64d0024  lwc1        $f13, 0x24($s2)
    ctx->pc = 0x145ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145ca4: 0xc64e0028  lwc1        $f14, 0x28($s2)
    ctx->pc = 0x145ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145ca8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x145CA8u;
    SET_GPR_U32(ctx, 31, 0x145CB0u);
    ctx->pc = 0x145CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CA8u;
            // 0x145cac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CB0u; }
        if (ctx->pc != 0x145CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CB0u; }
        if (ctx->pc != 0x145CB0u) { return; }
    }
    ctx->pc = 0x145CB0u;
label_145cb0:
    // 0x145cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145cb4: 0x16c2002b  bne         $s6, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x145CB4u;
    {
        const bool branch_taken_0x145cb4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x145CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145CB4u;
            // 0x145cb8: 0xc6b40084  lwc1        $f20, 0x84($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cb4) {
            ctx->pc = 0x145D64u;
            goto label_145d64;
        }
    }
    ctx->pc = 0x145CBCu;
    // 0x145cbc: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x145CBCu;
    SET_GPR_U32(ctx, 31, 0x145CC4u);
    ctx->pc = 0x145CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CBCu;
            // 0x145cc0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CC4u; }
        if (ctx->pc != 0x145CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CC4u; }
        if (ctx->pc != 0x145CC4u) { return; }
    }
    ctx->pc = 0x145CC4u;
label_145cc4:
    // 0x145cc4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x145cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145cc8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145ccc: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x145cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145cd0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x145cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145cd4: 0xc04ce64  jal         func_133990
    ctx->pc = 0x145CD4u;
    SET_GPR_U32(ctx, 31, 0x145CDCu);
    ctx->pc = 0x145CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CD4u;
            // 0x145cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CDCu; }
        if (ctx->pc != 0x145CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CDCu; }
        if (ctx->pc != 0x145CDCu) { return; }
    }
    ctx->pc = 0x145CDCu;
label_145cdc:
    // 0x145cdc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145ce0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x145ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x145ce4: 0xc04cd80  jal         func_133600
    ctx->pc = 0x145CE4u;
    SET_GPR_U32(ctx, 31, 0x145CECu);
    ctx->pc = 0x145CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CE4u;
            // 0x145ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CECu; }
        if (ctx->pc != 0x145CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CECu; }
        if (ctx->pc != 0x145CECu) { return; }
    }
    ctx->pc = 0x145CECu;
label_145cec:
    // 0x145cec: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x145cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145cf0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145cf4: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x145cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145cf8: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x145cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145cfc: 0xc04ce50  jal         func_133940
    ctx->pc = 0x145CFCu;
    SET_GPR_U32(ctx, 31, 0x145D04u);
    ctx->pc = 0x145D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CFCu;
            // 0x145d00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D04u; }
        if (ctx->pc != 0x145D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D04u; }
        if (ctx->pc != 0x145D04u) { return; }
    }
    ctx->pc = 0x145D04u;
label_145d04:
    // 0x145d04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145d08: 0xc04cce4  jal         func_133390
    ctx->pc = 0x145D08u;
    SET_GPR_U32(ctx, 31, 0x145D10u);
    ctx->pc = 0x145D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D08u;
            // 0x145d0c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D10u; }
        if (ctx->pc != 0x145D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D10u; }
        if (ctx->pc != 0x145D10u) { return; }
    }
    ctx->pc = 0x145D10u;
label_145d10:
    // 0x145d10: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x145d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145d14: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145d18: 0xc04cca0  jal         func_133280
    ctx->pc = 0x145D18u;
    SET_GPR_U32(ctx, 31, 0x145D20u);
    ctx->pc = 0x145D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D18u;
            // 0x145d1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D20u; }
        if (ctx->pc != 0x145D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D20u; }
        if (ctx->pc != 0x145D20u) { return; }
    }
    ctx->pc = 0x145D20u;
label_145d20:
    // 0x145d20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145d24: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x145D24u;
    SET_GPR_U32(ctx, 31, 0x145D2Cu);
    ctx->pc = 0x145D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D24u;
            // 0x145d28: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D2Cu; }
        if (ctx->pc != 0x145D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D2Cu; }
        if (ctx->pc != 0x145D2Cu) { return; }
    }
    ctx->pc = 0x145D2Cu;
label_145d2c:
    // 0x145d2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x145d2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x145d30: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x145d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x145d34: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x145d38: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x145D38u;
    SET_GPR_U32(ctx, 31, 0x145D40u);
    ctx->pc = 0x145D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D38u;
            // 0x145d3c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (runtime->hasFunction(0x14ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x14ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D40u; }
        if (ctx->pc != 0x145D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABD0_0x14abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D40u; }
        if (ctx->pc != 0x145D40u) { return; }
    }
    ctx->pc = 0x145D40u;
label_145d40:
    // 0x145d40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x145d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145d44: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x145d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x145d48: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x145D48u;
    {
        const bool branch_taken_0x145d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d48) {
            ctx->pc = 0x145D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145D48u;
            // 0x145d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145E80u;
            goto label_145e80;
        }
    }
    ctx->pc = 0x145D50u;
    // 0x145d50: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x145d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145d54: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x145D54u;
    SET_GPR_U32(ctx, 31, 0x145D5Cu);
    ctx->pc = 0x145D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D54u;
            // 0x145d58: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D5Cu; }
        if (ctx->pc != 0x145D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D5Cu; }
        if (ctx->pc != 0x145D5Cu) { return; }
    }
    ctx->pc = 0x145D5Cu;
label_145d5c:
    // 0x145d5c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x145D5Cu;
    {
        const bool branch_taken_0x145d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d5c) {
            ctx->pc = 0x145E7Cu;
            goto label_145e7c;
        }
    }
    ctx->pc = 0x145D64u;
label_145d64:
    // 0x145d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x145d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145d68: 0x16c20044  bne         $s6, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x145D68u;
    {
        const bool branch_taken_0x145d68 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x145d68) {
            ctx->pc = 0x145E7Cu;
            goto label_145e7c;
        }
    }
    ctx->pc = 0x145D70u;
    // 0x145d70: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x145D70u;
    SET_GPR_U32(ctx, 31, 0x145D78u);
    ctx->pc = 0x145D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D70u;
            // 0x145d74: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D78u; }
        if (ctx->pc != 0x145D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D78u; }
        if (ctx->pc != 0x145D78u) { return; }
    }
    ctx->pc = 0x145D78u;
label_145d78:
    // 0x145d78: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x145d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145d7c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x145d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x145d80: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x145d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145d84: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x145d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145d88: 0xc04ce64  jal         func_133990
    ctx->pc = 0x145D88u;
    SET_GPR_U32(ctx, 31, 0x145D90u);
    ctx->pc = 0x145D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D88u;
            // 0x145d8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D90u; }
        if (ctx->pc != 0x145D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D90u; }
        if (ctx->pc != 0x145D90u) { return; }
    }
    ctx->pc = 0x145D90u;
label_145d90:
    // 0x145d90: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x145d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x145d94: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x145d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x145d98: 0xc04cd80  jal         func_133600
    ctx->pc = 0x145D98u;
    SET_GPR_U32(ctx, 31, 0x145DA0u);
    ctx->pc = 0x145D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D98u;
            // 0x145d9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DA0u; }
        if (ctx->pc != 0x145DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DA0u; }
        if (ctx->pc != 0x145DA0u) { return; }
    }
    ctx->pc = 0x145DA0u;
label_145da0:
    // 0x145da0: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x145da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145da4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x145da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x145da8: 0xc62d0024  lwc1        $f13, 0x24($s1)
    ctx->pc = 0x145da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145dac: 0xc62e0028  lwc1        $f14, 0x28($s1)
    ctx->pc = 0x145dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145db0: 0xc04ce50  jal         func_133940
    ctx->pc = 0x145DB0u;
    SET_GPR_U32(ctx, 31, 0x145DB8u);
    ctx->pc = 0x145DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DB0u;
            // 0x145db4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DB8u; }
        if (ctx->pc != 0x145DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DB8u; }
        if (ctx->pc != 0x145DB8u) { return; }
    }
    ctx->pc = 0x145DB8u;
label_145db8:
    // 0x145db8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x145DB8u;
    SET_GPR_U32(ctx, 31, 0x145DC0u);
    ctx->pc = 0x145DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DB8u;
            // 0x145dbc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DC0u; }
        if (ctx->pc != 0x145DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DC0u; }
        if (ctx->pc != 0x145DC0u) { return; }
    }
    ctx->pc = 0x145DC0u;
label_145dc0:
    // 0x145dc0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x145dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dc4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145dc8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x145dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145dcc: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x145dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145dd0: 0xc04ce64  jal         func_133990
    ctx->pc = 0x145DD0u;
    SET_GPR_U32(ctx, 31, 0x145DD8u);
    ctx->pc = 0x145DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DD0u;
            // 0x145dd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DD8u; }
        if (ctx->pc != 0x145DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DD8u; }
        if (ctx->pc != 0x145DD8u) { return; }
    }
    ctx->pc = 0x145DD8u;
label_145dd8:
    // 0x145dd8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145ddc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x145ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x145de0: 0xc04cd80  jal         func_133600
    ctx->pc = 0x145DE0u;
    SET_GPR_U32(ctx, 31, 0x145DE8u);
    ctx->pc = 0x145DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DE0u;
            // 0x145de4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DE8u; }
        if (ctx->pc != 0x145DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DE8u; }
        if (ctx->pc != 0x145DE8u) { return; }
    }
    ctx->pc = 0x145DE8u;
label_145de8:
    // 0x145de8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x145de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145df0: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x145df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145df4: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x145df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145df8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x145DF8u;
    SET_GPR_U32(ctx, 31, 0x145E00u);
    ctx->pc = 0x145DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DF8u;
            // 0x145dfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E00u; }
        if (ctx->pc != 0x145E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E00u; }
        if (ctx->pc != 0x145E00u) { return; }
    }
    ctx->pc = 0x145E00u;
label_145e00:
    // 0x145e00: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145e04: 0xc04cce4  jal         func_133390
    ctx->pc = 0x145E04u;
    SET_GPR_U32(ctx, 31, 0x145E0Cu);
    ctx->pc = 0x145E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E04u;
            // 0x145e08: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E0Cu; }
        if (ctx->pc != 0x145E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E0Cu; }
        if (ctx->pc != 0x145E0Cu) { return; }
    }
    ctx->pc = 0x145E0Cu;
label_145e0c:
    // 0x145e0c: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x145e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145e10: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145e14: 0xc04cca0  jal         func_133280
    ctx->pc = 0x145E14u;
    SET_GPR_U32(ctx, 31, 0x145E1Cu);
    ctx->pc = 0x145E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E14u;
            // 0x145e18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E1Cu; }
        if (ctx->pc != 0x145E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E1Cu; }
        if (ctx->pc != 0x145E1Cu) { return; }
    }
    ctx->pc = 0x145E1Cu;
label_145e1c:
    // 0x145e1c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x145e20: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x145E20u;
    SET_GPR_U32(ctx, 31, 0x145E28u);
    ctx->pc = 0x145E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E20u;
            // 0x145e24: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E28u; }
        if (ctx->pc != 0x145E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E28u; }
        if (ctx->pc != 0x145E28u) { return; }
    }
    ctx->pc = 0x145E28u;
label_145e28:
    // 0x145e28: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x145e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x145e2c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x145e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x145e30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145e34: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x145E34u;
    {
        const bool branch_taken_0x145e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e34) {
            ctx->pc = 0x145E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145E34u;
            // 0x145e38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145E40u;
            goto label_145e40;
        }
    }
    ctx->pc = 0x145E3Cu;
    // 0x145e3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x145e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145e40:
    // 0x145e40: 0xc6ed0084  lwc1        $f13, 0x84($s7)
    ctx->pc = 0x145e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145e44: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x145e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x145e48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x145e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x145e4c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x145e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x145e50: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x145e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x145e54: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x145e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145e58: 0xc052b4c  jal         func_14AD30
    ctx->pc = 0x145E58u;
    SET_GPR_U32(ctx, 31, 0x145E60u);
    ctx->pc = 0x145E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E58u;
            // 0x145e5c: 0x27a80140  addiu       $t0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD30u;
    if (runtime->hasFunction(0x14AD30u)) {
        auto targetFn = runtime->lookupFunction(0x14AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E60u; }
        if (ctx->pc != 0x145E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD30_0x14ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E60u; }
        if (ctx->pc != 0x145E60u) { return; }
    }
    ctx->pc = 0x145E60u;
label_145e60:
    // 0x145e60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x145e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145e64: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x145e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x145e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145E68u;
    {
        const bool branch_taken_0x145e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e68) {
            ctx->pc = 0x145E7Cu;
            goto label_145e7c;
        }
    }
    ctx->pc = 0x145E70u;
    // 0x145e70: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x145e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145e74: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x145E74u;
    SET_GPR_U32(ctx, 31, 0x145E7Cu);
    ctx->pc = 0x145E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E74u;
            // 0x145e78: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E7Cu; }
        if (ctx->pc != 0x145E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E7Cu; }
        if (ctx->pc != 0x145E7Cu) { return; }
    }
    ctx->pc = 0x145E7Cu;
label_145e7c:
    // 0x145e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_145e80:
    // 0x145e80: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x145E80u;
    SET_GPR_U32(ctx, 31, 0x145E88u);
    ctx->pc = 0x145E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E80u;
            // 0x145e84: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E88u; }
        if (ctx->pc != 0x145E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E88u; }
        if (ctx->pc != 0x145E88u) { return; }
    }
    ctx->pc = 0x145E88u;
label_145e88:
    // 0x145e88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x145e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_145e8c:
    // 0x145e8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x145e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145e90: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x145e90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x145e94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x145e94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145e98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x145e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145e9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x145e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x145ea0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x145ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145ea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x145ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145ea8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x145ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145eac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x145eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x145EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EB4u;
            // 0x145eb8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145EBCu;
    // 0x145ebc: 0x0  nop
    ctx->pc = 0x145ebcu;
    // NOP
}
