#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166C08
// Address: 0x166c08 - 0x166e08
void sub_00166C08_0x166c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166C08_0x166c08");
#endif

    switch (ctx->pc) {
        case 0x166c3cu: goto label_166c3c;
        case 0x166d84u: goto label_166d84;
        default: break;
    }

    ctx->pc = 0x166c08u;

    // 0x166c08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166c0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x166c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x166c10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x166c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x166c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x166c18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x166c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c20: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x166c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x166c24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x166c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x166c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x166c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x166c30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166c34: 0xc059ae4  jal         func_166B90
    ctx->pc = 0x166C34u;
    SET_GPR_U32(ctx, 31, 0x166C3Cu);
    ctx->pc = 0x166C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C34u;
            // 0x166c38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B90u;
    if (runtime->hasFunction(0x166B90u)) {
        auto targetFn = runtime->lookupFunction(0x166B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C3Cu; }
        if (ctx->pc != 0x166C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B90_0x166b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C3Cu; }
        if (ctx->pc != 0x166C3Cu) { return; }
    }
    ctx->pc = 0x166C3Cu;
label_166c3c:
    // 0x166c3c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x166C3Cu;
    {
        const bool branch_taken_0x166c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C3Cu;
            // 0x166c40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c3c) {
            ctx->pc = 0x166D20u;
            goto label_166d20;
        }
    }
    ctx->pc = 0x166C44u;
    // 0x166c44: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x166c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c48: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x166c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x166c4c: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x166C4Cu;
    {
        const bool branch_taken_0x166c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166c4c) {
            ctx->pc = 0x166C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166C4Cu;
            // 0x166c50: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166D10u;
            goto label_166d10;
        }
    }
    ctx->pc = 0x166C54u;
    // 0x166c54: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x166c54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x166c58: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x166C58u;
    {
        const bool branch_taken_0x166c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C58u;
            // 0x166c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c58) {
            ctx->pc = 0x166D20u;
            goto label_166d20;
        }
    }
    ctx->pc = 0x166C60u;
    // 0x166c60: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x166c60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166c64: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166c68: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x166c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x166c6c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x166c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166c70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x166c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x166c74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166c78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x166c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166c7c: 0x14650028  bne         $v1, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x166C7Cu;
    {
        const bool branch_taken_0x166c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x166C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C7Cu;
            // 0x166c80: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c7c) {
            ctx->pc = 0x166D20u;
            goto label_166d20;
        }
    }
    ctx->pc = 0x166C84u;
    // 0x166c84: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x166c84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x166c88: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x166c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x166c8c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x166c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x166c90: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x166c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x166c94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166c98: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x166c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x166c9c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x166c9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x166ca0: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x166ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x166ca4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x166CA4u;
    {
        const bool branch_taken_0x166ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CA4u;
            // 0x166ca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ca4) {
            ctx->pc = 0x166D20u;
            goto label_166d20;
        }
    }
    ctx->pc = 0x166CACu;
    // 0x166cac: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x166cacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x166cb0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x166cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x166cb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x166cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x166cb8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x166cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x166cbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166cc0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x166cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x166cc4: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x166cc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x166cc8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x166cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166ccc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x166cd0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x166cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x166cd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x166cd8: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x166cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x166cdc: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x166cdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x166ce0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x166ce4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x166ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x166ce8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x166ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x166cec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166cf0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x166cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x166cf4: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x166cf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x166cf8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x166cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166cfc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x166cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x166d00: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x166d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x166d04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x166d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166D08u;
    {
        const bool branch_taken_0x166d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D08u;
            // 0x166d0c: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d08) {
            ctx->pc = 0x166D1Cu;
            goto label_166d1c;
        }
    }
    ctx->pc = 0x166D10u;
label_166d10:
    // 0x166d10: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x166d10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d14: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x166d14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d18: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x166d18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_166d1c:
    // 0x166d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166d20:
    // 0x166d20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x166d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166d24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x166d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x166d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166d2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x166d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x166d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166d34: 0x3e00008  jr          $ra
    ctx->pc = 0x166D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D34u;
            // 0x166d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166D3Cu;
    // 0x166d3c: 0x0  nop
    ctx->pc = 0x166d3cu;
    // NOP
    // 0x166d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x166d44: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x166d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x166d48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x166d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d4c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x166d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x166d50: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x166d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d54: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x166d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x166d58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x166d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d5c: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x166d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x166d60: 0x27a80012  addiu       $t0, $sp, 0x12
    ctx->pc = 0x166d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x166d64: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x166d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x166d68: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x166d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x166d6c: 0x27a9001c  addiu       $t1, $sp, 0x1C
    ctx->pc = 0x166d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x166d70: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x166d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166d74: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x166d74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x166d78: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x166d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x166d7c: 0xc059b82  jal         func_166E08
    ctx->pc = 0x166D7Cu;
    SET_GPR_U32(ctx, 31, 0x166D84u);
    ctx->pc = 0x166D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D7Cu;
            // 0x166d80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166E08u;
    if (runtime->hasFunction(0x166E08u)) {
        auto targetFn = runtime->lookupFunction(0x166E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D84u; }
        if (ctx->pc != 0x166D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166E08_0x166e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D84u; }
        if (ctx->pc != 0x166D84u) { return; }
    }
    ctx->pc = 0x166D84u;
label_166d84:
    // 0x166d84: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166D90u;
    {
        const bool branch_taken_0x166d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x166D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D90u;
            // 0x166d94: 0x97a50010  lhu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d90) {
            ctx->pc = 0x166DA0u;
            goto label_166da0;
        }
    }
    ctx->pc = 0x166D98u;
    // 0x166d98: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x166d98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166da0:
    // 0x166da0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x166DA0u;
    {
        const bool branch_taken_0x166da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DA0u;
            // 0x166da4: 0xa6050000  sh          $a1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166da0) {
            ctx->pc = 0x166DE8u;
            goto label_166de8;
        }
    }
    ctx->pc = 0x166DA8u;
    // 0x166da8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166dac: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x166dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x166db0: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x166db0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x166db4: 0x24a807ff  addiu       $t0, $a1, 0x7FF
    ctx->pc = 0x166db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x166db8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x166db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166dbc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x166dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x166dc0: 0x104180b  movn        $v1, $t0, $a0
    ctx->pc = 0x166dc0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x166dc4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x166dc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x166dc8: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x166dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x166dcc: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x166dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x166dd0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x166dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x166dd4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x166dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x166dd8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x166dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x166ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166DDCu;
    {
        const bool branch_taken_0x166ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DDCu;
            // 0x166de0: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ddc) {
            ctx->pc = 0x166DF0u;
            goto label_166df0;
        }
    }
    ctx->pc = 0x166DE4u;
    // 0x166de4: 0x0  nop
    ctx->pc = 0x166de4u;
    // NOP
label_166de8:
    // 0x166de8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x166de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x166dec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x166decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_166df0:
    // 0x166df0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x166df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166df4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x166df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166df8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x166df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166dfc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x166dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166e00: 0x3e00008  jr          $ra
    ctx->pc = 0x166E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E00u;
            // 0x166e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166E08u;
}
