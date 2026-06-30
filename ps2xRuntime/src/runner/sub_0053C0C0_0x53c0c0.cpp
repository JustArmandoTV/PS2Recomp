#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053C0C0
// Address: 0x53c0c0 - 0x53c210
void sub_0053C0C0_0x53c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053C0C0_0x53c0c0");
#endif

    switch (ctx->pc) {
        case 0x53c0c0u: goto label_53c0c0;
        case 0x53c0c4u: goto label_53c0c4;
        case 0x53c0c8u: goto label_53c0c8;
        case 0x53c0ccu: goto label_53c0cc;
        case 0x53c0d0u: goto label_53c0d0;
        case 0x53c0d4u: goto label_53c0d4;
        case 0x53c0d8u: goto label_53c0d8;
        case 0x53c0dcu: goto label_53c0dc;
        case 0x53c0e0u: goto label_53c0e0;
        case 0x53c0e4u: goto label_53c0e4;
        case 0x53c0e8u: goto label_53c0e8;
        case 0x53c0ecu: goto label_53c0ec;
        case 0x53c0f0u: goto label_53c0f0;
        case 0x53c0f4u: goto label_53c0f4;
        case 0x53c0f8u: goto label_53c0f8;
        case 0x53c0fcu: goto label_53c0fc;
        case 0x53c100u: goto label_53c100;
        case 0x53c104u: goto label_53c104;
        case 0x53c108u: goto label_53c108;
        case 0x53c10cu: goto label_53c10c;
        case 0x53c110u: goto label_53c110;
        case 0x53c114u: goto label_53c114;
        case 0x53c118u: goto label_53c118;
        case 0x53c11cu: goto label_53c11c;
        case 0x53c120u: goto label_53c120;
        case 0x53c124u: goto label_53c124;
        case 0x53c128u: goto label_53c128;
        case 0x53c12cu: goto label_53c12c;
        case 0x53c130u: goto label_53c130;
        case 0x53c134u: goto label_53c134;
        case 0x53c138u: goto label_53c138;
        case 0x53c13cu: goto label_53c13c;
        case 0x53c140u: goto label_53c140;
        case 0x53c144u: goto label_53c144;
        case 0x53c148u: goto label_53c148;
        case 0x53c14cu: goto label_53c14c;
        case 0x53c150u: goto label_53c150;
        case 0x53c154u: goto label_53c154;
        case 0x53c158u: goto label_53c158;
        case 0x53c15cu: goto label_53c15c;
        case 0x53c160u: goto label_53c160;
        case 0x53c164u: goto label_53c164;
        case 0x53c168u: goto label_53c168;
        case 0x53c16cu: goto label_53c16c;
        case 0x53c170u: goto label_53c170;
        case 0x53c174u: goto label_53c174;
        case 0x53c178u: goto label_53c178;
        case 0x53c17cu: goto label_53c17c;
        case 0x53c180u: goto label_53c180;
        case 0x53c184u: goto label_53c184;
        case 0x53c188u: goto label_53c188;
        case 0x53c18cu: goto label_53c18c;
        case 0x53c190u: goto label_53c190;
        case 0x53c194u: goto label_53c194;
        case 0x53c198u: goto label_53c198;
        case 0x53c19cu: goto label_53c19c;
        case 0x53c1a0u: goto label_53c1a0;
        case 0x53c1a4u: goto label_53c1a4;
        case 0x53c1a8u: goto label_53c1a8;
        case 0x53c1acu: goto label_53c1ac;
        case 0x53c1b0u: goto label_53c1b0;
        case 0x53c1b4u: goto label_53c1b4;
        case 0x53c1b8u: goto label_53c1b8;
        case 0x53c1bcu: goto label_53c1bc;
        case 0x53c1c0u: goto label_53c1c0;
        case 0x53c1c4u: goto label_53c1c4;
        case 0x53c1c8u: goto label_53c1c8;
        case 0x53c1ccu: goto label_53c1cc;
        case 0x53c1d0u: goto label_53c1d0;
        case 0x53c1d4u: goto label_53c1d4;
        case 0x53c1d8u: goto label_53c1d8;
        case 0x53c1dcu: goto label_53c1dc;
        case 0x53c1e0u: goto label_53c1e0;
        case 0x53c1e4u: goto label_53c1e4;
        case 0x53c1e8u: goto label_53c1e8;
        case 0x53c1ecu: goto label_53c1ec;
        case 0x53c1f0u: goto label_53c1f0;
        case 0x53c1f4u: goto label_53c1f4;
        case 0x53c1f8u: goto label_53c1f8;
        case 0x53c1fcu: goto label_53c1fc;
        case 0x53c200u: goto label_53c200;
        case 0x53c204u: goto label_53c204;
        case 0x53c208u: goto label_53c208;
        case 0x53c20cu: goto label_53c20c;
        default: break;
    }

    ctx->pc = 0x53c0c0u;

