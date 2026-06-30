#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047F9C0
// Address: 0x47f9c0 - 0x47fda0
void sub_0047F9C0_0x47f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F9C0_0x47f9c0");
#endif

    switch (ctx->pc) {
        case 0x47f9c0u: goto label_47f9c0;
        case 0x47f9c4u: goto label_47f9c4;
        case 0x47f9c8u: goto label_47f9c8;
        case 0x47f9ccu: goto label_47f9cc;
        case 0x47f9d0u: goto label_47f9d0;
        case 0x47f9d4u: goto label_47f9d4;
        case 0x47f9d8u: goto label_47f9d8;
        case 0x47f9dcu: goto label_47f9dc;
        case 0x47f9e0u: goto label_47f9e0;
        case 0x47f9e4u: goto label_47f9e4;
        case 0x47f9e8u: goto label_47f9e8;
        case 0x47f9ecu: goto label_47f9ec;
        case 0x47f9f0u: goto label_47f9f0;
        case 0x47f9f4u: goto label_47f9f4;
        case 0x47f9f8u: goto label_47f9f8;
        case 0x47f9fcu: goto label_47f9fc;
        case 0x47fa00u: goto label_47fa00;
        case 0x47fa04u: goto label_47fa04;
        case 0x47fa08u: goto label_47fa08;
        case 0x47fa0cu: goto label_47fa0c;
        case 0x47fa10u: goto label_47fa10;
        case 0x47fa14u: goto label_47fa14;
        case 0x47fa18u: goto label_47fa18;
        case 0x47fa1cu: goto label_47fa1c;
        case 0x47fa20u: goto label_47fa20;
        case 0x47fa24u: goto label_47fa24;
        case 0x47fa28u: goto label_47fa28;
        case 0x47fa2cu: goto label_47fa2c;
        case 0x47fa30u: goto label_47fa30;
        case 0x47fa34u: goto label_47fa34;
        case 0x47fa38u: goto label_47fa38;
        case 0x47fa3cu: goto label_47fa3c;
        case 0x47fa40u: goto label_47fa40;
        case 0x47fa44u: goto label_47fa44;
        case 0x47fa48u: goto label_47fa48;
        case 0x47fa4cu: goto label_47fa4c;
        case 0x47fa50u: goto label_47fa50;
        case 0x47fa54u: goto label_47fa54;
        case 0x47fa58u: goto label_47fa58;
        case 0x47fa5cu: goto label_47fa5c;
        case 0x47fa60u: goto label_47fa60;
        case 0x47fa64u: goto label_47fa64;
        case 0x47fa68u: goto label_47fa68;
        case 0x47fa6cu: goto label_47fa6c;
        case 0x47fa70u: goto label_47fa70;
        case 0x47fa74u: goto label_47fa74;
        case 0x47fa78u: goto label_47fa78;
        case 0x47fa7cu: goto label_47fa7c;
        case 0x47fa80u: goto label_47fa80;
        case 0x47fa84u: goto label_47fa84;
        case 0x47fa88u: goto label_47fa88;
        case 0x47fa8cu: goto label_47fa8c;
        case 0x47fa90u: goto label_47fa90;
        case 0x47fa94u: goto label_47fa94;
        case 0x47fa98u: goto label_47fa98;
        case 0x47fa9cu: goto label_47fa9c;
        case 0x47faa0u: goto label_47faa0;
        case 0x47faa4u: goto label_47faa4;
        case 0x47faa8u: goto label_47faa8;
        case 0x47faacu: goto label_47faac;
        case 0x47fab0u: goto label_47fab0;
        case 0x47fab4u: goto label_47fab4;
        case 0x47fab8u: goto label_47fab8;
        case 0x47fabcu: goto label_47fabc;
        case 0x47fac0u: goto label_47fac0;
        case 0x47fac4u: goto label_47fac4;
        case 0x47fac8u: goto label_47fac8;
        case 0x47faccu: goto label_47facc;
        case 0x47fad0u: goto label_47fad0;
        case 0x47fad4u: goto label_47fad4;
        case 0x47fad8u: goto label_47fad8;
        case 0x47fadcu: goto label_47fadc;
        case 0x47fae0u: goto label_47fae0;
        case 0x47fae4u: goto label_47fae4;
        case 0x47fae8u: goto label_47fae8;
        case 0x47faecu: goto label_47faec;
        case 0x47faf0u: goto label_47faf0;
        case 0x47faf4u: goto label_47faf4;
        case 0x47faf8u: goto label_47faf8;
        case 0x47fafcu: goto label_47fafc;
        case 0x47fb00u: goto label_47fb00;
        case 0x47fb04u: goto label_47fb04;
        case 0x47fb08u: goto label_47fb08;
        case 0x47fb0cu: goto label_47fb0c;
        case 0x47fb10u: goto label_47fb10;
        case 0x47fb14u: goto label_47fb14;
        case 0x47fb18u: goto label_47fb18;
        case 0x47fb1cu: goto label_47fb1c;
        case 0x47fb20u: goto label_47fb20;
        case 0x47fb24u: goto label_47fb24;
        case 0x47fb28u: goto label_47fb28;
        case 0x47fb2cu: goto label_47fb2c;
        case 0x47fb30u: goto label_47fb30;
        case 0x47fb34u: goto label_47fb34;
        case 0x47fb38u: goto label_47fb38;
        case 0x47fb3cu: goto label_47fb3c;
        case 0x47fb40u: goto label_47fb40;
        case 0x47fb44u: goto label_47fb44;
        case 0x47fb48u: goto label_47fb48;
        case 0x47fb4cu: goto label_47fb4c;
        case 0x47fb50u: goto label_47fb50;
        case 0x47fb54u: goto label_47fb54;
        case 0x47fb58u: goto label_47fb58;
        case 0x47fb5cu: goto label_47fb5c;
        case 0x47fb60u: goto label_47fb60;
        case 0x47fb64u: goto label_47fb64;
        case 0x47fb68u: goto label_47fb68;
        case 0x47fb6cu: goto label_47fb6c;
        case 0x47fb70u: goto label_47fb70;
        case 0x47fb74u: goto label_47fb74;
        case 0x47fb78u: goto label_47fb78;
        case 0x47fb7cu: goto label_47fb7c;
        case 0x47fb80u: goto label_47fb80;
        case 0x47fb84u: goto label_47fb84;
        case 0x47fb88u: goto label_47fb88;
        case 0x47fb8cu: goto label_47fb8c;
        case 0x47fb90u: goto label_47fb90;
        case 0x47fb94u: goto label_47fb94;
        case 0x47fb98u: goto label_47fb98;
        case 0x47fb9cu: goto label_47fb9c;
        case 0x47fba0u: goto label_47fba0;
        case 0x47fba4u: goto label_47fba4;
        case 0x47fba8u: goto label_47fba8;
        case 0x47fbacu: goto label_47fbac;
        case 0x47fbb0u: goto label_47fbb0;
        case 0x47fbb4u: goto label_47fbb4;
        case 0x47fbb8u: goto label_47fbb8;
        case 0x47fbbcu: goto label_47fbbc;
        case 0x47fbc0u: goto label_47fbc0;
        case 0x47fbc4u: goto label_47fbc4;
        case 0x47fbc8u: goto label_47fbc8;
        case 0x47fbccu: goto label_47fbcc;
        case 0x47fbd0u: goto label_47fbd0;
        case 0x47fbd4u: goto label_47fbd4;
        case 0x47fbd8u: goto label_47fbd8;
        case 0x47fbdcu: goto label_47fbdc;
        case 0x47fbe0u: goto label_47fbe0;
        case 0x47fbe4u: goto label_47fbe4;
        case 0x47fbe8u: goto label_47fbe8;
        case 0x47fbecu: goto label_47fbec;
        case 0x47fbf0u: goto label_47fbf0;
        case 0x47fbf4u: goto label_47fbf4;
        case 0x47fbf8u: goto label_47fbf8;
        case 0x47fbfcu: goto label_47fbfc;
        case 0x47fc00u: goto label_47fc00;
        case 0x47fc04u: goto label_47fc04;
        case 0x47fc08u: goto label_47fc08;
        case 0x47fc0cu: goto label_47fc0c;
        case 0x47fc10u: goto label_47fc10;
        case 0x47fc14u: goto label_47fc14;
        case 0x47fc18u: goto label_47fc18;
        case 0x47fc1cu: goto label_47fc1c;
        case 0x47fc20u: goto label_47fc20;
        case 0x47fc24u: goto label_47fc24;
        case 0x47fc28u: goto label_47fc28;
        case 0x47fc2cu: goto label_47fc2c;
        case 0x47fc30u: goto label_47fc30;
        case 0x47fc34u: goto label_47fc34;
        case 0x47fc38u: goto label_47fc38;
        case 0x47fc3cu: goto label_47fc3c;
        case 0x47fc40u: goto label_47fc40;
        case 0x47fc44u: goto label_47fc44;
        case 0x47fc48u: goto label_47fc48;
        case 0x47fc4cu: goto label_47fc4c;
        case 0x47fc50u: goto label_47fc50;
        case 0x47fc54u: goto label_47fc54;
        case 0x47fc58u: goto label_47fc58;
        case 0x47fc5cu: goto label_47fc5c;
        case 0x47fc60u: goto label_47fc60;
        case 0x47fc64u: goto label_47fc64;
        case 0x47fc68u: goto label_47fc68;
        case 0x47fc6cu: goto label_47fc6c;
        case 0x47fc70u: goto label_47fc70;
        case 0x47fc74u: goto label_47fc74;
        case 0x47fc78u: goto label_47fc78;
        case 0x47fc7cu: goto label_47fc7c;
        case 0x47fc80u: goto label_47fc80;
        case 0x47fc84u: goto label_47fc84;
        case 0x47fc88u: goto label_47fc88;
        case 0x47fc8cu: goto label_47fc8c;
        case 0x47fc90u: goto label_47fc90;
        case 0x47fc94u: goto label_47fc94;
        case 0x47fc98u: goto label_47fc98;
        case 0x47fc9cu: goto label_47fc9c;
        case 0x47fca0u: goto label_47fca0;
        case 0x47fca4u: goto label_47fca4;
        case 0x47fca8u: goto label_47fca8;
        case 0x47fcacu: goto label_47fcac;
        case 0x47fcb0u: goto label_47fcb0;
        case 0x47fcb4u: goto label_47fcb4;
        case 0x47fcb8u: goto label_47fcb8;
        case 0x47fcbcu: goto label_47fcbc;
        case 0x47fcc0u: goto label_47fcc0;
        case 0x47fcc4u: goto label_47fcc4;
        case 0x47fcc8u: goto label_47fcc8;
        case 0x47fcccu: goto label_47fccc;
        case 0x47fcd0u: goto label_47fcd0;
        case 0x47fcd4u: goto label_47fcd4;
        case 0x47fcd8u: goto label_47fcd8;
        case 0x47fcdcu: goto label_47fcdc;
        case 0x47fce0u: goto label_47fce0;
        case 0x47fce4u: goto label_47fce4;
        case 0x47fce8u: goto label_47fce8;
        case 0x47fcecu: goto label_47fcec;
        case 0x47fcf0u: goto label_47fcf0;
        case 0x47fcf4u: goto label_47fcf4;
        case 0x47fcf8u: goto label_47fcf8;
        case 0x47fcfcu: goto label_47fcfc;
        case 0x47fd00u: goto label_47fd00;
        case 0x47fd04u: goto label_47fd04;
        case 0x47fd08u: goto label_47fd08;
        case 0x47fd0cu: goto label_47fd0c;
        case 0x47fd10u: goto label_47fd10;
        case 0x47fd14u: goto label_47fd14;
        case 0x47fd18u: goto label_47fd18;
        case 0x47fd1cu: goto label_47fd1c;
        case 0x47fd20u: goto label_47fd20;
        case 0x47fd24u: goto label_47fd24;
        case 0x47fd28u: goto label_47fd28;
        case 0x47fd2cu: goto label_47fd2c;
        case 0x47fd30u: goto label_47fd30;
        case 0x47fd34u: goto label_47fd34;
        case 0x47fd38u: goto label_47fd38;
        case 0x47fd3cu: goto label_47fd3c;
        case 0x47fd40u: goto label_47fd40;
        case 0x47fd44u: goto label_47fd44;
        case 0x47fd48u: goto label_47fd48;
        case 0x47fd4cu: goto label_47fd4c;
        case 0x47fd50u: goto label_47fd50;
        case 0x47fd54u: goto label_47fd54;
        case 0x47fd58u: goto label_47fd58;
        case 0x47fd5cu: goto label_47fd5c;
        case 0x47fd60u: goto label_47fd60;
        case 0x47fd64u: goto label_47fd64;
        case 0x47fd68u: goto label_47fd68;
        case 0x47fd6cu: goto label_47fd6c;
        case 0x47fd70u: goto label_47fd70;
        case 0x47fd74u: goto label_47fd74;
        case 0x47fd78u: goto label_47fd78;
        case 0x47fd7cu: goto label_47fd7c;
        case 0x47fd80u: goto label_47fd80;
        case 0x47fd84u: goto label_47fd84;
        case 0x47fd88u: goto label_47fd88;
        case 0x47fd8cu: goto label_47fd8c;
        case 0x47fd90u: goto label_47fd90;
        case 0x47fd94u: goto label_47fd94;
        case 0x47fd98u: goto label_47fd98;
        case 0x47fd9cu: goto label_47fd9c;
        default: break;
    }

    ctx->pc = 0x47f9c0u;

