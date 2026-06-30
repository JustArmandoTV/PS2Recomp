#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00254680
// Address: 0x254680 - 0x2547b0
void sub_00254680_0x254680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254680_0x254680");
#endif

    switch (ctx->pc) {
        case 0x2546c0u: goto label_2546c0;
        default: break;
    }

    ctx->pc = 0x254680u;

    // 0x254680: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x254680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x254684: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x254684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x254688: 0x94ec0000  lhu         $t4, 0x0($a3)
    ctx->pc = 0x254688u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25468c: 0x94eb0002  lhu         $t3, 0x2($a3)
    ctx->pc = 0x25468cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x254690: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x254690u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x254694: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x254694u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x254698: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x254698u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x25469c: 0x10aa0042  beq         $a1, $t2, . + 4 + (0x42 << 2)
    ctx->pc = 0x25469Cu;
    {
        const bool branch_taken_0x25469c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x2546A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25469Cu;
            // 0x2546a0: 0x94e80008  lhu         $t0, 0x8($a3) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25469c) {
            ctx->pc = 0x2547A8u;
            goto label_2547a8;
        }
    }
    ctx->pc = 0x2546A4u;
    // 0x2546a4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2546a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2546a8: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x2546a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2546ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2546acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2546b0: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x2546b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2546b4: 0x3186ffff  andi        $a2, $t4, 0xFFFF
    ctx->pc = 0x2546b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2546b8: 0x3163ffff  andi        $v1, $t3, 0xFFFF
    ctx->pc = 0x2546b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2546bc: 0x0  nop
    ctx->pc = 0x2546bcu;
    // NOP
label_2546c0:
    // 0x2546c0: 0x94ad0008  lhu         $t5, 0x8($a1)
    ctx->pc = 0x2546c0u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2546c4: 0x10d6023  subu        $t4, $t0, $t5
    ctx->pc = 0x2546c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2546c8: 0x12d5823  subu        $t3, $t1, $t5
    ctx->pc = 0x2546c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2546cc: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x2546ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x2546d0: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x2546d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2546d4: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2546d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2546d8: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x2546d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2546dc: 0x1ab5823  subu        $t3, $t5, $t3
    ctx->pc = 0x2546dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2546e0: 0xa4ab0008  sh          $t3, 0x8($a1)
    ctx->pc = 0x2546e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x2546e4: 0x94ad000a  lhu         $t5, 0xA($a1)
    ctx->pc = 0x2546e4u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2546e8: 0x10d6023  subu        $t4, $t0, $t5
    ctx->pc = 0x2546e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2546ec: 0x12d5823  subu        $t3, $t1, $t5
    ctx->pc = 0x2546ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2546f0: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x2546f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x2546f4: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x2546f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2546f8: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2546f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2546fc: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x2546fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x254700: 0x1ab5823  subu        $t3, $t5, $t3
    ctx->pc = 0x254700u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x254704: 0xa4ab000a  sh          $t3, 0xA($a1)
    ctx->pc = 0x254704u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 11));
    // 0x254708: 0x94ad0000  lhu         $t5, 0x0($a1)
    ctx->pc = 0x254708u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25470c: 0xcd6023  subu        $t4, $a2, $t5
    ctx->pc = 0x25470cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x254710: 0xed5823  subu        $t3, $a3, $t5
    ctx->pc = 0x254710u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x254714: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x254714u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x254718: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x254718u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x25471c: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x25471cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x254720: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x254720u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x254724: 0x1ab5823  subu        $t3, $t5, $t3
    ctx->pc = 0x254724u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x254728: 0xa4ab0000  sh          $t3, 0x0($a1)
    ctx->pc = 0x254728u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x25472c: 0x94ad0004  lhu         $t5, 0x4($a1)
    ctx->pc = 0x25472cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x254730: 0xcd6023  subu        $t4, $a2, $t5
    ctx->pc = 0x254730u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x254734: 0xed5823  subu        $t3, $a3, $t5
    ctx->pc = 0x254734u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x254738: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x254738u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x25473c: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x25473cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x254740: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x254740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x254744: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x254744u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x254748: 0x1ab5823  subu        $t3, $t5, $t3
    ctx->pc = 0x254748u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x25474c: 0xa4ab0004  sh          $t3, 0x4($a1)
    ctx->pc = 0x25474cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 11));
    // 0x254750: 0x94ad0002  lhu         $t5, 0x2($a1)
    ctx->pc = 0x254750u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x254754: 0x6d6023  subu        $t4, $v1, $t5
    ctx->pc = 0x254754u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x254758: 0x8d5823  subu        $t3, $a0, $t5
    ctx->pc = 0x254758u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x25475c: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x25475cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x254760: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x254760u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x254764: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x254764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x254768: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x254768u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x25476c: 0x1ab5823  subu        $t3, $t5, $t3
    ctx->pc = 0x25476cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x254770: 0xa4ab0002  sh          $t3, 0x2($a1)
    ctx->pc = 0x254770u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x254774: 0x94ad0006  lhu         $t5, 0x6($a1)
    ctx->pc = 0x254774u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x254778: 0x6d6023  subu        $t4, $v1, $t5
    ctx->pc = 0x254778u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x25477c: 0x8d5823  subu        $t3, $a0, $t5
    ctx->pc = 0x25477cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x254780: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x254780u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x254784: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x254784u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x254788: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x254788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x25478c: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x25478cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x254790: 0x1ab5823  subu        $t3, $t5, $t3
    ctx->pc = 0x254790u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x254794: 0xa4ab0006  sh          $t3, 0x6($a1)
    ctx->pc = 0x254794u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 11));
    // 0x254798: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x254798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x25479c: 0x14aaffc8  bne         $a1, $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x25479Cu;
    {
        const bool branch_taken_0x25479c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        if (branch_taken_0x25479c) {
            ctx->pc = 0x2546C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2546c0;
        }
    }
    ctx->pc = 0x2547A4u;
    // 0x2547a4: 0x0  nop
    ctx->pc = 0x2547a4u;
    // NOP
label_2547a8:
    // 0x2547a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2547A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2547B0u;
}
