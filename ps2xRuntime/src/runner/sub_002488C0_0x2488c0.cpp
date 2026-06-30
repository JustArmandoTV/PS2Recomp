#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002488C0
// Address: 0x2488c0 - 0x2489d0
void sub_002488C0_0x2488c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002488C0_0x2488c0");
#endif

    ctx->pc = 0x2488c0u;

    // 0x2488c0: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x2488c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2488c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2488c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2488c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2488cc: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x2488ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2488d0: 0x80cb0010  lb          $t3, 0x10($a2)
    ctx->pc = 0x2488d0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2488d4: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2488d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2488d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2488dc: 0x8d85000c  lw          $a1, 0xC($t4)
    ctx->pc = 0x2488dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2488e0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2488e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2488e4: 0xa3ab000c  sb          $t3, 0xC($sp)
    ctx->pc = 0x2488e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 11));
    // 0x2488e8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x2488e8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2488ec: 0xa1490000  sb          $t1, 0x0($t2)
    ctx->pc = 0x2488ecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x2488f0: 0x83a90004  lb          $t1, 0x4($sp)
    ctx->pc = 0x2488f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2488f4: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2488F4u;
    {
        const bool branch_taken_0x2488f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488F4u;
            // 0x2488f8: 0x56140  sll         $t4, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488f4) {
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x2488FCu;
    // 0x2488fc: 0x1834821  addu        $t1, $t4, $v1
    ctx->pc = 0x2488fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x248900: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x248900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x248904: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248904u;
    {
        const bool branch_taken_0x248904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248904u;
            // 0x248908: 0x912912b0  lbu         $t1, 0x12B0($t1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248904) {
            ctx->pc = 0x248920u;
            goto label_248920;
        }
    }
    ctx->pc = 0x24890Cu;
    // 0x24890c: 0x0  nop
    ctx->pc = 0x24890cu;
    // NOP
label_248910:
    // 0x248910: 0x56140  sll         $t4, $a1, 5
    ctx->pc = 0x248910u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x248914: 0x1834821  addu        $t1, $t4, $v1
    ctx->pc = 0x248914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x248918: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x248918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x24891c: 0x91290eb0  lbu         $t1, 0xEB0($t1)
    ctx->pc = 0x24891cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3760)));
label_248920:
    // 0x248920: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x248920u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x248924: 0x1495821  addu        $t3, $t2, $t1
    ctx->pc = 0x248924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x248928: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x248928u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x24892c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x24892cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248930: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x248930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x248934: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x248934u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x248938: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x248938u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x24893c: 0x8d6b16e0  lw          $t3, 0x16E0($t3)
    ctx->pc = 0x24893cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 5856)));
    // 0x248940: 0x396b0002  xori        $t3, $t3, 0x2
    ctx->pc = 0x248940u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)2);
    // 0x248944: 0x152a000a  bne         $t1, $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x248944u;
    {
        const bool branch_taken_0x248944 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x248948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248944u;
            // 0x248948: 0x2d6b0001  sltiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248944) {
            ctx->pc = 0x248970u;
            goto label_248970;
        }
    }
    ctx->pc = 0x24894Cu;
    // 0x24894c: 0x1835021  addu        $t2, $t4, $v1
    ctx->pc = 0x24894cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x248950: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x248950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x248954: 0x914b01a0  lbu         $t3, 0x1A0($t2)
    ctx->pc = 0x248954u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 416)));
    // 0x248958: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x248958u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x24895c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x24895cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x248960: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x248964: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x248964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x248968: 0x814a09b0  lb          $t2, 0x9B0($t2)
    ctx->pc = 0x248968u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2480)));
    // 0x24896c: 0xa582b  sltu        $t3, $zero, $t2
    ctx->pc = 0x24896cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_248970:
    // 0x248970: 0x11600013  beqz        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x248970u;
    {
        const bool branch_taken_0x248970 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x248974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248970u;
            // 0x248974: 0xad0b0000  sw          $t3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248970) {
            ctx->pc = 0x2489C0u;
            goto label_2489c0;
        }
    }
    ctx->pc = 0x248978u;
    // 0x248978: 0x80c90010  lb          $t1, 0x10($a2)
    ctx->pc = 0x248978u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24897c: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x24897cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x248980: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x248980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x248984: 0xa3a90008  sb          $t1, 0x8($sp)
    ctx->pc = 0x248984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 9));
    // 0x248988: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x248988u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24898c: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x24898cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x248990: 0x83a60000  lb          $a2, 0x0($sp)
    ctx->pc = 0x248990u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248994: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x248994u;
    {
        const bool branch_taken_0x248994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x248994) {
            ctx->pc = 0x2489B0u;
            goto label_2489b0;
        }
    }
    ctx->pc = 0x24899Cu;
    // 0x24899c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x24899cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2489a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2489a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2489a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2489a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2489A8u;
    {
        const bool branch_taken_0x2489a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489A8u;
            // 0x2489ac: 0x906912b0  lbu         $t1, 0x12B0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489a8) {
            ctx->pc = 0x2489C0u;
            goto label_2489c0;
        }
    }
    ctx->pc = 0x2489B0u;
label_2489b0:
    // 0x2489b0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2489b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2489b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2489b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2489b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2489bc: 0x90690eb0  lbu         $t1, 0xEB0($v1)
    ctx->pc = 0x2489bcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3760)));
label_2489c0:
    // 0x2489c0: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x2489c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x2489c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2489C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2489C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489C4u;
            // 0x2489c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2489CCu;
    // 0x2489cc: 0x0  nop
    ctx->pc = 0x2489ccu;
    // NOP
}