label_47f9c0:
    // 0x47f9c0: 0x3e00008  jr          $ra
label_47f9c4:
    if (ctx->pc == 0x47F9C4u) {
        ctx->pc = 0x47F9C4u;
            // 0x47f9c4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x47F9C8u;
        goto label_47f9c8;
    }
    ctx->pc = 0x47F9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F9C0u;
            // 0x47f9c4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F9C8u;
label_47f9c8:
    // 0x47f9c8: 0x0  nop
    ctx->pc = 0x47f9c8u;
    // NOP
label_47f9cc:
    // 0x47f9cc: 0x0  nop
    ctx->pc = 0x47f9ccu;
    // NOP
label_47f9d0:
    // 0x47f9d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x47f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_47f9d4:
    // 0x47f9d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47f9d8:
    // 0x47f9d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x47f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_47f9dc:
    // 0x47f9dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47f9e0:
    // 0x47f9e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47f9e4:
    // 0x47f9e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47f9e8:
    // 0x47f9e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47f9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47f9ec:
    // 0x47f9ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47f9f0:
    // 0x47f9f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47f9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47f9f4:
    // 0x47f9f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47f9f8:
    // 0x47f9f8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x47f9f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47f9fc:
    // 0x47f9fc: 0x10a30052  beq         $a1, $v1, . + 4 + (0x52 << 2)