label_53c0c0:
    // 0x53c0c0: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x53c0c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_53c0c4:
    // 0x53c0c4: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x53c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
label_53c0c8:
    // 0x53c0c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53c0cc:
    // 0x53c0cc: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_53c0d0:
    if (ctx->pc == 0x53C0D0u) {
        ctx->pc = 0x53C0D0u;
            // 0x53c0d0: 0x8c668a08  lw          $a2, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->pc = 0x53C0D4u;
        goto label_53c0d4;
    }
    ctx->pc = 0x53C0CCu;
    {
        const bool branch_taken_0x53c0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C0CCu;
            // 0x53c0d0: 0x8c668a08  lw          $a2, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c0cc) {
            ctx->pc = 0x53C114u;
            goto label_53c114;
        }
    }
    ctx->pc = 0x53C0D4u;
label_53c0d4:
    // 0x53c0d4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53c0d8:
    // 0x53c0d8: 0x8c64cfe8  lw          $a0, -0x3018($v1)
    ctx->pc = 0x53c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954984)));
label_53c0dc:
    // 0x53c0dc: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x53c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_53c0e0:
    // 0x53c0e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x53c0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_53c0e4:
    // 0x53c0e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_53c0e8:
    if (ctx->pc == 0x53C0E8u) {
        ctx->pc = 0x53C0E8u;
            // 0x53c0e8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x53C0ECu;
        goto label_53c0ec;
    }
    ctx->pc = 0x53C0E4u;
    {
        const bool branch_taken_0x53c0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C0E4u;
            // 0x53c0e8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c0e4) {
            ctx->pc = 0x53C0FCu;
            goto label_53c0fc;
        }
    }
    ctx->pc = 0x53C0ECu;
label_53c0ec:
    // 0x53c0ec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53c0f0:
    // 0x53c0f0: 0x8c63cfe0  lw          $v1, -0x3020($v1)
    ctx->pc = 0x53c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954976)));
label_53c0f4:
    // 0x53c0f4: 0x601827  not         $v1, $v1
    ctx->pc = 0x53c0f4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_53c0f8:
    // 0x53c0f8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x53c0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_53c0fc:
    // 0x53c0fc: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x53c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_53c100:
    // 0x53c100: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x53c100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
label_53c104:
    // 0x53c104: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x53c104u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_53c108:
    // 0x53c108: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x53c108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_53c10c:
    // 0x53c10c: 0x10000006  b           . + 4 + (0x6 << 2)
label_53c110:
    if (ctx->pc == 0x53C110u) {
        ctx->pc = 0x53C110u;
            // 0x53c110: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x53C114u;
        goto label_53c114;
    }
    ctx->pc = 0x53C10Cu;
    {
        const bool branch_taken_0x53c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C10Cu;
            // 0x53c110: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c10c) {
            ctx->pc = 0x53C128u;
            goto label_53c128;
        }
    }
    ctx->pc = 0x53C114u;
label_53c114:
    // 0x53c114: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x53c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_53c118:
    // 0x53c118: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x53c118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_53c11c:
    // 0x53c11c: 0x802027  not         $a0, $a0
    ctx->pc = 0x53c11cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_53c120:
    // 0x53c120: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x53c120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_53c124:
    // 0x53c124: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x53c124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
label_53c128:
    // 0x53c128: 0x3e00008  jr          $ra
