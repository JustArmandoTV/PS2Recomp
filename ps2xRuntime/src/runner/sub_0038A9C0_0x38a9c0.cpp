#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038A9C0
// Address: 0x38a9c0 - 0x38ad40
void sub_0038A9C0_0x38a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A9C0_0x38a9c0");
#endif

    switch (ctx->pc) {
        case 0x38a9c0u: goto label_38a9c0;
        case 0x38a9c4u: goto label_38a9c4;
        case 0x38a9c8u: goto label_38a9c8;
        case 0x38a9ccu: goto label_38a9cc;
        case 0x38a9d0u: goto label_38a9d0;
        case 0x38a9d4u: goto label_38a9d4;
        case 0x38a9d8u: goto label_38a9d8;
        case 0x38a9dcu: goto label_38a9dc;
        case 0x38a9e0u: goto label_38a9e0;
        case 0x38a9e4u: goto label_38a9e4;
        case 0x38a9e8u: goto label_38a9e8;
        case 0x38a9ecu: goto label_38a9ec;
        case 0x38a9f0u: goto label_38a9f0;
        case 0x38a9f4u: goto label_38a9f4;
        case 0x38a9f8u: goto label_38a9f8;
        case 0x38a9fcu: goto label_38a9fc;
        case 0x38aa00u: goto label_38aa00;
        case 0x38aa04u: goto label_38aa04;
        case 0x38aa08u: goto label_38aa08;
        case 0x38aa0cu: goto label_38aa0c;
        case 0x38aa10u: goto label_38aa10;
        case 0x38aa14u: goto label_38aa14;
        case 0x38aa18u: goto label_38aa18;
        case 0x38aa1cu: goto label_38aa1c;
        case 0x38aa20u: goto label_38aa20;
        case 0x38aa24u: goto label_38aa24;
        case 0x38aa28u: goto label_38aa28;
        case 0x38aa2cu: goto label_38aa2c;
        case 0x38aa30u: goto label_38aa30;
        case 0x38aa34u: goto label_38aa34;
        case 0x38aa38u: goto label_38aa38;
        case 0x38aa3cu: goto label_38aa3c;
        case 0x38aa40u: goto label_38aa40;
        case 0x38aa44u: goto label_38aa44;
        case 0x38aa48u: goto label_38aa48;
        case 0x38aa4cu: goto label_38aa4c;
        case 0x38aa50u: goto label_38aa50;
        case 0x38aa54u: goto label_38aa54;
        case 0x38aa58u: goto label_38aa58;
        case 0x38aa5cu: goto label_38aa5c;
        case 0x38aa60u: goto label_38aa60;
        case 0x38aa64u: goto label_38aa64;
        case 0x38aa68u: goto label_38aa68;
        case 0x38aa6cu: goto label_38aa6c;
        case 0x38aa70u: goto label_38aa70;
        case 0x38aa74u: goto label_38aa74;
        case 0x38aa78u: goto label_38aa78;
        case 0x38aa7cu: goto label_38aa7c;
        case 0x38aa80u: goto label_38aa80;
        case 0x38aa84u: goto label_38aa84;
        case 0x38aa88u: goto label_38aa88;
        case 0x38aa8cu: goto label_38aa8c;
        case 0x38aa90u: goto label_38aa90;
        case 0x38aa94u: goto label_38aa94;
        case 0x38aa98u: goto label_38aa98;
        case 0x38aa9cu: goto label_38aa9c;
        case 0x38aaa0u: goto label_38aaa0;
        case 0x38aaa4u: goto label_38aaa4;
        case 0x38aaa8u: goto label_38aaa8;
        case 0x38aaacu: goto label_38aaac;
        case 0x38aab0u: goto label_38aab0;
        case 0x38aab4u: goto label_38aab4;
        case 0x38aab8u: goto label_38aab8;
        case 0x38aabcu: goto label_38aabc;
        case 0x38aac0u: goto label_38aac0;
        case 0x38aac4u: goto label_38aac4;
        case 0x38aac8u: goto label_38aac8;
        case 0x38aaccu: goto label_38aacc;
        case 0x38aad0u: goto label_38aad0;
        case 0x38aad4u: goto label_38aad4;
        case 0x38aad8u: goto label_38aad8;
        case 0x38aadcu: goto label_38aadc;
        case 0x38aae0u: goto label_38aae0;
        case 0x38aae4u: goto label_38aae4;
        case 0x38aae8u: goto label_38aae8;
        case 0x38aaecu: goto label_38aaec;
        case 0x38aaf0u: goto label_38aaf0;
        case 0x38aaf4u: goto label_38aaf4;
        case 0x38aaf8u: goto label_38aaf8;
        case 0x38aafcu: goto label_38aafc;
        case 0x38ab00u: goto label_38ab00;
        case 0x38ab04u: goto label_38ab04;
        case 0x38ab08u: goto label_38ab08;
        case 0x38ab0cu: goto label_38ab0c;
        case 0x38ab10u: goto label_38ab10;
        case 0x38ab14u: goto label_38ab14;
        case 0x38ab18u: goto label_38ab18;
        case 0x38ab1cu: goto label_38ab1c;
        case 0x38ab20u: goto label_38ab20;
        case 0x38ab24u: goto label_38ab24;
        case 0x38ab28u: goto label_38ab28;
        case 0x38ab2cu: goto label_38ab2c;
        case 0x38ab30u: goto label_38ab30;
        case 0x38ab34u: goto label_38ab34;
        case 0x38ab38u: goto label_38ab38;
        case 0x38ab3cu: goto label_38ab3c;
        case 0x38ab40u: goto label_38ab40;
        case 0x38ab44u: goto label_38ab44;
        case 0x38ab48u: goto label_38ab48;
        case 0x38ab4cu: goto label_38ab4c;
        case 0x38ab50u: goto label_38ab50;
        case 0x38ab54u: goto label_38ab54;
        case 0x38ab58u: goto label_38ab58;
        case 0x38ab5cu: goto label_38ab5c;
        case 0x38ab60u: goto label_38ab60;
        case 0x38ab64u: goto label_38ab64;
        case 0x38ab68u: goto label_38ab68;
        case 0x38ab6cu: goto label_38ab6c;
        case 0x38ab70u: goto label_38ab70;
        case 0x38ab74u: goto label_38ab74;
        case 0x38ab78u: goto label_38ab78;
        case 0x38ab7cu: goto label_38ab7c;
        case 0x38ab80u: goto label_38ab80;
        case 0x38ab84u: goto label_38ab84;
        case 0x38ab88u: goto label_38ab88;
        case 0x38ab8cu: goto label_38ab8c;
        case 0x38ab90u: goto label_38ab90;
        case 0x38ab94u: goto label_38ab94;
        case 0x38ab98u: goto label_38ab98;
        case 0x38ab9cu: goto label_38ab9c;
        case 0x38aba0u: goto label_38aba0;
        case 0x38aba4u: goto label_38aba4;
        case 0x38aba8u: goto label_38aba8;
        case 0x38abacu: goto label_38abac;
        case 0x38abb0u: goto label_38abb0;
        case 0x38abb4u: goto label_38abb4;
        case 0x38abb8u: goto label_38abb8;
        case 0x38abbcu: goto label_38abbc;
        case 0x38abc0u: goto label_38abc0;
        case 0x38abc4u: goto label_38abc4;
        case 0x38abc8u: goto label_38abc8;
        case 0x38abccu: goto label_38abcc;
        case 0x38abd0u: goto label_38abd0;
        case 0x38abd4u: goto label_38abd4;
        case 0x38abd8u: goto label_38abd8;
        case 0x38abdcu: goto label_38abdc;
        case 0x38abe0u: goto label_38abe0;
        case 0x38abe4u: goto label_38abe4;
        case 0x38abe8u: goto label_38abe8;
        case 0x38abecu: goto label_38abec;
        case 0x38abf0u: goto label_38abf0;
        case 0x38abf4u: goto label_38abf4;
        case 0x38abf8u: goto label_38abf8;
        case 0x38abfcu: goto label_38abfc;
        case 0x38ac00u: goto label_38ac00;
        case 0x38ac04u: goto label_38ac04;
        case 0x38ac08u: goto label_38ac08;
        case 0x38ac0cu: goto label_38ac0c;
        case 0x38ac10u: goto label_38ac10;
        case 0x38ac14u: goto label_38ac14;
        case 0x38ac18u: goto label_38ac18;
        case 0x38ac1cu: goto label_38ac1c;
        case 0x38ac20u: goto label_38ac20;
        case 0x38ac24u: goto label_38ac24;
        case 0x38ac28u: goto label_38ac28;
        case 0x38ac2cu: goto label_38ac2c;
        case 0x38ac30u: goto label_38ac30;
        case 0x38ac34u: goto label_38ac34;
        case 0x38ac38u: goto label_38ac38;
        case 0x38ac3cu: goto label_38ac3c;
        case 0x38ac40u: goto label_38ac40;
        case 0x38ac44u: goto label_38ac44;
        case 0x38ac48u: goto label_38ac48;
        case 0x38ac4cu: goto label_38ac4c;
        case 0x38ac50u: goto label_38ac50;
        case 0x38ac54u: goto label_38ac54;
        case 0x38ac58u: goto label_38ac58;
        case 0x38ac5cu: goto label_38ac5c;
        case 0x38ac60u: goto label_38ac60;
        case 0x38ac64u: goto label_38ac64;
        case 0x38ac68u: goto label_38ac68;
        case 0x38ac6cu: goto label_38ac6c;
        case 0x38ac70u: goto label_38ac70;
        case 0x38ac74u: goto label_38ac74;
        case 0x38ac78u: goto label_38ac78;
        case 0x38ac7cu: goto label_38ac7c;
        case 0x38ac80u: goto label_38ac80;
        case 0x38ac84u: goto label_38ac84;
        case 0x38ac88u: goto label_38ac88;
        case 0x38ac8cu: goto label_38ac8c;
        case 0x38ac90u: goto label_38ac90;
        case 0x38ac94u: goto label_38ac94;
        case 0x38ac98u: goto label_38ac98;
        case 0x38ac9cu: goto label_38ac9c;
        case 0x38aca0u: goto label_38aca0;
        case 0x38aca4u: goto label_38aca4;
        case 0x38aca8u: goto label_38aca8;
        case 0x38acacu: goto label_38acac;
        case 0x38acb0u: goto label_38acb0;
        case 0x38acb4u: goto label_38acb4;
        case 0x38acb8u: goto label_38acb8;
        case 0x38acbcu: goto label_38acbc;
        case 0x38acc0u: goto label_38acc0;
        case 0x38acc4u: goto label_38acc4;
        case 0x38acc8u: goto label_38acc8;
        case 0x38acccu: goto label_38accc;
        case 0x38acd0u: goto label_38acd0;
        case 0x38acd4u: goto label_38acd4;
        case 0x38acd8u: goto label_38acd8;
        case 0x38acdcu: goto label_38acdc;
        case 0x38ace0u: goto label_38ace0;
        case 0x38ace4u: goto label_38ace4;
        case 0x38ace8u: goto label_38ace8;
        case 0x38acecu: goto label_38acec;
        case 0x38acf0u: goto label_38acf0;
        case 0x38acf4u: goto label_38acf4;
        case 0x38acf8u: goto label_38acf8;
        case 0x38acfcu: goto label_38acfc;
        case 0x38ad00u: goto label_38ad00;
        case 0x38ad04u: goto label_38ad04;
        case 0x38ad08u: goto label_38ad08;
        case 0x38ad0cu: goto label_38ad0c;
        case 0x38ad10u: goto label_38ad10;
        case 0x38ad14u: goto label_38ad14;
        case 0x38ad18u: goto label_38ad18;
        case 0x38ad1cu: goto label_38ad1c;
        case 0x38ad20u: goto label_38ad20;
        case 0x38ad24u: goto label_38ad24;
        case 0x38ad28u: goto label_38ad28;
        case 0x38ad2cu: goto label_38ad2c;
        case 0x38ad30u: goto label_38ad30;
        case 0x38ad34u: goto label_38ad34;
        case 0x38ad38u: goto label_38ad38;
        case 0x38ad3cu: goto label_38ad3c;
        default: break;
    }

    ctx->pc = 0x38a9c0u;