label_47fa00:
    if (ctx->pc == 0x47FA00u) {
        ctx->pc = 0x47FA00u;
            // 0x47fa00: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FA04u;
        goto label_47fa04;
    }
    ctx->pc = 0x47F9FCu;
    {
        const bool branch_taken_0x47f9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F9FCu;
            // 0x47fa00: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f9fc) {
            ctx->pc = 0x47FB48u;
            goto label_47fb48;
        }
    }
    ctx->pc = 0x47FA04u;
label_47fa04:
    // 0x47fa04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47fa08:
    // 0x47fa08: 0x50a3004c  beql        $a1, $v1, . + 4 + (0x4C << 2)
label_47fa0c:
    if (ctx->pc == 0x47FA0Cu) {
        ctx->pc = 0x47FA0Cu;
            // 0x47fa0c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x47FA10u;
        goto label_47fa10;
    }
    ctx->pc = 0x47FA08u;
    {
        const bool branch_taken_0x47fa08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47fa08) {
            ctx->pc = 0x47FA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47FA08u;
            // 0x47fa0c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47FB3Cu;
            goto label_47fb3c;
        }
    }
    ctx->pc = 0x47FA10u;
label_47fa10:
    // 0x47fa10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47fa14:
    // 0x47fa14: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_47fa18:
    if (ctx->pc == 0x47FA18u) {
        ctx->pc = 0x47FA1Cu;
        goto label_47fa1c;
    }
    ctx->pc = 0x47FA14u;
    {
        const bool branch_taken_0x47fa14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47fa14) {
            ctx->pc = 0x47FA24u;
            goto label_47fa24;
        }
    }
    ctx->pc = 0x47FA1Cu;
label_47fa1c:
    // 0x47fa1c: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_47fa20:
    if (ctx->pc == 0x47FA20u) {
        ctx->pc = 0x47FA24u;
        goto label_47fa24;
    }
    ctx->pc = 0x47FA1Cu;
    {
        const bool branch_taken_0x47fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fa1c) {
            ctx->pc = 0x47FD78u;
            goto label_47fd78;
        }
    }
    ctx->pc = 0x47FA24u;
label_47fa24:
    // 0x47fa24: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47fa28:
    // 0x47fa28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47fa2c:
    // 0x47fa2c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x47fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_47fa30:
    // 0x47fa30: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x47fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_47fa34:
    // 0x47fa34: 0x106400d0  beq         $v1, $a0, . + 4 + (0xD0 << 2)
label_47fa38:
    if (ctx->pc == 0x47FA38u) {
        ctx->pc = 0x47FA3Cu;
        goto label_47fa3c;
    }
    ctx->pc = 0x47FA34u;
    {
        const bool branch_taken_0x47fa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47fa34) {
            ctx->pc = 0x47FD78u;
            goto label_47fd78;
        }
    }
    ctx->pc = 0x47FA3Cu;
label_47fa3c:
    // 0x47fa3c: 0x8ea500d0  lw          $a1, 0xD0($s5)
    ctx->pc = 0x47fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_47fa40:
    // 0x47fa40: 0xc0788fc  jal         func_1E23F0
label_47fa44:
    if (ctx->pc == 0x47FA44u) {
        ctx->pc = 0x47FA44u;
            // 0x47fa44: 0x26a400dc  addiu       $a0, $s5, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 220));
        ctx->pc = 0x47FA48u;
        goto label_47fa48;
    }
    ctx->pc = 0x47FA40u;
    SET_GPR_U32(ctx, 31, 0x47FA48u);
    ctx->pc = 0x47FA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FA40u;
            // 0x47fa44: 0x26a400dc  addiu       $a0, $s5, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FA48u; }
        if (ctx->pc != 0x47FA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FA48u; }
        if (ctx->pc != 0x47FA48u) { return; }
    }
    ctx->pc = 0x47FA48u;
label_47fa48:
    // 0x47fa48: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x47fa48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_47fa4c:
    // 0x47fa4c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x47fa4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_47fa50:
    // 0x47fa50: 0x320f809  jalr        $t9
label_47fa54:
    if (ctx->pc == 0x47FA54u) {
        ctx->pc = 0x47FA54u;
            // 0x47fa54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FA58u;
        goto label_47fa58;
    }
    ctx->pc = 0x47FA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FA58u);
        ctx->pc = 0x47FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FA50u;
            // 0x47fa54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FA58u; }
            if (ctx->pc != 0x47FA58u) { return; }
        }
        }
    }
    ctx->pc = 0x47FA58u;
label_47fa58:
    // 0x47fa58: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_47fa5c:
    // 0x47fa5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x47fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_47fa60:
    // 0x47fa60: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_47fa64:
    // 0x47fa64: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x47fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_47fa68:
    // 0x47fa68: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_47fa6c:
    if (ctx->pc == 0x47FA6Cu) {
        ctx->pc = 0x47FA6Cu;
            // 0x47fa6c: 0x3c024336  lui         $v0, 0x4336 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
        ctx->pc = 0x47FA70u;
        goto label_47fa70;
    }
    ctx->pc = 0x47FA68u;
    {
        const bool branch_taken_0x47fa68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x47fa68) {
            ctx->pc = 0x47FA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47FA68u;
            // 0x47fa6c: 0x3c024336  lui         $v0, 0x4336 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47FA8Cu;
            goto label_47fa8c;
        }
    }
    ctx->pc = 0x47FA70u;
label_47fa70:
    // 0x47fa70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47fa74:
    // 0x47fa74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x47fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_47fa78:
    // 0x47fa78: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x47fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_47fa7c:
    // 0x47fa7c: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x47fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_47fa80:
    // 0x47fa80: 0x106400bd  beq         $v1, $a0, . + 4 + (0xBD << 2)
label_47fa84:
    if (ctx->pc == 0x47FA84u) {
        ctx->pc = 0x47FA88u;
        goto label_47fa88;
    }
    ctx->pc = 0x47FA80u;
    {
        const bool branch_taken_0x47fa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47fa80) {
            ctx->pc = 0x47FD78u;
            goto label_47fd78;
        }
    }
    ctx->pc = 0x47FA88u;
