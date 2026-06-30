#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001638E8
// Address: 0x1638e8 - 0x163c00
void sub_001638E8_0x1638e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001638E8_0x1638e8");
#endif

    ctx->pc = 0x1638e8u;

    // 0x1638e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1638e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1638ec: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1638ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1638f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1638f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1638f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1638f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1638fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1638fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163900: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x163900u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x163904: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x163904u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163908: 0x91cb0003  lbu         $t3, 0x3($t6)
    ctx->pc = 0x163908u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x16390c: 0x358c732e  ori         $t4, $t4, 0x732E
    ctx->pc = 0x16390cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)29486);
    // 0x163910: 0x91c30002  lbu         $v1, 0x2($t6)
    ctx->pc = 0x163910u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x163914: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x163914u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163918: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x163918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x16391c: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x16391cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x163920: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x163920u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x163924: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x163928: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x163928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x16392c: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x16392cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163930: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x163930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x163934: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163938: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x163938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16393c: 0x108c0005  beq         $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x16393Cu;
    {
        const bool branch_taken_0x16393c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x163940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16393Cu;
            // 0x163940: 0x25cb0004  addiu       $t3, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16393c) {
            ctx->pc = 0x163954u;
            goto label_163954;
        }
    }
    ctx->pc = 0x163944u;
    // 0x163944: 0x3c03646e  lui         $v1, 0x646E
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25710 << 16));
    // 0x163948: 0x3463732e  ori         $v1, $v1, 0x732E
    ctx->pc = 0x163948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29486);
    // 0x16394c: 0x148300a8  bne         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x16394Cu;
    {
        const bool branch_taken_0x16394c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x163950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16394Cu;
            // 0x163950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16394c) {
            ctx->pc = 0x163BF0u;
            goto label_163bf0;
        }
    }
    ctx->pc = 0x163954u;
label_163954:
    // 0x163954: 0x91660003  lbu         $a2, 0x3($t3)
    ctx->pc = 0x163954u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x163958: 0x3c0f00ff  lui         $t7, 0xFF
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
    // 0x16395c: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x16395cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x163960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163964: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x163964u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x163968: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x163968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x16396c: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x16396cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x163970: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x163974: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x163974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x163978: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x163978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x16397c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x16397cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x163980: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x163980u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163984: 0xc3202  srl         $a2, $t4, 8
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x163988: 0xc2a00  sll         $a1, $t4, 8
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x16398c: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x16398cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x163990: 0xc1e02  srl         $v1, $t4, 24
    ctx->pc = 0x163990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x163994: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x163994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x163998: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x163998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x16399c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16399cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1639a0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1639a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1639a4: 0x656025  or          $t4, $v1, $a1
    ctx->pc = 0x1639a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1639a8: 0x32c202a  slt         $a0, $t9, $t4
    ctx->pc = 0x1639a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1639ac: 0x14800090  bnez        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1639ACu;
    {
        const bool branch_taken_0x1639ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1639ACu;
            // 0x1639b0: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639ac) {
            ctx->pc = 0x163BF0u;
            goto label_163bf0;
        }
    }
    ctx->pc = 0x1639B4u;
    // 0x1639b4: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x1639b4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1639b8: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x1639b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1639bc: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x1639bcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1639c0: 0x91660002  lbu         $a2, 0x2($t3)
    ctx->pc = 0x1639c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1639c4: 0x91670001  lbu         $a3, 0x1($t3)
    ctx->pc = 0x1639c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1639c8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1639c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1639cc: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x1639ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1639d0: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1639d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1639d4: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x1639d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1639d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1639d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1639dc: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x1639dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1639e0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1639e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1639e4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x1639e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1639e8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1639e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1639ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1639ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1639f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1639f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1639f4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1639f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1639f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1639f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1639fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1639fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x163a00: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x163a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163a04: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x163a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x163a08: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x163a0c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x163a0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x163a10: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x163a10u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x163a14: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x163a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x163a18: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x163a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x163a1c: 0x93a02  srl         $a3, $t1, 8
    ctx->pc = 0x163a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x163a20: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x163a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x163a24: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x163a28: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x163a2c: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x163a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x163a30: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x163a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x163a34: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x163a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x163a38: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x163a3c: 0x92600  sll         $a0, $t1, 24
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x163a40: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x163a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x163a44: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x163a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x163a48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x163a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x163a4c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x163a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x163a50: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x163a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x163a54: 0x10990012  beq         $a0, $t9, . + 4 + (0x12 << 2)
    ctx->pc = 0x163A54u;
    {
        const bool branch_taken_0x163a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 25));
        ctx->pc = 0x163A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A54u;
            // 0x163a58: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a54) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x163A5Cu;
    // 0x163a5c: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x163a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x163a60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163A60u;
    {
        const bool branch_taken_0x163a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A60u;
            // 0x163a64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a60) {
            ctx->pc = 0x163A80u;
            goto label_163a80;
        }
    }
    ctx->pc = 0x163A68u;
    // 0x163a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163a6c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x163A6Cu;
    {
        const bool branch_taken_0x163a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x163A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A6Cu;
            // 0x163a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a6c) {
            ctx->pc = 0x163A90u;
            goto label_163a90;
        }
    }
    ctx->pc = 0x163A74u;
    // 0x163a74: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x163A74u;
    {
        const bool branch_taken_0x163a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A74u;
            // 0x163a78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a74) {
            ctx->pc = 0x163BF4u;
            goto label_163bf4;
        }
    }
    ctx->pc = 0x163A7Cu;
    // 0x163a7c: 0x0  nop
    ctx->pc = 0x163a7cu;
    // NOP