label_38a9c0:
    // 0x38a9c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_38a9c4:
    // 0x38a9c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_38a9c8:
    // 0x38a9c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x38a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_38a9cc:
    // 0x38a9cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x38a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_38a9d0:
    // 0x38a9d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_38a9d4:
    // 0x38a9d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38a9d8:
    // 0x38a9d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38a9dc:
    // 0x38a9dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38a9e0:
    // 0x38a9e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38a9e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a9e4:
    // 0x38a9e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38a9e8:
    // 0x38a9e8: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x38a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_38a9ec:
    // 0x38a9ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38a9f0:
    // 0x38a9f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38a9f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38a9f4:
    // 0x38a9f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a9f8:
    // 0x38a9f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38a9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a9fc:
    // 0x38a9fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x38a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_38aa00:
    // 0x38aa00: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x38aa00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38aa04:
    // 0x38aa04: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x38aa04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38aa08:
    // 0x38aa08: 0x26260a50  addiu       $a2, $s1, 0xA50
    ctx->pc = 0x38aa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_38aa0c:
    // 0x38aa0c: 0x8ce50a68  lw          $a1, 0xA68($a3)
    ctx->pc = 0x38aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2664)));
label_38aa10:
    // 0x38aa10: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x38aa10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_38aa14:
    // 0x38aa14: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x38aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38aa18:
    // 0x38aa18: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x38aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_38aa1c:
    // 0x38aa1c: 0x102000b9  beqz        $at, . + 4 + (0xB9 << 2)