label_47fa88:
    // 0x47fa88: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x47fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_47fa8c:
    // 0x47fa8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x47fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_47fa90:
    // 0x47fa90: 0x34430b60  ori         $v1, $v0, 0xB60
    ctx->pc = 0x47fa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_47fa94:
    // 0x47fa94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47fa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47fa98:
    // 0x47fa98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_47fa9c:
    // 0x47fa9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47fa9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47faa0:
    // 0x47faa0: 0xc440fa58  lwc1        $f0, -0x5A8($v0)
    ctx->pc = 0x47faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47faa4:
    // 0x47faa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x47faa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47faa8:
    // 0x47faa8: 0x0  nop
    ctx->pc = 0x47faa8u;
    // NOP
label_47faac:
    // 0x47faac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47faacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47fab0:
    // 0x47fab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47fab4:
    // 0x47fab4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x47fab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_47fab8:
    // 0x47fab8: 0xc04ca18  jal         func_132860
label_47fabc:
    if (ctx->pc == 0x47FABCu) {
        ctx->pc = 0x47FABCu;
            // 0x47fabc: 0x26b100a0  addiu       $s1, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->pc = 0x47FAC0u;
        goto label_47fac0;
    }
    ctx->pc = 0x47FAB8u;
    SET_GPR_U32(ctx, 31, 0x47FAC0u);
    ctx->pc = 0x47FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FAB8u;
            // 0x47fabc: 0x26b100a0  addiu       $s1, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FAC0u; }
        if (ctx->pc != 0x47FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FAC0u; }
        if (ctx->pc != 0x47FAC0u) { return; }
    }
    ctx->pc = 0x47FAC0u;
label_47fac0:
    // 0x47fac0: 0x8ea7009c  lw          $a3, 0x9C($s5)
    ctx->pc = 0x47fac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_47fac4:
    // 0x47fac4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47fac8:
    // 0x47fac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47facc:
    // 0x47facc: 0x24a5fa40  addiu       $a1, $a1, -0x5C0
    ctx->pc = 0x47faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965824));
label_47fad0:
    // 0x47fad0: 0xc0d37ec  jal         func_34DFB0
label_47fad4:
    if (ctx->pc == 0x47FAD4u) {
        ctx->pc = 0x47FAD4u;
            // 0x47fad4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x47FAD8u;
        goto label_47fad8;
    }
    ctx->pc = 0x47FAD0u;
    SET_GPR_U32(ctx, 31, 0x47FAD8u);
    ctx->pc = 0x47FAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FAD0u;
            // 0x47fad4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FAD8u; }
        if (ctx->pc != 0x47FAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FAD8u; }
        if (ctx->pc != 0x47FAD8u) { return; }
    }
    ctx->pc = 0x47FAD8u;
label_47fad8:
    // 0x47fad8: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x47fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_47fadc:
    // 0x47fadc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x47fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_47fae0:
    // 0x47fae0: 0x34430b60  ori         $v1, $v0, 0xB60
    ctx->pc = 0x47fae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_47fae4:
    // 0x47fae4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x47fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_47fae8:
    // 0x47fae8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_47faec:
    // 0x47faec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47faecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47faf0:
    // 0x47faf0: 0xc440fa5c  lwc1        $f0, -0x5A4($v0)
    ctx->pc = 0x47faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47faf4:
    // 0x47faf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47faf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47faf8:
    // 0x47faf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x47faf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47fafc:
    // 0x47fafc: 0x26b000b4  addiu       $s0, $s5, 0xB4
    ctx->pc = 0x47fafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
label_47fb00:
    // 0x47fb00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47fb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47fb04:
    // 0x47fb04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fb04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47fb08:
    // 0x47fb08: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x47fb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_47fb0c:
    // 0x47fb0c: 0xc04ca18  jal         func_132860
label_47fb10:
    if (ctx->pc == 0x47FB10u) {
        ctx->pc = 0x47FB10u;
            // 0x47fb10: 0xae35000c  sw          $s5, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
        ctx->pc = 0x47FB14u;
        goto label_47fb14;
    }
    ctx->pc = 0x47FB0Cu;
    SET_GPR_U32(ctx, 31, 0x47FB14u);
    ctx->pc = 0x47FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FB0Cu;
            // 0x47fb10: 0xae35000c  sw          $s5, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FB14u; }
        if (ctx->pc != 0x47FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FB14u; }
        if (ctx->pc != 0x47FB14u) { return; }
    }
    ctx->pc = 0x47FB14u;
label_47fb14:
    // 0x47fb14: 0x8ea7009c  lw          $a3, 0x9C($s5)
    ctx->pc = 0x47fb14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_47fb18:
    // 0x47fb18: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47fb1c:
    // 0x47fb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47fb20:
    // 0x47fb20: 0x24a5fa4c  addiu       $a1, $a1, -0x5B4
    ctx->pc = 0x47fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965836));
label_47fb24:
    // 0x47fb24: 0xc0d37ec  jal         func_34DFB0
label_47fb28:
    if (ctx->pc == 0x47FB28u) {
        ctx->pc = 0x47FB28u;
            // 0x47fb28: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x47FB2Cu;
        goto label_47fb2c;
    }
    ctx->pc = 0x47FB24u;
    SET_GPR_U32(ctx, 31, 0x47FB2Cu);
    ctx->pc = 0x47FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FB24u;
            // 0x47fb28: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FB2Cu; }
        if (ctx->pc != 0x47FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FB2Cu; }
        if (ctx->pc != 0x47FB2Cu) { return; }
    }
    ctx->pc = 0x47FB2Cu;
label_47fb2c:
    // 0x47fb2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47fb30:
    // 0x47fb30: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x47fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_47fb34:
    // 0x47fb34: 0x10000090  b           . + 4 + (0x90 << 2)
label_47fb38:
    if (ctx->pc == 0x47FB38u) {
        ctx->pc = 0x47FB38u;
            // 0x47fb38: 0xae15000c  sw          $s5, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
        ctx->pc = 0x47FB3Cu;
        goto label_47fb3c;
    }
    ctx->pc = 0x47FB34u;
    {
        const bool branch_taken_0x47fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FB34u;
            // 0x47fb38: 0xae15000c  sw          $s5, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb34) {
            ctx->pc = 0x47FD78u;
            goto label_47fd78;
        }
    }
    ctx->pc = 0x47FB3Cu;
label_47fb3c:
    // 0x47fb3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47fb3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47fb40:
    // 0x47fb40: 0x320f809  jalr        $t9
label_47fb44:
    if (ctx->pc == 0x47FB44u) {
        ctx->pc = 0x47FB48u;
        goto label_47fb48;
    }
    ctx->pc = 0x47FB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FB48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FB48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FB48u; }
            if (ctx->pc != 0x47FB48u) { return; }
        }
        }
    }
    ctx->pc = 0x47FB48u;