label_53c12c:
    if (ctx->pc == 0x53C12Cu) {
        ctx->pc = 0x53C130u;
        goto label_53c130;
    }
    ctx->pc = 0x53C128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C130u;
label_53c130:
    // 0x53c130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53c134:
    // 0x53c134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53c138:
    // 0x53c138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53c13c:
    // 0x53c13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53c140:
    // 0x53c140: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53c140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53c144:
    // 0x53c144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53c144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53c148:
    // 0x53c148: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x53c148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_53c14c:
    // 0x53c14c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x53c14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_53c150:
    // 0x53c150: 0x320f809  jalr        $t9
label_53c154:
    if (ctx->pc == 0x53C154u) {
        ctx->pc = 0x53C154u;
            // 0x53c154: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C158u;
        goto label_53c158;
    }
    ctx->pc = 0x53C150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53C158u);
        ctx->pc = 0x53C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C150u;
            // 0x53c154: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53C158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53C158u; }
            if (ctx->pc != 0x53C158u) { return; }
        }
        }
    }
    ctx->pc = 0x53C158u;
label_53c158:
    // 0x53c158: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_53c15c:
    if (ctx->pc == 0x53C15Cu) {
        ctx->pc = 0x53C15Cu;
            // 0x53c15c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x53C160u;
        goto label_53c160;
    }
    ctx->pc = 0x53C158u;
    {
        const bool branch_taken_0x53c158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53c158) {
            ctx->pc = 0x53C15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53C158u;
            // 0x53c15c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53C170u;
            goto label_53c170;
        }
    }
    ctx->pc = 0x53C160u;
label_53c160:
    // 0x53c160: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x53c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_53c164:
    // 0x53c164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53c168:
    // 0x53c168: 0x10000008  b           . + 4 + (0x8 << 2)
label_53c16c:
    if (ctx->pc == 0x53C16Cu) {
        ctx->pc = 0x53C16Cu;
            // 0x53c16c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x53C170u;
        goto label_53c170;
    }
    ctx->pc = 0x53C168u;
    {
        const bool branch_taken_0x53c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C168u;
            // 0x53c16c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c168) {
            ctx->pc = 0x53C18Cu;
            goto label_53c18c;
        }
    }
    ctx->pc = 0x53C170u;
label_53c170:
    // 0x53c170: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x53c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_53c174:
    // 0x53c174: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_53c178:
    if (ctx->pc == 0x53C178u) {
        ctx->pc = 0x53C178u;
            // 0x53c178: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x53C17Cu;
        goto label_53c17c;
    }
    ctx->pc = 0x53C174u;
    {
        const bool branch_taken_0x53c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53c174) {
            ctx->pc = 0x53C178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53C174u;
            // 0x53c178: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53C184u;
            goto label_53c184;
        }
    }
    ctx->pc = 0x53C17Cu;
label_53c17c:
    // 0x53c17c: 0x10000003  b           . + 4 + (0x3 << 2)
label_53c180:
    if (ctx->pc == 0x53C180u) {
        ctx->pc = 0x53C180u;
            // 0x53c180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C184u;
        goto label_53c184;
    }
    ctx->pc = 0x53C17Cu;
    {
        const bool branch_taken_0x53c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C17Cu;
            // 0x53c180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c17c) {
            ctx->pc = 0x53C18Cu;
            goto label_53c18c;
        }
    }
    ctx->pc = 0x53C184u;
label_53c184:
    // 0x53c184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53c188:
    // 0x53c188: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53c188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_53c18c:
    // 0x53c18c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53c190:
    // 0x53c190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53c190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53c194:
    // 0x53c194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53c194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53c198:
    // 0x53c198: 0x3e00008  jr          $ra
label_53c19c:
    if (ctx->pc == 0x53C19Cu) {
        ctx->pc = 0x53C19Cu;
            // 0x53c19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53C1A0u;
        goto label_53c1a0;
    }
    ctx->pc = 0x53C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C198u;
            // 0x53c19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C1A0u;