label_38aa20:
    if (ctx->pc == 0x38AA20u) {
        ctx->pc = 0x38AA20u;
            // 0x38aa20: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x38AA24u;
        goto label_38aa24;
    }
    ctx->pc = 0x38AA1Cu;
    {
        const bool branch_taken_0x38aa1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AA1Cu;
            // 0x38aa20: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa1c) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AA24u;
label_38aa24:
    // 0x38aa24: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x38aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_38aa28:
    // 0x38aa28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38aa2c:
    // 0x38aa2c: 0x24845e70  addiu       $a0, $a0, 0x5E70
    ctx->pc = 0x38aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24176));
label_38aa30:
    // 0x38aa30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38aa34:
    // 0x38aa34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38aa38:
    // 0x38aa38: 0x600008  jr          $v1
label_38aa3c:
    if (ctx->pc == 0x38AA3Cu) {
        ctx->pc = 0x38AA40u;
        goto label_38aa40;
    }
    ctx->pc = 0x38AA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38AA40u: goto label_38aa40;
            case 0x38AA5Cu: goto label_38aa5c;
            case 0x38AA8Cu: goto label_38aa8c;
            case 0x38AC48u: goto label_38ac48;
            case 0x38AC70u: goto label_38ac70;
            case 0x38AC9Cu: goto label_38ac9c;
            case 0x38AD04u: goto label_38ad04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x38AA40u;
label_38aa40:
    // 0x38aa40: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38aa40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38aa44:
    // 0x38aa44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38aa48:
    // 0x38aa48: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38aa48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38aa4c:
    // 0x38aa4c: 0x320f809  jalr        $t9
label_38aa50:
    if (ctx->pc == 0x38AA50u) {
        ctx->pc = 0x38AA50u;
            // 0x38aa50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38AA54u;
        goto label_38aa54;
    }
    ctx->pc = 0x38AA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AA54u);
        ctx->pc = 0x38AA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AA4Cu;
            // 0x38aa50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AA54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AA54u; }
            if (ctx->pc != 0x38AA54u) { return; }
        }
        }
    }
    ctx->pc = 0x38AA54u;