label_163a80:
    // 0x163a80: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x163A80u;
    {
        const bool branch_taken_0x163a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A80u;
            // 0x163a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a80) {
            ctx->pc = 0x163AB8u;
            goto label_163ab8;
        }
    }
    ctx->pc = 0x163A88u;
    // 0x163a88: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x163A88u;
    {
        const bool branch_taken_0x163a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A88u;
            // 0x163a8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a88) {
            ctx->pc = 0x163BF4u;
            goto label_163bf4;
        }
    }
    ctx->pc = 0x163A90u;
label_163a90:
    // 0x163a90: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x163a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x163a94: 0xad590000  sw          $t9, 0x0($t2)
    ctx->pc = 0x163a94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 25));
    // 0x163a98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163A98u;
    {
        const bool branch_taken_0x163a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A98u;
            // 0x163a9c: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a98) {
            ctx->pc = 0x163AC4u;
            goto label_163ac4;
        }
    }
    ctx->pc = 0x163AA0u;
label_163aa0:
    // 0x163aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163aa4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x163aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x163aa8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x163aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x163aac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163AACu;
    {
        const bool branch_taken_0x163aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163AACu;
            // 0x163ab0: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163aac) {
            ctx->pc = 0x163AC4u;
            goto label_163ac4;
        }
    }
    ctx->pc = 0x163AB4u;
    // 0x163ab4: 0x0  nop
    ctx->pc = 0x163ab4u;
    // NOP
