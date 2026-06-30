#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190B60
// Address: 0x190b60 - 0x190fc8
void sub_00190B60_0x190b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190B60_0x190b60");
#endif

    ctx->pc = 0x190b60u;

    // 0x190b60: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x190b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190b64: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x190b68: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x190b68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x190b6c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x190b6cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b70: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x190b70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x190b74: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x190b74u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190b78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190b7c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x190b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x190b80: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190b80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190b84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190b88: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x190b88u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190b8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190b90: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x190b90u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190b94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190b98: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190b98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190b9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ba0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190ba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190ba4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ba8: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x190ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x190bac: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190bacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190bb0: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x190bb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x190bb4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190bb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190bb8: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x190bb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190bbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190bc0: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x190bc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190bc8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190bcc: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x190bccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x190bd0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x190bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x190bd4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190bd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190bd8: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x190bd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x190bdc: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x190bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x190be0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190be0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190be4: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x190be4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x190be8: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x190be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x190bec: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190becu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190bf0: 0xaa5004  sllv        $t2, $t2, $a1
    ctx->pc = 0x190bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
    // 0x190bf4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x190BF4u;
    {
        const bool branch_taken_0x190bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190BF4u;
            // 0x190bf8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bf4) {
            ctx->pc = 0x190C60u;
            goto label_190c60;
        }
    }
    ctx->pc = 0x190BFCu;
    // 0x190bfc: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x190bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x190c00: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x190C00u;
    {
        const bool branch_taken_0x190c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190C00u;
            // 0x190c04: 0x81042  srl         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c00) {
            ctx->pc = 0x190C18u;
            goto label_190c18;
        }
    }
    ctx->pc = 0x190C08u;
    // 0x190c08: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x190c08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x190c0c: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x190c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190C10u;
    {
        const bool branch_taken_0x190c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190C10u;
            // 0x190c14: 0x85040  sll         $t2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c10) {
            ctx->pc = 0x190C20u;
            goto label_190c20;
        }
    }
    ctx->pc = 0x190C18u;
label_190c18:
    // 0x190c18: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x190c1c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x190c1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_190c20:
    // 0x190c20: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190c20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190c28: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190c30: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190c30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190c34: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190c34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c38: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190c3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190c40: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190c44: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c48: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190c4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190c50: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190C54u;
    {
        const bool branch_taken_0x190c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190C54u;
            // 0x190c58: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c54) {
            ctx->pc = 0x190C6Cu;
            goto label_190c6c;
        }
    }
    ctx->pc = 0x190C5Cu;
    // 0x190c5c: 0x0  nop
    ctx->pc = 0x190c5cu;
    // NOP
label_190c60:
    // 0x190c60: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x190c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x190c64: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x190c68: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x190c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_190c6c:
    // 0x190c6c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x190c70: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x190c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x190c74: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x190C74u;
    {
        const bool branch_taken_0x190c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c74) {
            ctx->pc = 0x190C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190C74u;
            // 0x190c78: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190CBCu;
            goto label_190cbc;
        }
    }
    ctx->pc = 0x190C7Cu;
    // 0x190c7c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x190c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x190c80: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x190c80u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x190c84: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190c84u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190c88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190c8c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190c8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190c94: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190c94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190c98: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190c98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190c9c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190c9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190ca0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ca4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190ca8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190cac: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190cb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190cb4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190cb8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190cb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_190cbc:
    // 0x190cbc: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x190cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x190cc0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x190CC0u;
    {
        const bool branch_taken_0x190cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CC0u;
            // 0x190cc4: 0xa6742  srl         $t4, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cc0) {
            ctx->pc = 0x190D30u;
            goto label_190d30;
        }
    }
    ctx->pc = 0x190CC8u;
    // 0x190cc8: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x190ccc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x190CCCu;
    {
        const bool branch_taken_0x190ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CCCu;
            // 0x190cd0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ccc) {
            ctx->pc = 0x190CF0u;
            goto label_190cf0;
        }
    }
    ctx->pc = 0x190CD4u;
    // 0x190cd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x190cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x190cd8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x190cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x190cdc: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x190cdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x190ce0: 0xa6742  srl         $t4, $t2, 29
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x190ce4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190CE4u;
    {
        const bool branch_taken_0x190ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CE4u;
            // 0x190ce8: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ce4) {
            ctx->pc = 0x190CF4u;
            goto label_190cf4;
        }
    }
    ctx->pc = 0x190CECu;
    // 0x190cec: 0x0  nop
    ctx->pc = 0x190cecu;
    // NOP