label_38aa54:
    // 0x38aa54: 0x100000ac  b           . + 4 + (0xAC << 2)
label_38aa58:
    if (ctx->pc == 0x38AA58u) {
        ctx->pc = 0x38AA58u;
            // 0x38aa58: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x38AA5Cu;
        goto label_38aa5c;
    }
    ctx->pc = 0x38AA54u;
    {
        const bool branch_taken_0x38aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AA54u;
            // 0x38aa58: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa54) {
            ctx->pc = 0x38AD08u;
            goto label_38ad08;
        }
    }
    ctx->pc = 0x38AA5Cu;
label_38aa5c:
    // 0x38aa5c: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x38aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38aa60:
    // 0x38aa60: 0xc66d0014  lwc1        $f13, 0x14($s3)
    ctx->pc = 0x38aa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38aa64:
    // 0x38aa64: 0xc66e0018  lwc1        $f14, 0x18($s3)
    ctx->pc = 0x38aa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38aa68:
    // 0x38aa68: 0xc04cbd8  jal         func_132F60
label_38aa6c:
    if (ctx->pc == 0x38AA6Cu) {
        ctx->pc = 0x38AA6Cu;
            // 0x38aa6c: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->pc = 0x38AA70u;
        goto label_38aa70;
    }
    ctx->pc = 0x38AA68u;
    SET_GPR_U32(ctx, 31, 0x38AA70u);
    ctx->pc = 0x38AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AA68u;
            // 0x38aa6c: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AA70u; }
        if (ctx->pc != 0x38AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AA70u; }
        if (ctx->pc != 0x38AA70u) { return; }
    }
    ctx->pc = 0x38AA70u;
label_38aa70:
    // 0x38aa70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38aa70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38aa74:
    // 0x38aa74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38aa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38aa78:
    // 0x38aa78: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38aa78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38aa7c:
    // 0x38aa7c: 0x320f809  jalr        $t9
label_38aa80:
    if (ctx->pc == 0x38AA80u) {
        ctx->pc = 0x38AA80u;
            // 0x38aa80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x38AA84u;
        goto label_38aa84;
    }
    ctx->pc = 0x38AA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AA84u);
        ctx->pc = 0x38AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AA7Cu;
            // 0x38aa80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AA84u; }
            if (ctx->pc != 0x38AA84u) { return; }
        }
        }
    }
    ctx->pc = 0x38AA84u;
label_38aa84:
    // 0x38aa84: 0x1000009f  b           . + 4 + (0x9F << 2)
label_38aa88:
    if (ctx->pc == 0x38AA88u) {
        ctx->pc = 0x38AA8Cu;
        goto label_38aa8c;
    }
    ctx->pc = 0x38AA84u;
    {
        const bool branch_taken_0x38aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aa84) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AA8Cu;
label_38aa8c:
    // 0x38aa8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38aa90:
    // 0x38aa90: 0x8e55000c  lw          $s5, 0xC($s2)
    ctx->pc = 0x38aa90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_38aa94:
    // 0x38aa94: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x38aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38aa98:
    // 0x38aa98: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x38aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_38aa9c:
    // 0x38aa9c: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x38aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_38aaa0:
    // 0x38aaa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38aaa4:
    // 0x38aaa4: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x38aaa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_38aaa8:
    // 0x38aaa8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_38aaac:
    if (ctx->pc == 0x38AAACu) {
        ctx->pc = 0x38AAACu;
            // 0x38aaac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AAB0u;
        goto label_38aab0;
    }
    ctx->pc = 0x38AAA8u;
    {
        const bool branch_taken_0x38aaa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AAA8u;
            // 0x38aaac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aaa8) {
            ctx->pc = 0x38AAC8u;
            goto label_38aac8;
        }
    }
    ctx->pc = 0x38AAB0u;
label_38aab0:
    // 0x38aab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38aab4:
    // 0x38aab4: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x38aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_38aab8:
    // 0x38aab8: 0x3042000d  andi        $v0, $v0, 0xD
    ctx->pc = 0x38aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)13);
label_38aabc:
    // 0x38aabc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_38aac0:
    if (ctx->pc == 0x38AAC0u) {
        ctx->pc = 0x38AAC0u;
            // 0x38aac0: 0x8e0201a0  lw          $v0, 0x1A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
        ctx->pc = 0x38AAC4u;
        goto label_38aac4;
    }
    ctx->pc = 0x38AABCu;
    {
        const bool branch_taken_0x38aabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aabc) {
            ctx->pc = 0x38AAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AABCu;
            // 0x38aac0: 0x8e0201a0  lw          $v0, 0x1A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AACCu;
            goto label_38aacc;
        }
    }
    ctx->pc = 0x38AAC4u;
label_38aac4:
    // 0x38aac4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x38aac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38aac8:
    // 0x38aac8: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x38aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_38aacc:
    // 0x38aacc: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x38aaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_38aad0:
    // 0x38aad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x38aad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38aad4:
    // 0x38aad4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_38aad8:
    if (ctx->pc == 0x38AAD8u) {
        ctx->pc = 0x38AAD8u;
            // 0x38aad8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x38AADCu;
        goto label_38aadc;
    }
    ctx->pc = 0x38AAD4u;
    {
        const bool branch_taken_0x38aad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38aad4) {
            ctx->pc = 0x38AAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AAD4u;
            // 0x38aad8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AAE8u;
            goto label_38aae8;
        }
    }
    ctx->pc = 0x38AADCu;