label_163ab8:
    // 0x163ab8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x163abc: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x163abcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x163ac0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x163ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_163ac4:
    // 0x163ac4: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x163ac4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x163ac8: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x163acc: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x163accu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x163ad0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x163ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163ad4: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x163ad4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x163ad8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x163ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x163adc: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x163adcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x163ae0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x163ae0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x163ae4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x163ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x163ae8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x163ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x163aec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163af0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163af4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x163af8: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x163afc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x163afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x163b00: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x163b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x163b04: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x163b08: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x163b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x163b0c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x163b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x163b10: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x163b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x163b14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x163b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x163b18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163b1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x163b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x163b20: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x163b20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x163b24: 0x91640003  lbu         $a0, 0x3($t3)
    ctx->pc = 0x163b24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x163b28: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x163b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x163b2c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x163b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x163b30: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x163b30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x163b34: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x163b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x163b38: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x163b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x163b3c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x163b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x163b40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x163b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x163b44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x163b48: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x163b4c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x163b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x163b50: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x163b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x163b54: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x163b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x163b58: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x163b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x163b5c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x163b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x163b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x163b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x163b64: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x163b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x163b68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163b6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x163b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x163b70: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x163b74: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x163B74u;
    {
        const bool branch_taken_0x163b74 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x163B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B74u;
            // 0x163b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b74) {
            ctx->pc = 0x163B98u;
            goto label_163b98;
        }
    }
    ctx->pc = 0x163B7Cu;
    // 0x163b7c: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x163b7cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163b80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x163B80u;
    {
        const bool branch_taken_0x163b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b80) {
            ctx->pc = 0x163B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163B80u;
            // 0x163b84: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x163B88u;
            goto label_163b88;
        }
    }
    ctx->pc = 0x163B88u;
label_163b88:
    // 0x163b88: 0x1012  mflo        $v0
    ctx->pc = 0x163b88u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x163b8c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x163B8Cu;
    {
        const bool branch_taken_0x163b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B8Cu;
            // 0x163b90: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b8c) {
            ctx->pc = 0x163BECu;
            goto label_163bec;
        }
    }
    ctx->pc = 0x163B94u;
    // 0x163b94: 0x0  nop
    ctx->pc = 0x163b94u;
    // NOP
label_163b98:
    // 0x163b98: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163B98u;
    {
        const bool branch_taken_0x163b98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x163b98) {
            ctx->pc = 0x163BB8u;
            goto label_163bb8;
        }
    }
    ctx->pc = 0x163BA0u;
    // 0x163ba0: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x163ba0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163ba4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x163BA4u;
    {
        const bool branch_taken_0x163ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ba4) {
            ctx->pc = 0x163BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163BA4u;
            // 0x163ba8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x163BACu;
            goto label_163bac;
        }
    }
    ctx->pc = 0x163BACu;
label_163bac:
    // 0x163bac: 0x1012  mflo        $v0
    ctx->pc = 0x163bacu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x163bb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163BB0u;
    {
        const bool branch_taken_0x163bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BB0u;
            // 0x163bb4: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bb0) {
            ctx->pc = 0x163BECu;
            goto label_163bec;
        }
    }
    ctx->pc = 0x163BB8u;
label_163bb8:
    // 0x163bb8: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x163BB8u;
    {
        const bool branch_taken_0x163bb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x163BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BB8u;
            // 0x163bbc: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bb8) {
            ctx->pc = 0x163BE8u;
            goto label_163be8;
        }
    }
    ctx->pc = 0x163BC0u;
    // 0x163bc0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x163bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x163bc4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x163BC4u;
    {
        const bool branch_taken_0x163bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163bc4) {
            ctx->pc = 0x163BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163BC4u;
            // 0x163bc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x163BCCu;
            goto label_163bcc;
        }
    }
    ctx->pc = 0x163BCCu;
label_163bcc:
    // 0x163bcc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x163bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x163bd0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x163bd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x163bd4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x163bd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163bd8: 0x1012  mflo        $v0
    ctx->pc = 0x163bd8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x163bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163BDCu;
    {
        const bool branch_taken_0x163bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BDCu;
            // 0x163be0: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bdc) {
            ctx->pc = 0x163BECu;
            goto label_163bec;
        }
    }
    ctx->pc = 0x163BE4u;
    // 0x163be4: 0x0  nop
    ctx->pc = 0x163be4u;
    // NOP
label_163be8:
    // 0x163be8: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x163be8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_163bec:
    // 0x163bec: 0x1cc1021  addu        $v0, $t6, $t4
    ctx->pc = 0x163becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_163bf0:
    // 0x163bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163bf4:
    // 0x163bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x163BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BF8u;
            // 0x163bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163C00u;
}
