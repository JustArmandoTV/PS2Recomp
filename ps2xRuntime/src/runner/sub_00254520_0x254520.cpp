#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00254520
// Address: 0x254520 - 0x254680
void sub_00254520_0x254520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254520_0x254520");
#endif

    switch (ctx->pc) {
        case 0x254590u: goto label_254590;
        default: break;
    }

    ctx->pc = 0x254520u;

    // 0x254520: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x254520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x254524: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x254524u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x254528: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x254528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25452c: 0x94e80002  lhu         $t0, 0x2($a3)
    ctx->pc = 0x25452cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x254530: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x254530u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x254534: 0xaa082b  sltu        $at, $a1, $t2
    ctx->pc = 0x254534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x254538: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x254538u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25453c: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x25453cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x254540: 0x94eb0008  lhu         $t3, 0x8($a3)
    ctx->pc = 0x254540u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x254544: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x254544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x254548: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x254548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x25454c: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x25454cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x254550: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x254550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x254554: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x254554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x254558: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x254558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25455c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x25455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x254560: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x254560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x254564: 0x2567ffff  addiu       $a3, $t3, -0x1
    ctx->pc = 0x254564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x254568: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x254568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25456c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x25456cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x254570: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x254570u;
    {
        const bool branch_taken_0x254570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254570u;
            // 0x254574: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254570) {
            ctx->pc = 0x254678u;
            goto label_254678;
        }
    }
    ctx->pc = 0x254578u;
    // 0x254578: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x254578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x25457c: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x25457cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x254580: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x254580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x254584: 0x3186ffff  andi        $a2, $t4, 0xFFFF
    ctx->pc = 0x254584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x254588: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25458c: 0x3163ffff  andi        $v1, $t3, 0xFFFF
    ctx->pc = 0x25458cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_254590:
    // 0x254590: 0x94ad0008  lhu         $t5, 0x8($a1)
    ctx->pc = 0x254590u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x254594: 0x10d6023  subu        $t4, $t0, $t5
    ctx->pc = 0x254594u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x254598: 0x12d5823  subu        $t3, $t1, $t5
    ctx->pc = 0x254598u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x25459c: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x25459cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x2545a0: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x2545a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2545a4: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2545a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2545a8: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x2545a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2545ac: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x2545acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2545b0: 0xa4ab0008  sh          $t3, 0x8($a1)
    ctx->pc = 0x2545b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x2545b4: 0x94ad0000  lhu         $t5, 0x0($a1)
    ctx->pc = 0x2545b4u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2545b8: 0xcd6023  subu        $t4, $a2, $t5
    ctx->pc = 0x2545b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2545bc: 0xed5823  subu        $t3, $a3, $t5
    ctx->pc = 0x2545bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x2545c0: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x2545c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x2545c4: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x2545c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2545c8: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2545c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2545cc: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x2545ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2545d0: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x2545d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2545d4: 0xa4ab0000  sh          $t3, 0x0($a1)
    ctx->pc = 0x2545d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2545d8: 0x94ad000a  lhu         $t5, 0xA($a1)
    ctx->pc = 0x2545d8u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2545dc: 0x10d6023  subu        $t4, $t0, $t5
    ctx->pc = 0x2545dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2545e0: 0x12d5823  subu        $t3, $t1, $t5
    ctx->pc = 0x2545e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2545e4: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x2545e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x2545e8: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x2545e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2545ec: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2545ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2545f0: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x2545f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2545f4: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x2545f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2545f8: 0xa4ab000a  sh          $t3, 0xA($a1)
    ctx->pc = 0x2545f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 11));
    // 0x2545fc: 0x94ad0004  lhu         $t5, 0x4($a1)
    ctx->pc = 0x2545fcu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x254600: 0xcd6023  subu        $t4, $a2, $t5
    ctx->pc = 0x254600u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x254604: 0xed5823  subu        $t3, $a3, $t5
    ctx->pc = 0x254604u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x254608: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x254608u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x25460c: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x25460cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x254610: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x254610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x254614: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x254614u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x254618: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x254618u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x25461c: 0xa4ab0004  sh          $t3, 0x4($a1)
    ctx->pc = 0x25461cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 11));
    // 0x254620: 0x94ad0002  lhu         $t5, 0x2($a1)
    ctx->pc = 0x254620u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x254624: 0x6d6023  subu        $t4, $v1, $t5
    ctx->pc = 0x254624u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x254628: 0x8d5823  subu        $t3, $a0, $t5
    ctx->pc = 0x254628u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x25462c: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x25462cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x254630: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x254634: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x254634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x254638: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x254638u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x25463c: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x25463cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x254640: 0xa4ab0002  sh          $t3, 0x2($a1)
    ctx->pc = 0x254640u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x254644: 0x94ad0006  lhu         $t5, 0x6($a1)
    ctx->pc = 0x254644u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x254648: 0x6d6023  subu        $t4, $v1, $t5
    ctx->pc = 0x254648u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x25464c: 0x8d5823  subu        $t3, $a0, $t5
    ctx->pc = 0x25464cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x254650: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x254654: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x254654u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x254658: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x254658u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x25465c: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x25465cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x254660: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x254664: 0xa4ab0006  sh          $t3, 0x6($a1)
    ctx->pc = 0x254664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 11));
    // 0x254668: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x254668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x25466c: 0xaa582b  sltu        $t3, $a1, $t2
    ctx->pc = 0x25466cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x254670: 0x1560ffc7  bnez        $t3, . + 4 + (-0x39 << 2)
    ctx->pc = 0x254670u;
    {
        const bool branch_taken_0x254670 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x254670) {
            ctx->pc = 0x254590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254590;
        }
    }
    ctx->pc = 0x254678u;
label_254678:
    // 0x254678: 0x3e00008  jr          $ra
    ctx->pc = 0x254678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254680u;
}