label_38aadc:
    // 0x38aadc: 0x38a20005  xori        $v0, $a1, 0x5
    ctx->pc = 0x38aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_38aae0:
    // 0x38aae0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38aae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38aae4:
    // 0x38aae4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x38aae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_38aae8:
    // 0x38aae8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x38aae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_38aaec:
    // 0x38aaec: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x38aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_38aaf0:
    // 0x38aaf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_38aaf4:
    // 0x38aaf4: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x38aaf4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38aaf8:
    // 0x38aaf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38aafc:
    // 0x38aafc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x38aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_38ab00:
    // 0x38ab00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_38ab04:
    if (ctx->pc == 0x38AB04u) {
        ctx->pc = 0x38AB04u;
            // 0x38ab04: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AB08u;
        goto label_38ab08;
    }
    ctx->pc = 0x38AB00u;
    {
        const bool branch_taken_0x38ab00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB00u;
            // 0x38ab04: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab00) {
            ctx->pc = 0x38AB1Cu;
            goto label_38ab1c;
        }
    }
    ctx->pc = 0x38AB08u;
label_38ab08:
    // 0x38ab08: 0x24a2fff4  addiu       $v0, $a1, -0xC
    ctx->pc = 0x38ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
label_38ab0c:
    // 0x38ab0c: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x38ab0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_38ab10:
    // 0x38ab10: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_38ab14:
    if (ctx->pc == 0x38AB14u) {
        ctx->pc = 0x38AB14u;
            // 0x38ab14: 0x8c990048  lw          $t9, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x38AB18u;
        goto label_38ab18;
    }
    ctx->pc = 0x38AB10u;
    {
        const bool branch_taken_0x38ab10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ab10) {
            ctx->pc = 0x38AB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB10u;
            // 0x38ab14: 0x8c990048  lw          $t9, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AB20u;
            goto label_38ab20;
        }
    }
    ctx->pc = 0x38AB18u;
label_38ab18:
    // 0x38ab18: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x38ab18u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_38ab1c:
    // 0x38ab1c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x38ab1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_38ab20:
    // 0x38ab20: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38ab20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38ab24:
    // 0x38ab24: 0x320f809  jalr        $t9
label_38ab28:
    if (ctx->pc == 0x38AB28u) {
        ctx->pc = 0x38AB28u;
            // 0x38ab28: 0x8e5e002c  lw          $fp, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x38AB2Cu;
        goto label_38ab2c;
    }
    ctx->pc = 0x38AB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AB2Cu);
        ctx->pc = 0x38AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB24u;
            // 0x38ab28: 0x8e5e002c  lw          $fp, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AB2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AB2Cu; }
            if (ctx->pc != 0x38AB2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38AB2Cu;
label_38ab2c:
    // 0x38ab2c: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x38ab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_38ab30:
    // 0x38ab30: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x38ab30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_38ab34:
    // 0x38ab34: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x38ab34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_38ab38:
    // 0x38ab38: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x38ab38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38ab3c:
    // 0x38ab3c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x38ab3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_38ab40:
    // 0x38ab40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38ab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38ab44:
    // 0x38ab44: 0x12e00023  beqz        $s7, . + 4 + (0x23 << 2)
label_38ab48:
    if (ctx->pc == 0x38AB48u) {
        ctx->pc = 0x38AB48u;
            // 0x38ab48: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x38AB4Cu;
        goto label_38ab4c;
    }
    ctx->pc = 0x38AB44u;
    {
        const bool branch_taken_0x38ab44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB44u;
            // 0x38ab48: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab44) {
            ctx->pc = 0x38ABD4u;
            goto label_38abd4;
        }
    }
    ctx->pc = 0x38AB4Cu;
label_38ab4c:
    // 0x38ab4c: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_38ab50:
    if (ctx->pc == 0x38AB50u) {
        ctx->pc = 0x38AB50u;
            // 0x38ab50: 0x8e0401a8  lw          $a0, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->pc = 0x38AB54u;
        goto label_38ab54;
    }
    ctx->pc = 0x38AB4Cu;
    {
        const bool branch_taken_0x38ab4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ab4c) {
            ctx->pc = 0x38AB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB4Cu;
            // 0x38ab50: 0x8e0401a8  lw          $a0, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38ABD8u;
            goto label_38abd8;
        }
    }
    ctx->pc = 0x38AB54u;
label_38ab54:
    // 0x38ab54: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x38ab54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_38ab58:
    // 0x38ab58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ab5c:
    // 0x38ab5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ab60:
    // 0x38ab60: 0xc0f0f84  jal         func_3C3E10
label_38ab64:
    if (ctx->pc == 0x38AB64u) {
        ctx->pc = 0x38AB64u;
            // 0x38ab64: 0xae1201a0  sw          $s2, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 18));
        ctx->pc = 0x38AB68u;
        goto label_38ab68;
    }
    ctx->pc = 0x38AB60u;
    SET_GPR_U32(ctx, 31, 0x38AB68u);
    ctx->pc = 0x38AB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB60u;
            // 0x38ab64: 0xae1201a0  sw          $s2, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AB68u; }
        if (ctx->pc != 0x38AB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AB68u; }
        if (ctx->pc != 0x38AB68u) { return; }
    }
    ctx->pc = 0x38AB68u;