label_47fb48:
    // 0x47fb48: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x47fb48u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_47fb4c:
    // 0x47fb4c: 0x12c0008a  beqz        $s6, . + 4 + (0x8A << 2)
label_47fb50:
    if (ctx->pc == 0x47FB50u) {
        ctx->pc = 0x47FB54u;
        goto label_47fb54;
    }
    ctx->pc = 0x47FB4Cu;
    {
        const bool branch_taken_0x47fb4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fb4c) {
            ctx->pc = 0x47FD78u;
            goto label_47fd78;
        }
    }
    ctx->pc = 0x47FB54u;
label_47fb54:
    // 0x47fb54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x47fb54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47fb58:
    // 0x47fb58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47fb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47fb5c:
    // 0x47fb5c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x47fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_47fb60:
    // 0x47fb60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47fb64:
    // 0x47fb64: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x47fb64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47fb68:
    // 0x47fb68: 0xc11fe70  jal         func_47F9C0
label_47fb6c:
    if (ctx->pc == 0x47FB6Cu) {
        ctx->pc = 0x47FB6Cu;
            // 0x47fb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FB70u;
        goto label_47fb70;
    }
    ctx->pc = 0x47FB68u;
    SET_GPR_U32(ctx, 31, 0x47FB70u);
    ctx->pc = 0x47FB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FB68u;
            // 0x47fb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F9C0u;
    goto label_47f9c0;
    ctx->pc = 0x47FB70u;
label_47fb70:
    // 0x47fb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47fb74:
    // 0x47fb74: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_47fb78:
    if (ctx->pc == 0x47FB78u) {
        ctx->pc = 0x47FB7Cu;
        goto label_47fb7c;
    }
    ctx->pc = 0x47FB74u;
    {
        const bool branch_taken_0x47fb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x47fb74) {
            ctx->pc = 0x47FBA8u;
            goto label_47fba8;
        }
    }
    ctx->pc = 0x47FB7Cu;
label_47fb7c:
    // 0x47fb7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_47fb80:
    if (ctx->pc == 0x47FB80u) {
        ctx->pc = 0x47FB84u;
        goto label_47fb84;
    }
    ctx->pc = 0x47FB7Cu;
    {
        const bool branch_taken_0x47fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fb7c) {
            ctx->pc = 0x47FB90u;
            goto label_47fb90;
        }
    }
    ctx->pc = 0x47FB84u;
label_47fb84:
    // 0x47fb84: 0x10000078  b           . + 4 + (0x78 << 2)
label_47fb88:
    if (ctx->pc == 0x47FB88u) {
        ctx->pc = 0x47FB8Cu;
        goto label_47fb8c;
    }
    ctx->pc = 0x47FB84u;
    {
        const bool branch_taken_0x47fb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fb84) {
            ctx->pc = 0x47FD68u;
            goto label_47fd68;
        }
    }
    ctx->pc = 0x47FB8Cu;
label_47fb8c:
    // 0x47fb8c: 0x0  nop
    ctx->pc = 0x47fb8cu;
    // NOP
label_47fb90:
    // 0x47fb90: 0xc11ffbc  jal         func_47FEF0
label_47fb94:
    if (ctx->pc == 0x47FB94u) {
        ctx->pc = 0x47FB94u;
            // 0x47fb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FB98u;
        goto label_47fb98;
    }
    ctx->pc = 0x47FB90u;
    SET_GPR_U32(ctx, 31, 0x47FB98u);
    ctx->pc = 0x47FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FB90u;
            // 0x47fb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47FEF0u;
    if (runtime->hasFunction(0x47FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x47FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FB98u; }
        if (ctx->pc != 0x47FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047FEF0_0x47fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FB98u; }
        if (ctx->pc != 0x47FB98u) { return; }
    }
    ctx->pc = 0x47FB98u;
label_47fb98:
    // 0x47fb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47fb9c:
    // 0x47fb9c: 0xc11ffb8  jal         func_47FEE0
label_47fba0:
    if (ctx->pc == 0x47FBA0u) {
        ctx->pc = 0x47FBA0u;
            // 0x47fba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47FBA4u;
        goto label_47fba4;
    }
    ctx->pc = 0x47FB9Cu;
    SET_GPR_U32(ctx, 31, 0x47FBA4u);
    ctx->pc = 0x47FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FB9Cu;
            // 0x47fba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47FEE0u;
    if (runtime->hasFunction(0x47FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x47FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FBA4u; }
        if (ctx->pc != 0x47FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047FEE0_0x47fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FBA4u; }
        if (ctx->pc != 0x47FBA4u) { return; }
    }
    ctx->pc = 0x47FBA4u;
label_47fba4:
    // 0x47fba4: 0x0  nop
    ctx->pc = 0x47fba4u;
    // NOP
label_47fba8:
    // 0x47fba8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x47fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_47fbac:
    // 0x47fbac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47fbb0:
    // 0x47fbb0: 0x1082006b  beq         $a0, $v0, . + 4 + (0x6B << 2)
label_47fbb4:
    if (ctx->pc == 0x47FBB4u) {
        ctx->pc = 0x47FBB8u;
        goto label_47fbb8;
    }
    ctx->pc = 0x47FBB0u;
    {
        const bool branch_taken_0x47fbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x47fbb0) {
            ctx->pc = 0x47FD60u;
            goto label_47fd60;
        }
    }
    ctx->pc = 0x47FBB8u;
label_47fbb8:
    // 0x47fbb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47fbbc:
    // 0x47fbbc: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
label_47fbc0:
    if (ctx->pc == 0x47FBC0u) {
        ctx->pc = 0x47FBC4u;
        goto label_47fbc4;
    }
    ctx->pc = 0x47FBBCu;
    {
        const bool branch_taken_0x47fbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47fbbc) {
            ctx->pc = 0x47FD58u;
            goto label_47fd58;
        }
    }
    ctx->pc = 0x47FBC4u;
label_47fbc4:
    // 0x47fbc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47fbc8:
    // 0x47fbc8: 0x10820061  beq         $a0, $v0, . + 4 + (0x61 << 2)
label_47fbcc:
    if (ctx->pc == 0x47FBCCu) {
        ctx->pc = 0x47FBD0u;
        goto label_47fbd0;
    }
    ctx->pc = 0x47FBC8u;
    {
        const bool branch_taken_0x47fbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x47fbc8) {
            ctx->pc = 0x47FD50u;
            goto label_47fd50;
        }
    }
    ctx->pc = 0x47FBD0u;
label_47fbd0:
    // 0x47fbd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47fbd4:
    // 0x47fbd4: 0x1082004e  beq         $a0, $v0, . + 4 + (0x4E << 2)
label_47fbd8:
    if (ctx->pc == 0x47FBD8u) {
        ctx->pc = 0x47FBDCu;
        goto label_47fbdc;
    }
    ctx->pc = 0x47FBD4u;
    {
        const bool branch_taken_0x47fbd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x47fbd4) {
            ctx->pc = 0x47FD10u;
            goto label_47fd10;
        }
    }
    ctx->pc = 0x47FBDCu;