label_190cf0:
    // 0x190cf0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x190cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_190cf4:
    // 0x190cf4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190cf4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190cf8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190cfc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d04: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190d04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190d08: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d0c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190d0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190d10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d14: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190d14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190d18: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190d18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d1c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190d1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190d20: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d24: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190d24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190D28u;
    {
        const bool branch_taken_0x190d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D28u;
            // 0x190d2c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d28) {
            ctx->pc = 0x190D38u;
            goto label_190d38;
        }
    }
    ctx->pc = 0x190D30u;
label_190d30:
    // 0x190d30: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x190d30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x190d34: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x190d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_190d38:
    // 0x190d38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190d3c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x190d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x190d40: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x190D40u;
    {
        const bool branch_taken_0x190d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d40) {
            ctx->pc = 0x190D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190D40u;
            // 0x190d44: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190D88u;
            goto label_190d88;
        }
    }
    ctx->pc = 0x190D48u;
    // 0x190d48: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x190d4c: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x190d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x190d50: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d58: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d60: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190d64: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d68: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190d68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190d6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d70: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190d70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190d74: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190d74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190d78: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190d78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190d7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d80: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190d80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190d84: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190d84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_190d88:
    // 0x190d88: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x190d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x190d8c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x190D8Cu;
    {
        const bool branch_taken_0x190d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D8Cu;
            // 0x190d90: 0xa5c42  srl         $t3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d8c) {
            ctx->pc = 0x190DF8u;
            goto label_190df8;
        }
    }
    ctx->pc = 0x190D94u;
    // 0x190d94: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x190d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x190d98: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190D98u;
    {
        const bool branch_taken_0x190d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D98u;
            // 0x190d9c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d98) {
            ctx->pc = 0x190DB8u;
            goto label_190db8;
        }
    }
    ctx->pc = 0x190DA0u;
    // 0x190da0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x190da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x190da4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x190da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x190da8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x190dac: 0xa5c42  srl         $t3, $t2, 17
    ctx->pc = 0x190dacu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x190db0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190DB0u;
    {
        const bool branch_taken_0x190db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190DB0u;
            // 0x190db4: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190db0) {
            ctx->pc = 0x190DBCu;
            goto label_190dbc;
        }
    }
    ctx->pc = 0x190DB8u;
label_190db8:
    // 0x190db8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x190db8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_190dbc:
    // 0x190dbc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190dc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190dc4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190dc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190dc8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190dcc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190dccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190dd0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190dd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190dd4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190dd8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ddc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190de0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190de0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190de4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190de8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190de8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190dec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190decu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190DF0u;
    {
        const bool branch_taken_0x190df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190DF0u;
            // 0x190df4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190df0) {
            ctx->pc = 0x190E00u;
            goto label_190e00;
        }
    }
    ctx->pc = 0x190DF8u;
label_190df8:
    // 0x190df8: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x190dfc: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x190dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_190e00:
    // 0x190e00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190e04: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x190e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x190e08: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x190E08u;
    {
        const bool branch_taken_0x190e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e08) {
            ctx->pc = 0x190E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190E08u;
            // 0x190e0c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190E50u;
            goto label_190e50;
        }
    }
    ctx->pc = 0x190E10u;
    // 0x190e10: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x190e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x190e14: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x190e14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x190e18: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190e18u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190e20: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190e28: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190e2c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190e2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e30: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190e34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190e38: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190e3c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e40: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190e44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190e44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190e48: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190e48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190e4c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_190e50:
    // 0x190e50: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x190e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x190e54: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x190E54u;
    {
        const bool branch_taken_0x190e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E54u;
            // 0x190e58: 0xa3c42  srl         $a3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e54) {
            ctx->pc = 0x190EC0u;
            goto label_190ec0;
        }
    }
    ctx->pc = 0x190E5Cu;
    // 0x190e5c: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x190e60: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190E60u;
    {
        const bool branch_taken_0x190e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E60u;
            // 0x190e64: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e60) {
            ctx->pc = 0x190E80u;
            goto label_190e80;
        }
    }
    ctx->pc = 0x190E68u;
    // 0x190e68: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x190e6c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x190e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x190e70: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x190e70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x190e74: 0xa3c42  srl         $a3, $t2, 17
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x190e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190E78u;
    {
        const bool branch_taken_0x190e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E78u;
            // 0x190e7c: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e78) {
            ctx->pc = 0x190E84u;
            goto label_190e84;
        }
    }
    ctx->pc = 0x190E80u;