label_38ab68:
    // 0x38ab68: 0xae200e30  sw          $zero, 0xE30($s1)
    ctx->pc = 0x38ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
label_38ab6c:
    // 0x38ab6c: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x38ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_38ab70:
    // 0x38ab70: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x38ab70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_38ab74:
    // 0x38ab74: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x38ab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_38ab78:
    // 0x38ab78: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x38ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38ab7c:
    // 0x38ab7c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x38ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_38ab80:
    // 0x38ab80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38ab84:
    // 0x38ab84: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x38ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_38ab88:
    // 0x38ab88: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x38ab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_38ab8c:
    // 0x38ab8c: 0xc0a545c  jal         func_295170
label_38ab90:
    if (ctx->pc == 0x38AB90u) {
        ctx->pc = 0x38AB90u;
            // 0x38ab90: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x38AB94u;
        goto label_38ab94;
    }
    ctx->pc = 0x38AB8Cu;
    SET_GPR_U32(ctx, 31, 0x38AB94u);
    ctx->pc = 0x38AB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AB8Cu;
            // 0x38ab90: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AB94u; }
        if (ctx->pc != 0x38AB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AB94u; }
        if (ctx->pc != 0x38AB94u) { return; }
    }
    ctx->pc = 0x38AB94u;
label_38ab94:
    // 0x38ab94: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x38ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_38ab98:
    // 0x38ab98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ab9c:
    // 0x38ab9c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x38ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38aba0:
    // 0x38aba0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38aba4:
    // 0x38aba4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38aba8:
    // 0x38aba8: 0xc08bf20  jal         func_22FC80
label_38abac:
    if (ctx->pc == 0x38ABACu) {
        ctx->pc = 0x38ABACu;
            // 0x38abac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38ABB0u;
        goto label_38abb0;
    }
    ctx->pc = 0x38ABA8u;
    SET_GPR_U32(ctx, 31, 0x38ABB0u);
    ctx->pc = 0x38ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38ABA8u;
            // 0x38abac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38ABB0u; }
        if (ctx->pc != 0x38ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38ABB0u; }
        if (ctx->pc != 0x38ABB0u) { return; }
    }
    ctx->pc = 0x38ABB0u;
label_38abb0:
    // 0x38abb0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x38abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38abb4:
    // 0x38abb4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x38abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_38abb8:
    // 0x38abb8: 0xae240db8  sw          $a0, 0xDB8($s1)
    ctx->pc = 0x38abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 4));
label_38abbc:
    // 0x38abbc: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x38abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_38abc0:
    // 0x38abc0: 0x8ca40060  lw          $a0, 0x60($a1)
    ctx->pc = 0x38abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
label_38abc4:
    // 0x38abc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38abc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_38abc8:
    // 0x38abc8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x38abc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_38abcc:
    // 0x38abcc: 0x1000004d  b           . + 4 + (0x4D << 2)
label_38abd0:
    if (ctx->pc == 0x38ABD0u) {
        ctx->pc = 0x38ABD0u;
            // 0x38abd0: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x38ABD4u;
        goto label_38abd4;
    }
    ctx->pc = 0x38ABCCu;
    {
        const bool branch_taken_0x38abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38ABCCu;
            // 0x38abd0: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38abcc) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38ABD4u;
label_38abd4:
    // 0x38abd4: 0x8e0401a8  lw          $a0, 0x1A8($s0)
    ctx->pc = 0x38abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_38abd8:
    // 0x38abd8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38abdc:
    // 0x38abdc: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_38abe0:
    if (ctx->pc == 0x38ABE0u) {
        ctx->pc = 0x38ABE4u;
        goto label_38abe4;
    }
    ctx->pc = 0x38ABDCu;
    {
        const bool branch_taken_0x38abdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38abdc) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38ABE4u;
label_38abe4:
    // 0x38abe4: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x38abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_38abe8:
    // 0x38abe8: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x38abe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_38abec:
    // 0x38abec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38abecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38abf0:
    // 0x38abf0: 0x320f809  jalr        $t9
label_38abf4:
    if (ctx->pc == 0x38ABF4u) {
        ctx->pc = 0x38ABF8u;
        goto label_38abf8;
    }
    ctx->pc = 0x38ABF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38ABF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38ABF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38ABF8u; }
            if (ctx->pc != 0x38ABF8u) { return; }
        }
        }
    }
    ctx->pc = 0x38ABF8u;
label_38abf8:
    // 0x38abf8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_38abfc:
    if (ctx->pc == 0x38ABFCu) {
        ctx->pc = 0x38AC00u;
        goto label_38ac00;
    }
    ctx->pc = 0x38ABF8u;
    {
        const bool branch_taken_0x38abf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38abf8) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AC00u;
label_38ac00:
    // 0x38ac00: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x38ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_38ac04:
    // 0x38ac04: 0x1075003f  beq         $v1, $s5, . + 4 + (0x3F << 2)
label_38ac08:
    if (ctx->pc == 0x38AC08u) {
        ctx->pc = 0x38AC0Cu;
        goto label_38ac0c;
    }
    ctx->pc = 0x38AC04u;
    {
        const bool branch_taken_0x38ac04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x38ac04) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AC0Cu;