label_47fbdc:
    // 0x47fbdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_47fbe0:
    if (ctx->pc == 0x47FBE0u) {
        ctx->pc = 0x47FBE4u;
        goto label_47fbe4;
    }
    ctx->pc = 0x47FBDCu;
    {
        const bool branch_taken_0x47fbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fbdc) {
            ctx->pc = 0x47FBF0u;
            goto label_47fbf0;
        }
    }
    ctx->pc = 0x47FBE4u;
label_47fbe4:
    // 0x47fbe4: 0x1000005e  b           . + 4 + (0x5E << 2)
label_47fbe8:
    if (ctx->pc == 0x47FBE8u) {
        ctx->pc = 0x47FBECu;
        goto label_47fbec;
    }
    ctx->pc = 0x47FBE4u;
    {
        const bool branch_taken_0x47fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fbe4) {
            ctx->pc = 0x47FD60u;
            goto label_47fd60;
        }
    }
    ctx->pc = 0x47FBECu;
label_47fbec:
    // 0x47fbec: 0x0  nop
    ctx->pc = 0x47fbecu;
    // NOP
label_47fbf0:
    // 0x47fbf0: 0xc0775b8  jal         func_1DD6E0
label_47fbf4:
    if (ctx->pc == 0x47FBF4u) {
        ctx->pc = 0x47FBF4u;
            // 0x47fbf4: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x47FBF8u;
        goto label_47fbf8;
    }
    ctx->pc = 0x47FBF0u;
    SET_GPR_U32(ctx, 31, 0x47FBF8u);
    ctx->pc = 0x47FBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FBF0u;
            // 0x47fbf4: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FBF8u; }
        if (ctx->pc != 0x47FBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FBF8u; }
        if (ctx->pc != 0x47FBF8u) { return; }
    }
    ctx->pc = 0x47FBF8u;
label_47fbf8:
    // 0x47fbf8: 0xc0775b4  jal         func_1DD6D0
label_47fbfc:
    if (ctx->pc == 0x47FBFCu) {
        ctx->pc = 0x47FBFCu;
            // 0x47fbfc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47FC00u;
        goto label_47fc00;
    }
    ctx->pc = 0x47FBF8u;
    SET_GPR_U32(ctx, 31, 0x47FC00u);
    ctx->pc = 0x47FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FBF8u;
            // 0x47fbfc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC00u; }
        if (ctx->pc != 0x47FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC00u; }
        if (ctx->pc != 0x47FC00u) { return; }
    }
    ctx->pc = 0x47FC00u;
label_47fc00:
    // 0x47fc00: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x47fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47fc04:
    // 0x47fc04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47fc04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47fc08:
    // 0x47fc08: 0x0  nop
    ctx->pc = 0x47fc08u;
    // NOP
label_47fc0c:
    // 0x47fc0c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x47fc0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_47fc10:
    // 0x47fc10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47fc10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47fc14:
    // 0x47fc14: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_47fc18:
    if (ctx->pc == 0x47FC18u) {
        ctx->pc = 0x47FC18u;
            // 0x47fc18: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x47FC1Cu;
        goto label_47fc1c;
    }
    ctx->pc = 0x47FC14u;
    {
        const bool branch_taken_0x47fc14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47FC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FC14u;
            // 0x47fc18: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fc14) {
            ctx->pc = 0x47FD60u;
            goto label_47fd60;
        }
    }
    ctx->pc = 0x47FC1Cu;
label_47fc1c:
    // 0x47fc1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47fc20:
    // 0x47fc20: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x47fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_47fc24:
    // 0x47fc24: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x47fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_47fc28:
    // 0x47fc28: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_47fc2c:
    // 0x47fc2c: 0xc46008f0  lwc1        $f0, 0x8F0($v1)
    ctx->pc = 0x47fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47fc30:
    // 0x47fc30: 0xc44208f4  lwc1        $f2, 0x8F4($v0)
    ctx->pc = 0x47fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47fc34:
    // 0x47fc34: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x47fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_47fc38:
    // 0x47fc38: 0xc46108f8  lwc1        $f1, 0x8F8($v1)
    ctx->pc = 0x47fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47fc3c:
    // 0x47fc3c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_47fc40:
    // 0x47fc40: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x47fc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_47fc44:
    // 0x47fc44: 0xc44008fc  lwc1        $f0, 0x8FC($v0)
    ctx->pc = 0x47fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47fc48:
    // 0x47fc48: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x47fc48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_47fc4c:
    // 0x47fc4c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x47fc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_47fc50:
    // 0x47fc50: 0xc0775b8  jal         func_1DD6E0
label_47fc54:
    if (ctx->pc == 0x47FC54u) {
        ctx->pc = 0x47FC54u;
            // 0x47fc54: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x47FC58u;
        goto label_47fc58;
    }
    ctx->pc = 0x47FC50u;
    SET_GPR_U32(ctx, 31, 0x47FC58u);
    ctx->pc = 0x47FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FC50u;
            // 0x47fc54: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC58u; }
        if (ctx->pc != 0x47FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC58u; }
        if (ctx->pc != 0x47FC58u) { return; }
    }
    ctx->pc = 0x47FC58u;
label_47fc58:
    // 0x47fc58: 0xc0775b4  jal         func_1DD6D0
label_47fc5c:
    if (ctx->pc == 0x47FC5Cu) {
        ctx->pc = 0x47FC5Cu;
            // 0x47fc5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47FC60u;
        goto label_47fc60;
    }
    ctx->pc = 0x47FC58u;
    SET_GPR_U32(ctx, 31, 0x47FC60u);
    ctx->pc = 0x47FC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FC58u;
            // 0x47fc5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC60u; }
        if (ctx->pc != 0x47FC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC60u; }
        if (ctx->pc != 0x47FC60u) { return; }
    }
    ctx->pc = 0x47FC60u;
label_47fc60:
    // 0x47fc60: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x47fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_47fc64:
    // 0x47fc64: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x47fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_47fc68:
    // 0x47fc68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x47fc68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47fc6c:
    // 0x47fc6c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x47fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_47fc70:
    // 0x47fc70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47fc70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47fc74:
    // 0x47fc74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x47fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_47fc78:
    // 0x47fc78: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x47fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_47fc7c:
    // 0x47fc7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47fc80:
    // 0x47fc80: 0x0  nop
    ctx->pc = 0x47fc80u;
    // NOP
label_47fc84:
    // 0x47fc84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47fc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_47fc88:
    // 0x47fc88: 0xc04f278  jal         func_13C9E0
label_47fc8c:
    if (ctx->pc == 0x47FC8Cu) {
        ctx->pc = 0x47FC8Cu;
            // 0x47fc8c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x47FC90u;
        goto label_47fc90;
    }
    ctx->pc = 0x47FC88u;
    SET_GPR_U32(ctx, 31, 0x47FC90u);
    ctx->pc = 0x47FC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FC88u;
            // 0x47fc8c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC90u; }
        if (ctx->pc != 0x47FC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FC90u; }
        if (ctx->pc != 0x47FC90u) { return; }
    }
    ctx->pc = 0x47FC90u;