label_53c1a0:
    // 0x53c1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53c1a4:
    // 0x53c1a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53c1a8:
    // 0x53c1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53c1ac:
    // 0x53c1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53c1b0:
    // 0x53c1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53c1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53c1b4:
    // 0x53c1b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_53c1b8:
    if (ctx->pc == 0x53C1B8u) {
        ctx->pc = 0x53C1B8u;
            // 0x53c1b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C1BCu;
        goto label_53c1bc;
    }
    ctx->pc = 0x53C1B4u;
    {
        const bool branch_taken_0x53c1b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C1B4u;
            // 0x53c1b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c1b4) {
            ctx->pc = 0x53C1F8u;
            goto label_53c1f8;
        }
    }
    ctx->pc = 0x53C1BCu;
label_53c1bc:
    // 0x53c1bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53c1c0:
    // 0x53c1c0: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x53c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_53c1c4:
    // 0x53c1c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_53c1c8:
    if (ctx->pc == 0x53C1C8u) {
        ctx->pc = 0x53C1C8u;
            // 0x53c1c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53C1CCu;
        goto label_53c1cc;
    }
    ctx->pc = 0x53C1C4u;
    {
        const bool branch_taken_0x53c1c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C1C4u;
            // 0x53c1c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53c1c4) {
            ctx->pc = 0x53C1E0u;
            goto label_53c1e0;
        }
    }
    ctx->pc = 0x53C1CCu;
label_53c1cc:
    // 0x53c1cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53c1d0:
    // 0x53c1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53c1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53c1d4:
    // 0x53c1d4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x53c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_53c1d8:
    // 0x53c1d8: 0xc057a68  jal         func_15E9A0
label_53c1dc:
    if (ctx->pc == 0x53C1DCu) {
        ctx->pc = 0x53C1DCu;
            // 0x53c1dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53C1E0u;
        goto label_53c1e0;
    }
    ctx->pc = 0x53C1D8u;
    SET_GPR_U32(ctx, 31, 0x53C1E0u);
    ctx->pc = 0x53C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C1D8u;
            // 0x53c1dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C1E0u; }
        if (ctx->pc != 0x53C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C1E0u; }
        if (ctx->pc != 0x53C1E0u) { return; }
    }
    ctx->pc = 0x53C1E0u;
label_53c1e0:
    // 0x53c1e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x53c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_53c1e4:
    // 0x53c1e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53c1e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53c1e8:
    // 0x53c1e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53c1ec:
    if (ctx->pc == 0x53C1ECu) {
        ctx->pc = 0x53C1ECu;
            // 0x53c1ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C1F0u;
        goto label_53c1f0;
    }
    ctx->pc = 0x53C1E8u;
    {
        const bool branch_taken_0x53c1e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53c1e8) {
            ctx->pc = 0x53C1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53C1E8u;
            // 0x53c1ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53C1FCu;
            goto label_53c1fc;
        }
    }
    ctx->pc = 0x53C1F0u;
label_53c1f0:
    // 0x53c1f0: 0xc0400a8  jal         func_1002A0
label_53c1f4:
    if (ctx->pc == 0x53C1F4u) {
        ctx->pc = 0x53C1F4u;
            // 0x53c1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53C1F8u;
        goto label_53c1f8;
    }
    ctx->pc = 0x53C1F0u;
    SET_GPR_U32(ctx, 31, 0x53C1F8u);
    ctx->pc = 0x53C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53C1F0u;
            // 0x53c1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C1F8u; }
        if (ctx->pc != 0x53C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53C1F8u; }
        if (ctx->pc != 0x53C1F8u) { return; }
    }
    ctx->pc = 0x53C1F8u;
label_53c1f8:
    // 0x53c1f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53c1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53c1fc:
    // 0x53c1fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53c1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53c200:
    // 0x53c200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53c200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53c204:
    // 0x53c204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53c204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53c208:
    // 0x53c208: 0x3e00008  jr          $ra
label_53c20c:
    if (ctx->pc == 0x53C20Cu) {
        ctx->pc = 0x53C20Cu;
            // 0x53c20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53C210u;
        goto label_fallthrough_0x53c208;
    }
    ctx->pc = 0x53C208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C208u;
            // 0x53c20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x53c208:
    ctx->pc = 0x53C210u;
}