label_38ac0c:
    // 0x38ac0c: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x38ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_38ac10:
    // 0x38ac10: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x38ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_38ac14:
    // 0x38ac14: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x38ac14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38ac18:
    // 0x38ac18: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38ac18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38ac1c:
    // 0x38ac1c: 0x320f809  jalr        $t9
label_38ac20:
    if (ctx->pc == 0x38AC20u) {
        ctx->pc = 0x38AC20u;
            // 0x38ac20: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x38AC24u;
        goto label_38ac24;
    }
    ctx->pc = 0x38AC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AC24u);
        ctx->pc = 0x38AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AC1Cu;
            // 0x38ac20: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AC24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AC24u; }
            if (ctx->pc != 0x38AC24u) { return; }
        }
        }
    }
    ctx->pc = 0x38AC24u;
label_38ac24:
    // 0x38ac24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38ac28:
    // 0x38ac28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38ac2c:
    // 0x38ac2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38ac2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38ac30:
    // 0x38ac30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x38ac30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ac34:
    // 0x38ac34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ac34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ac38:
    // 0x38ac38: 0xc0e26e0  jal         func_389B80
label_38ac3c:
    if (ctx->pc == 0x38AC3Cu) {
        ctx->pc = 0x38AC3Cu;
            // 0x38ac3c: 0xae200de4  sw          $zero, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x38AC40u;
        goto label_38ac40;
    }
    ctx->pc = 0x38AC38u;
    SET_GPR_U32(ctx, 31, 0x38AC40u);
    ctx->pc = 0x38AC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AC38u;
            // 0x38ac3c: 0xae200de4  sw          $zero, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x389B80u;
    if (runtime->hasFunction(0x389B80u)) {
        auto targetFn = runtime->lookupFunction(0x389B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AC40u; }
        if (ctx->pc != 0x38AC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00389B80_0x389b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AC40u; }
        if (ctx->pc != 0x38AC40u) { return; }
    }
    ctx->pc = 0x38AC40u;
label_38ac40:
    // 0x38ac40: 0x10000030  b           . + 4 + (0x30 << 2)
label_38ac44:
    if (ctx->pc == 0x38AC44u) {
        ctx->pc = 0x38AC48u;
        goto label_38ac48;
    }
    ctx->pc = 0x38AC40u;
    {
        const bool branch_taken_0x38ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ac40) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AC48u;
label_38ac48:
    // 0x38ac48: 0x8e0401a8  lw          $a0, 0x1A8($s0)
    ctx->pc = 0x38ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_38ac4c:
    // 0x38ac4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ac50:
    // 0x38ac50: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
label_38ac54:
    if (ctx->pc == 0x38AC54u) {
        ctx->pc = 0x38AC58u;
        goto label_38ac58;
    }
    ctx->pc = 0x38AC50u;
    {
        const bool branch_taken_0x38ac50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38ac50) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AC58u;
label_38ac58:
    // 0x38ac58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ac5c:
    // 0x38ac5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x38ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38ac60:
    // 0x38ac60: 0xc0f0f84  jal         func_3C3E10
label_38ac64:
    if (ctx->pc == 0x38AC64u) {
        ctx->pc = 0x38AC64u;
            // 0x38ac64: 0xae200e30  sw          $zero, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x38AC68u;
        goto label_38ac68;
    }
    ctx->pc = 0x38AC60u;
    SET_GPR_U32(ctx, 31, 0x38AC68u);
    ctx->pc = 0x38AC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AC60u;
            // 0x38ac64: 0xae200e30  sw          $zero, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AC68u; }
        if (ctx->pc != 0x38AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AC68u; }
        if (ctx->pc != 0x38AC68u) { return; }
    }
    ctx->pc = 0x38AC68u;
label_38ac68:
    // 0x38ac68: 0x10000026  b           . + 4 + (0x26 << 2)
label_38ac6c:
    if (ctx->pc == 0x38AC6Cu) {
        ctx->pc = 0x38AC70u;
        goto label_38ac70;
    }
    ctx->pc = 0x38AC68u;
    {
        const bool branch_taken_0x38ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ac68) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AC70u;
label_38ac70:
    // 0x38ac70: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x38ac70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ac74:
    // 0x38ac74: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38ac74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38ac78:
    // 0x38ac78: 0x320f809  jalr        $t9
label_38ac7c:
    if (ctx->pc == 0x38AC7Cu) {
        ctx->pc = 0x38AC7Cu;
            // 0x38ac7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AC80u;
        goto label_38ac80;
    }
    ctx->pc = 0x38AC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AC80u);
        ctx->pc = 0x38AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AC78u;
            // 0x38ac7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AC80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AC80u; }
            if (ctx->pc != 0x38AC80u) { return; }
        }
        }
    }
    ctx->pc = 0x38AC80u;
label_38ac80:
    // 0x38ac80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38ac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38ac84:
    // 0x38ac84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ac88:
    // 0x38ac88: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38ac88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38ac8c:
    // 0x38ac8c: 0x320f809  jalr        $t9
label_38ac90:
    if (ctx->pc == 0x38AC90u) {
        ctx->pc = 0x38AC90u;
            // 0x38ac90: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x38AC94u;
        goto label_38ac94;
    }
    ctx->pc = 0x38AC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AC94u);
        ctx->pc = 0x38AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AC8Cu;
            // 0x38ac90: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AC94u; }
            if (ctx->pc != 0x38AC94u) { return; }
        }
        }
    }
    ctx->pc = 0x38AC94u;
