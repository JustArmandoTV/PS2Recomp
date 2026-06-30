#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001668E8
// Address: 0x1668e8 - 0x166a10
void sub_001668E8_0x1668e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001668E8_0x1668e8");
#endif

    switch (ctx->pc) {
        case 0x166918u: goto label_166918;
        case 0x1669e4u: goto label_1669e4;
        default: break;
    }

    ctx->pc = 0x1668e8u;

    // 0x1668e8: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x1668e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x1668ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1668ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1668f0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1668f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1668f4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1668f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1668f8: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1668F8u;
    {
        const bool branch_taken_0x1668f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1668FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1668F8u;
            // 0x1668fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668f8) {
            ctx->pc = 0x166944u;
            goto label_166944;
        }
    }
    ctx->pc = 0x166900u;
    // 0x166900: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x166900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166904: 0x54490004  bnel        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166904u;
    {
        const bool branch_taken_0x166904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x166904) {
            ctx->pc = 0x166908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166904u;
            // 0x166908: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166918u;
            goto label_166918;
        }
    }
    ctx->pc = 0x16690Cu;
    // 0x16690c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16690Cu;
    {
        const bool branch_taken_0x16690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16690Cu;
            // 0x166910: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16690c) {
            ctx->pc = 0x166944u;
            goto label_166944;
        }
    }
    ctx->pc = 0x166914u;
    // 0x166914: 0x0  nop
    ctx->pc = 0x166914u;
    // NOP
label_166918:
    // 0x166918: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x166918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16691c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16691Cu;
    {
        const bool branch_taken_0x16691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16691Cu;
            // 0x166920: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16691c) {
            ctx->pc = 0x166944u;
            goto label_166944;
        }
    }
    ctx->pc = 0x166924u;
    // 0x166924: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x166924u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166928: 0x0  nop
    ctx->pc = 0x166928u;
    // NOP
    // 0x16692c: 0x0  nop
    ctx->pc = 0x16692cu;
    // NOP
    // 0x166930: 0x0  nop
    ctx->pc = 0x166930u;
    // NOP
    // 0x166934: 0x5449fff8  bnel        $v0, $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x166934u;
    {
        const bool branch_taken_0x166934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x166934) {
            ctx->pc = 0x166938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166934u;
            // 0x166938: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166918;
        }
    }
    ctx->pc = 0x16693Cu;
    // 0x16693c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x16693cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x166940: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x166940u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_166944:
    // 0x166944: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x166944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x166948: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x166948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16694c: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16694Cu;
    {
        const bool branch_taken_0x16694c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x16694c) {
            ctx->pc = 0x166950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16694Cu;
            // 0x166950: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166960u;
            goto label_166960;
        }
    }
    ctx->pc = 0x166954u;
    // 0x166954: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x166954u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x166958: 0x3e00008  jr          $ra
    ctx->pc = 0x166958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166958u;
            // 0x16695c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166960u;
label_166960:
    // 0x166960: 0x3e00008  jr          $ra
    ctx->pc = 0x166960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166960u;
            // 0x166964: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166968u;
    // 0x166968: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x166968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16696c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16696cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166970: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x166970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x166974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16697c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x16697cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166984: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x166984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166988: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x166988u;
    {
        const bool branch_taken_0x166988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166988u;
            // 0x16698c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166988) {
            ctx->pc = 0x1669F8u;
            goto label_1669f8;
        }
    }
    ctx->pc = 0x166990u;
    // 0x166990: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x166990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x166994: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166998: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x166998u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x16699c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x16699cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1669a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1669a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1669a4: 0x14850015  bne         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1669A4u;
    {
        const bool branch_taken_0x1669a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1669A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669A4u;
            // 0x1669a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669a4) {
            ctx->pc = 0x1669FCu;
            goto label_1669fc;
        }
    }
    ctx->pc = 0x1669ACu;
    // 0x1669ac: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x1669acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1669b0: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x1669b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1669b4: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x1669b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1669b8: 0xa8282a  slt         $a1, $a1, $t0
    ctx->pc = 0x1669b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1669bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1669bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1669c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1669c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1669c4: 0x2464fffe  addiu       $a0, $v1, -0x2
    ctx->pc = 0x1669c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1669c8: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1669c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1669cc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1669CCu;
    {
        const bool branch_taken_0x1669cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669CCu;
            // 0x1669d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669cc) {
            ctx->pc = 0x1669F8u;
            goto label_1669f8;
        }
    }
    ctx->pc = 0x1669D4u;
    // 0x1669d4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1669d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1669d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1669d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1669dc: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1669DCu;
    SET_GPR_U32(ctx, 31, 0x1669E4u);
    ctx->pc = 0x1669E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1669DCu;
            // 0x1669e0: 0x24a532e0  addiu       $a1, $a1, 0x32E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669E4u; }
        if (ctx->pc != 0x1669E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669E4u; }
        if (ctx->pc != 0x1669E4u) { return; }
    }
    ctx->pc = 0x1669E4u;
label_1669e4:
    // 0x1669e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1669E4u;
    {
        const bool branch_taken_0x1669e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1669E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669E4u;
            // 0x1669e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669e4) {
            ctx->pc = 0x1669F8u;
            goto label_1669f8;
        }
    }
    ctx->pc = 0x1669ECu;
    // 0x1669ec: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1669ECu;
    {
        const bool branch_taken_0x1669ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1669ec) {
            ctx->pc = 0x1669F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1669ECu;
            // 0x1669f0: 0xa6300000  sh          $s0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1669F4u;
            goto label_1669f4;
        }
    }
    ctx->pc = 0x1669F4u;
label_1669f4:
    // 0x1669f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1669f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1669f8:
    // 0x1669f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1669f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1669fc:
    // 0x1669fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1669fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166a04: 0x3e00008  jr          $ra
    ctx->pc = 0x166A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A04u;
            // 0x166a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166A0Cu;
    // 0x166a0c: 0x0  nop
    ctx->pc = 0x166a0cu;
    // NOP
}