label_47fc90:
    // 0x47fc90: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x47fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_47fc94:
    // 0x47fc94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x47fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_47fc98:
    // 0x47fc98: 0xc04cca0  jal         func_133280
label_47fc9c:
    if (ctx->pc == 0x47FC9Cu) {
        ctx->pc = 0x47FC9Cu;
            // 0x47fc9c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FCA0u;
        goto label_47fca0;
    }
    ctx->pc = 0x47FC98u;
    SET_GPR_U32(ctx, 31, 0x47FCA0u);
    ctx->pc = 0x47FC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FC98u;
            // 0x47fc9c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCA0u; }
        if (ctx->pc != 0x47FCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCA0u; }
        if (ctx->pc != 0x47FCA0u) { return; }
    }
    ctx->pc = 0x47FCA0u;
label_47fca0:
    // 0x47fca0: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x47fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47fca4:
    // 0x47fca4: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x47fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_47fca8:
    // 0x47fca8: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x47fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_47fcac:
    // 0x47fcac: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x47fcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_47fcb0:
    // 0x47fcb0: 0xc0b6df0  jal         func_2DB7C0
label_47fcb4:
    if (ctx->pc == 0x47FCB4u) {
        ctx->pc = 0x47FCB4u;
            // 0x47fcb4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x47FCB8u;
        goto label_47fcb8;
    }
    ctx->pc = 0x47FCB0u;
    SET_GPR_U32(ctx, 31, 0x47FCB8u);
    ctx->pc = 0x47FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FCB0u;
            // 0x47fcb4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCB8u; }
        if (ctx->pc != 0x47FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCB8u; }
        if (ctx->pc != 0x47FCB8u) { return; }
    }
    ctx->pc = 0x47FCB8u;
label_47fcb8:
    // 0x47fcb8: 0xc0b6e84  jal         func_2DBA10
label_47fcbc:
    if (ctx->pc == 0x47FCBCu) {
        ctx->pc = 0x47FCC0u;
        goto label_47fcc0;
    }
    ctx->pc = 0x47FCB8u;
    SET_GPR_U32(ctx, 31, 0x47FCC0u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCC0u; }
        if (ctx->pc != 0x47FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCC0u; }
        if (ctx->pc != 0x47FCC0u) { return; }
    }
    ctx->pc = 0x47FCC0u;
label_47fcc0:
    // 0x47fcc0: 0xc0b6e60  jal         func_2DB980
label_47fcc4:
    if (ctx->pc == 0x47FCC4u) {
        ctx->pc = 0x47FCC4u;
            // 0x47fcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FCC8u;
        goto label_47fcc8;
    }
    ctx->pc = 0x47FCC0u;
    SET_GPR_U32(ctx, 31, 0x47FCC8u);
    ctx->pc = 0x47FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FCC0u;
            // 0x47fcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCC8u; }
        if (ctx->pc != 0x47FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCC8u; }
        if (ctx->pc != 0x47FCC8u) { return; }
    }
    ctx->pc = 0x47FCC8u;
label_47fcc8:
    // 0x47fcc8: 0xc0b6e38  jal         func_2DB8E0
label_47fccc:
    if (ctx->pc == 0x47FCCCu) {
        ctx->pc = 0x47FCCCu;
            // 0x47fccc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x47FCD0u;
        goto label_47fcd0;
    }
    ctx->pc = 0x47FCC8u;
    SET_GPR_U32(ctx, 31, 0x47FCD0u);
    ctx->pc = 0x47FCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FCC8u;
            // 0x47fccc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCD0u; }
        if (ctx->pc != 0x47FCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCD0u; }
        if (ctx->pc != 0x47FCD0u) { return; }
    }
    ctx->pc = 0x47FCD0u;
label_47fcd0:
    // 0x47fcd0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x47fcd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_47fcd4:
    // 0x47fcd4: 0xc0b6e28  jal         func_2DB8A0
label_47fcd8:
    if (ctx->pc == 0x47FCD8u) {
        ctx->pc = 0x47FCD8u;
            // 0x47fcd8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x47FCDCu;
        goto label_47fcdc;
    }
    ctx->pc = 0x47FCD4u;
    SET_GPR_U32(ctx, 31, 0x47FCDCu);
    ctx->pc = 0x47FCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FCD4u;
            // 0x47fcd8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCDCu; }
        if (ctx->pc != 0x47FCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCDCu; }
        if (ctx->pc != 0x47FCDCu) { return; }
    }
    ctx->pc = 0x47FCDCu;
label_47fcdc:
    // 0x47fcdc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x47fcdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47fce0:
    // 0x47fce0: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x47fce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_47fce4:
    // 0x47fce4: 0x0  nop
    ctx->pc = 0x47fce4u;
    // NOP
label_47fce8:
    // 0x47fce8: 0xc0dc408  jal         func_371020
label_47fcec:
    if (ctx->pc == 0x47FCECu) {
        ctx->pc = 0x47FCECu;
            // 0x47fcec: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x47FCF0u;
        goto label_47fcf0;
    }
    ctx->pc = 0x47FCE8u;
    SET_GPR_U32(ctx, 31, 0x47FCF0u);
    ctx->pc = 0x47FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FCE8u;
            // 0x47fcec: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCF0u; }
        if (ctx->pc != 0x47FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCF0u; }
        if (ctx->pc != 0x47FCF0u) { return; }
    }
    ctx->pc = 0x47FCF0u;
label_47fcf0:
    // 0x47fcf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47fcf4:
    // 0x47fcf4: 0xc0dc3f4  jal         func_370FD0
label_47fcf8:
    if (ctx->pc == 0x47FCF8u) {
        ctx->pc = 0x47FCF8u;
            // 0x47fcf8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x47FCFCu;
        goto label_47fcfc;
    }
    ctx->pc = 0x47FCF4u;
    SET_GPR_U32(ctx, 31, 0x47FCFCu);
    ctx->pc = 0x47FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FCF4u;
            // 0x47fcf8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCFCu; }
        if (ctx->pc != 0x47FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FCFCu; }
        if (ctx->pc != 0x47FCFCu) { return; }
    }
    ctx->pc = 0x47FCFCu;
label_47fcfc:
    // 0x47fcfc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x47fcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47fd00:
    // 0x47fd00: 0x1660fff9  bnez        $s3, . + 4 + (-0x7 << 2)
label_47fd04:
    if (ctx->pc == 0x47FD04u) {
        ctx->pc = 0x47FD04u;
            // 0x47fd04: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x47FD08u;
        goto label_47fd08;
    }
    ctx->pc = 0x47FD00u;
    {
        const bool branch_taken_0x47fd00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD00u;
            // 0x47fd04: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fd00) {
            ctx->pc = 0x47FCE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47fce8;
        }
    }
    ctx->pc = 0x47FD08u;