label_38ac94:
    // 0x38ac94: 0x1000001b  b           . + 4 + (0x1B << 2)
label_38ac98:
    if (ctx->pc == 0x38AC98u) {
        ctx->pc = 0x38AC9Cu;
        goto label_38ac9c;
    }
    ctx->pc = 0x38AC94u;
    {
        const bool branch_taken_0x38ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ac94) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38AC9Cu;
label_38ac9c:
    // 0x38ac9c: 0xc0754b4  jal         func_1D52D0
label_38aca0:
    if (ctx->pc == 0x38ACA0u) {
        ctx->pc = 0x38ACA0u;
            // 0x38aca0: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x38ACA4u;
        goto label_38aca4;
    }
    ctx->pc = 0x38AC9Cu;
    SET_GPR_U32(ctx, 31, 0x38ACA4u);
    ctx->pc = 0x38ACA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AC9Cu;
            // 0x38aca0: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38ACA4u; }
        if (ctx->pc != 0x38ACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38ACA4u; }
        if (ctx->pc != 0x38ACA4u) { return; }
    }
    ctx->pc = 0x38ACA4u;
label_38aca4:
    // 0x38aca4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38aca8:
    // 0x38aca8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x38aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_38acac:
    // 0x38acac: 0x8c641ba0  lw          $a0, 0x1BA0($v1)
    ctx->pc = 0x38acacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7072)));
label_38acb0:
    // 0x38acb0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x38acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_38acb4:
    // 0x38acb4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_38acb8:
    if (ctx->pc == 0x38ACB8u) {
        ctx->pc = 0x38ACBCu;
        goto label_38acbc;
    }
    ctx->pc = 0x38ACB4u;
    {
        const bool branch_taken_0x38acb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38acb4) {
            ctx->pc = 0x38AD04u;
            goto label_38ad04;
        }
    }
    ctx->pc = 0x38ACBCu;
label_38acbc:
    // 0x38acbc: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x38acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_38acc0:
    // 0x38acc0: 0x26230a50  addiu       $v1, $s1, 0xA50
    ctx->pc = 0x38acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_38acc4:
    // 0x38acc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38acc8:
    // 0x38acc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38accc:
    // 0x38accc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x38acccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_38acd0:
    // 0x38acd0: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x38acd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_38acd4:
    // 0x38acd4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38acd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38acd8:
    // 0x38acd8: 0x320f809  jalr        $t9
label_38acdc:
    if (ctx->pc == 0x38ACDCu) {
        ctx->pc = 0x38ACE0u;
        goto label_38ace0;
    }
    ctx->pc = 0x38ACD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38ACE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38ACE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38ACE0u; }
            if (ctx->pc != 0x38ACE0u) { return; }
        }
        }
    }
    ctx->pc = 0x38ACE0u;
label_38ace0:
    // 0x38ace0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38ace0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38ace4:
    // 0x38ace4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ace8:
    // 0x38ace8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38ace8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38acec:
    // 0x38acec: 0x320f809  jalr        $t9
label_38acf0:
    if (ctx->pc == 0x38ACF0u) {
        ctx->pc = 0x38ACF0u;
            // 0x38acf0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x38ACF4u;
        goto label_38acf4;
    }
    ctx->pc = 0x38ACECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38ACF4u);
        ctx->pc = 0x38ACF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38ACECu;
            // 0x38acf0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38ACF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38ACF4u; }
            if (ctx->pc != 0x38ACF4u) { return; }
        }
        }
    }
    ctx->pc = 0x38ACF4u;
label_38acf4:
    // 0x38acf4: 0x3c03be0e  lui         $v1, 0xBE0E
    ctx->pc = 0x38acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48654 << 16));
label_38acf8:
    // 0x38acf8: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x38acf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_38acfc:
    // 0x38acfc: 0xae230de4  sw          $v1, 0xDE4($s1)
    ctx->pc = 0x38acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 3));
label_38ad00:
    // 0x38ad00: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x38ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_38ad04:
    // 0x38ad04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38ad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38ad08:
    // 0x38ad08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x38ad08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38ad0c:
    // 0x38ad0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x38ad0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38ad10:
    // 0x38ad10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38ad10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38ad14:
    // 0x38ad14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38ad14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38ad18:
    // 0x38ad18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38ad18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38ad1c:
    // 0x38ad1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38ad1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ad20:
    // 0x38ad20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38ad20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ad24:
    // 0x38ad24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ad24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ad28:
    // 0x38ad28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ad28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38ad2c:
    // 0x38ad2c: 0x3e00008  jr          $ra
label_38ad30:
    if (ctx->pc == 0x38AD30u) {
        ctx->pc = 0x38AD30u;
            // 0x38ad30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x38AD34u;
        goto label_38ad34;
    }
    ctx->pc = 0x38AD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AD2Cu;
            // 0x38ad30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38AD34u;
label_38ad34:
    // 0x38ad34: 0x0  nop
    ctx->pc = 0x38ad34u;
    // NOP
label_38ad38:
    // 0x38ad38: 0x0  nop
    ctx->pc = 0x38ad38u;
    // NOP
label_38ad3c:
    // 0x38ad3c: 0x0  nop
    ctx->pc = 0x38ad3cu;
    // NOP
}