label_190e80:
    // 0x190e80: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x190e80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_190e84:
    // 0x190e84: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190e8c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190e8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190e94: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190e98: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190e98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190e9c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190e9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190ea0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ea4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190ea8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190ea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190eac: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190eb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190eb4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190EB8u;
    {
        const bool branch_taken_0x190eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190EB8u;
            // 0x190ebc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190eb8) {
            ctx->pc = 0x190EC8u;
            goto label_190ec8;
        }
    }
    ctx->pc = 0x190EC0u;
label_190ec0:
    // 0x190ec0: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x190ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x190ec4: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x190ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_190ec8:
    // 0x190ec8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190ecc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x190eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x190ed0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x190ED0u;
    {
        const bool branch_taken_0x190ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ed0) {
            ctx->pc = 0x190ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190ED0u;
            // 0x190ed4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190F18u;
            goto label_190f18;
        }
    }
    ctx->pc = 0x190ED8u;
    // 0x190ed8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x190edc: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x190edcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x190ee0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190ee4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ee8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190eec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190ef0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190ef4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190ef4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190ef8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190ef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190efc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190f00: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190f04: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190f08: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190f0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190f10: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190f10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190f14: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_190f18:
    // 0x190f18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190f1c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x190f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x190f20: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x190F20u;
    {
        const bool branch_taken_0x190f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190f20) {
            ctx->pc = 0x190F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190F20u;
            // 0x190f24: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190F60u;
            goto label_190f60;
        }
    }
    ctx->pc = 0x190F28u;
    // 0x190f28: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x190f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x190f2c: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x190f30: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x190f30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190f34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190f38: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x190f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190f3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190f40: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190f40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190f44: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x190f44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190f48: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190f4c: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x190f4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x190f50: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190f50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190f54: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x190f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x190f58: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x190f5c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x190f5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_190f60:
    // 0x190f60: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x190f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x190f64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190F64u;
    {
        const bool branch_taken_0x190f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F64u;
            // 0x190f68: 0xa3282  srl         $a2, $t2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f64) {
            ctx->pc = 0x190F8Cu;
            goto label_190f8c;
        }
    }
    ctx->pc = 0x190F6Cu;
    // 0x190f6c: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x190f70: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x190F70u;
    {
        const bool branch_taken_0x190f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f70) {
            ctx->pc = 0x190F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190F70u;
            // 0x190f74: 0x31830007  andi        $v1, $t4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
            ctx->pc = 0x190F90u;
            goto label_190f90;
        }
    }
    ctx->pc = 0x190F78u;
    // 0x190f78: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x190f7c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x190f80: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x190f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x190f84: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x190f84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x190f88: 0xa3282  srl         $a2, $t2, 10
    ctx->pc = 0x190f88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
label_190f8c:
    // 0x190f8c: 0x31830007  andi        $v1, $t4, 0x7
    ctx->pc = 0x190f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
label_190f90:
    // 0x190f90: 0x31627fff  andi        $v0, $t3, 0x7FFF
    ctx->pc = 0x190f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
    // 0x190f94: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x190f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x190f98: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x190f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x190f9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x190fa0: 0x2da20001  sltiu       $v0, $t5, 0x1
    ctx->pc = 0x190fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x190fa4: 0x30e47fff  andi        $a0, $a3, 0x7FFF
    ctx->pc = 0x190fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x190fa8: 0xadc6000c  sw          $a2, 0xC($t6)
    ctx->pc = 0x190fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 6));
    // 0x190fac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x190facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x190fb0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x190fb4: 0xadc20008  sw          $v0, 0x8($t6)
    ctx->pc = 0x190fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 2));
    // 0x190fb8: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x190fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x190fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x190FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190FBCu;
            // 0x190fc0: 0xade40000  sw          $a0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190FC4u;
    // 0x190fc4: 0x0  nop
    ctx->pc = 0x190fc4u;
    // NOP
}