label_47fd08:
    // 0x47fd08: 0x10000015  b           . + 4 + (0x15 << 2)
label_47fd0c:
    if (ctx->pc == 0x47FD0Cu) {
        ctx->pc = 0x47FD10u;
        goto label_47fd10;
    }
    ctx->pc = 0x47FD08u;
    {
        const bool branch_taken_0x47fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd08) {
            ctx->pc = 0x47FD60u;
            goto label_47fd60;
        }
    }
    ctx->pc = 0x47FD10u;
label_47fd10:
    // 0x47fd10: 0xc0775b8  jal         func_1DD6E0
label_47fd14:
    if (ctx->pc == 0x47FD14u) {
        ctx->pc = 0x47FD18u;
        goto label_47fd18;
    }
    ctx->pc = 0x47FD10u;
    SET_GPR_U32(ctx, 31, 0x47FD18u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD18u; }
        if (ctx->pc != 0x47FD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD18u; }
        if (ctx->pc != 0x47FD18u) { return; }
    }
    ctx->pc = 0x47FD18u;
label_47fd18:
    // 0x47fd18: 0xc0775b4  jal         func_1DD6D0
label_47fd1c:
    if (ctx->pc == 0x47FD1Cu) {
        ctx->pc = 0x47FD1Cu;
            // 0x47fd1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47FD20u;
        goto label_47fd20;
    }
    ctx->pc = 0x47FD18u;
    SET_GPR_U32(ctx, 31, 0x47FD20u);
    ctx->pc = 0x47FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD18u;
            // 0x47fd1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD20u; }
        if (ctx->pc != 0x47FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD20u; }
        if (ctx->pc != 0x47FD20u) { return; }
    }
    ctx->pc = 0x47FD20u;
label_47fd20:
    // 0x47fd20: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x47fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47fd24:
    // 0x47fd24: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x47fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_47fd28:
    // 0x47fd28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47fd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47fd2c:
    // 0x47fd2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47fd30:
    // 0x47fd30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x47fd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_47fd34:
    // 0x47fd34: 0x0  nop
    ctx->pc = 0x47fd34u;
    // NOP
label_47fd38:
    // 0x47fd38: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x47fd38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_47fd3c:
    // 0x47fd3c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x47fd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_47fd40:
    // 0x47fd40: 0xc11ff98  jal         func_47FE60
label_47fd44:
    if (ctx->pc == 0x47FD44u) {
        ctx->pc = 0x47FD44u;
            // 0x47fd44: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->pc = 0x47FD48u;
        goto label_47fd48;
    }
    ctx->pc = 0x47FD40u;
    SET_GPR_U32(ctx, 31, 0x47FD48u);
    ctx->pc = 0x47FD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD40u;
            // 0x47fd44: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x47FE60u;
    if (runtime->hasFunction(0x47FE60u)) {
        auto targetFn = runtime->lookupFunction(0x47FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD48u; }
        if (ctx->pc != 0x47FD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047FE60_0x47fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD48u; }
        if (ctx->pc != 0x47FD48u) { return; }
    }
    ctx->pc = 0x47FD48u;
label_47fd48:
    // 0x47fd48: 0x10000005  b           . + 4 + (0x5 << 2)
label_47fd4c:
    if (ctx->pc == 0x47FD4Cu) {
        ctx->pc = 0x47FD50u;
        goto label_47fd50;
    }
    ctx->pc = 0x47FD48u;
    {
        const bool branch_taken_0x47fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd48) {
            ctx->pc = 0x47FD60u;
            goto label_47fd60;
        }
    }
    ctx->pc = 0x47FD50u;
label_47fd50:
    // 0x47fd50: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x47fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_47fd54:
    // 0x47fd54: 0x0  nop
    ctx->pc = 0x47fd54u;
    // NOP
label_47fd58:
    // 0x47fd58: 0xc11ff7c  jal         func_47FDF0
label_47fd5c:
    if (ctx->pc == 0x47FD5Cu) {
        ctx->pc = 0x47FD5Cu;
            // 0x47fd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FD60u;
        goto label_47fd60;
    }
    ctx->pc = 0x47FD58u;
    SET_GPR_U32(ctx, 31, 0x47FD60u);
    ctx->pc = 0x47FD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD58u;
            // 0x47fd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47FDF0u;
    if (runtime->hasFunction(0x47FDF0u)) {
        auto targetFn = runtime->lookupFunction(0x47FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD60u; }
        if (ctx->pc != 0x47FD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047FDF0_0x47fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD60u; }
        if (ctx->pc != 0x47FD60u) { return; }
    }
    ctx->pc = 0x47FD60u;
label_47fd60:
    // 0x47fd60: 0xc11ff68  jal         func_47FDA0
label_47fd64:
    if (ctx->pc == 0x47FD64u) {
        ctx->pc = 0x47FD64u;
            // 0x47fd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FD68u;
        goto label_47fd68;
    }
    ctx->pc = 0x47FD60u;
    SET_GPR_U32(ctx, 31, 0x47FD68u);
    ctx->pc = 0x47FD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD60u;
            // 0x47fd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47FDA0u;
    if (runtime->hasFunction(0x47FDA0u)) {
        auto targetFn = runtime->lookupFunction(0x47FDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD68u; }
        if (ctx->pc != 0x47FD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047FDA0_0x47fda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FD68u; }
        if (ctx->pc != 0x47FD68u) { return; }
    }
    ctx->pc = 0x47FD68u;
label_47fd68:
    // 0x47fd68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x47fd68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_47fd6c:
    // 0x47fd6c: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x47fd6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_47fd70:
    // 0x47fd70: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
label_47fd74:
    if (ctx->pc == 0x47FD74u) {
        ctx->pc = 0x47FD74u;
            // 0x47fd74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x47FD78u;
        goto label_47fd78;
    }
    ctx->pc = 0x47FD70u;
    {
        const bool branch_taken_0x47fd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD70u;
            // 0x47fd74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fd70) {
            ctx->pc = 0x47FB5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47fb5c;
        }
    }
    ctx->pc = 0x47FD78u;
label_47fd78:
    // 0x47fd78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x47fd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_47fd7c:
    // 0x47fd7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47fd7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47fd80:
    // 0x47fd80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47fd80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47fd84:
    // 0x47fd84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47fd84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47fd88:
    // 0x47fd88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47fd88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47fd8c:
    // 0x47fd8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47fd8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47fd90:
    // 0x47fd90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47fd90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47fd94:
    // 0x47fd94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47fd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47fd98:
    // 0x47fd98: 0x3e00008  jr          $ra
label_47fd9c:
    if (ctx->pc == 0x47FD9Cu) {
        ctx->pc = 0x47FD9Cu;
            // 0x47fd9c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x47FDA0u;
        goto label_fallthrough_0x47fd98;
    }
    ctx->pc = 0x47FD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FD98u;
            // 0x47fd9c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x47fd98:
    ctx->pc = 0x47FDA0u;
}
