#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F4200
// Address: 0x3f4200 - 0x3f4320
void sub_003F4200_0x3f4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4200_0x3f4200");
#endif

    switch (ctx->pc) {
        case 0x3f4200u: goto label_3f4200;
        case 0x3f4204u: goto label_3f4204;
        case 0x3f4208u: goto label_3f4208;
        case 0x3f420cu: goto label_3f420c;
        case 0x3f4210u: goto label_3f4210;
        case 0x3f4214u: goto label_3f4214;
        case 0x3f4218u: goto label_3f4218;
        case 0x3f421cu: goto label_3f421c;
        case 0x3f4220u: goto label_3f4220;
        case 0x3f4224u: goto label_3f4224;
        case 0x3f4228u: goto label_3f4228;
        case 0x3f422cu: goto label_3f422c;
        case 0x3f4230u: goto label_3f4230;
        case 0x3f4234u: goto label_3f4234;
        case 0x3f4238u: goto label_3f4238;
        case 0x3f423cu: goto label_3f423c;
        case 0x3f4240u: goto label_3f4240;
        case 0x3f4244u: goto label_3f4244;
        case 0x3f4248u: goto label_3f4248;
        case 0x3f424cu: goto label_3f424c;
        case 0x3f4250u: goto label_3f4250;
        case 0x3f4254u: goto label_3f4254;
        case 0x3f4258u: goto label_3f4258;
        case 0x3f425cu: goto label_3f425c;
        case 0x3f4260u: goto label_3f4260;
        case 0x3f4264u: goto label_3f4264;
        case 0x3f4268u: goto label_3f4268;
        case 0x3f426cu: goto label_3f426c;
        case 0x3f4270u: goto label_3f4270;
        case 0x3f4274u: goto label_3f4274;
        case 0x3f4278u: goto label_3f4278;
        case 0x3f427cu: goto label_3f427c;
        case 0x3f4280u: goto label_3f4280;
        case 0x3f4284u: goto label_3f4284;
        case 0x3f4288u: goto label_3f4288;
        case 0x3f428cu: goto label_3f428c;
        case 0x3f4290u: goto label_3f4290;
        case 0x3f4294u: goto label_3f4294;
        case 0x3f4298u: goto label_3f4298;
        case 0x3f429cu: goto label_3f429c;
        case 0x3f42a0u: goto label_3f42a0;
        case 0x3f42a4u: goto label_3f42a4;
        case 0x3f42a8u: goto label_3f42a8;
        case 0x3f42acu: goto label_3f42ac;
        case 0x3f42b0u: goto label_3f42b0;
        case 0x3f42b4u: goto label_3f42b4;
        case 0x3f42b8u: goto label_3f42b8;
        case 0x3f42bcu: goto label_3f42bc;
        case 0x3f42c0u: goto label_3f42c0;
        case 0x3f42c4u: goto label_3f42c4;
        case 0x3f42c8u: goto label_3f42c8;
        case 0x3f42ccu: goto label_3f42cc;
        case 0x3f42d0u: goto label_3f42d0;
        case 0x3f42d4u: goto label_3f42d4;
        case 0x3f42d8u: goto label_3f42d8;
        case 0x3f42dcu: goto label_3f42dc;
        case 0x3f42e0u: goto label_3f42e0;
        case 0x3f42e4u: goto label_3f42e4;
        case 0x3f42e8u: goto label_3f42e8;
        case 0x3f42ecu: goto label_3f42ec;
        case 0x3f42f0u: goto label_3f42f0;
        case 0x3f42f4u: goto label_3f42f4;
        case 0x3f42f8u: goto label_3f42f8;
        case 0x3f42fcu: goto label_3f42fc;
        case 0x3f4300u: goto label_3f4300;
        case 0x3f4304u: goto label_3f4304;
        case 0x3f4308u: goto label_3f4308;
        case 0x3f430cu: goto label_3f430c;
        case 0x3f4310u: goto label_3f4310;
        case 0x3f4314u: goto label_3f4314;
        case 0x3f4318u: goto label_3f4318;
        case 0x3f431cu: goto label_3f431c;
        default: break;
    }

    ctx->pc = 0x3f4200u;

label_3f4200:
    // 0x3f4200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f4204:
    // 0x3f4204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4208:
    // 0x3f4208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f4208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f420c:
    // 0x3f420c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f4210:
    // 0x3f4210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f4210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f4214:
    // 0x3f4214: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f4214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4218:
    // 0x3f4218: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f4218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f421c:
    // 0x3f421c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f4220:
    // 0x3f4220: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3f4220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3f4224:
    // 0x3f4224: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3f4224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3f4228:
    // 0x3f4228: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3f4228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3f422c:
    // 0x3f422c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3f422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3f4230:
    // 0x3f4230: 0x24900050  addiu       $s0, $a0, 0x50
    ctx->pc = 0x3f4230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_3f4234:
    // 0x3f4234: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x3f4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3f4238:
    // 0x3f4238: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3f423c:
    if (ctx->pc == 0x3F423Cu) {
        ctx->pc = 0x3F423Cu;
            // 0x3f423c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x3F4240u;
        goto label_3f4240;
    }
    ctx->pc = 0x3F4238u;
    {
        const bool branch_taken_0x3f4238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f4238) {
            ctx->pc = 0x3F423Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4238u;
            // 0x3f423c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4250u;
            goto label_3f4250;
        }
    }
    ctx->pc = 0x3F4240u;
label_3f4240:
    // 0x3f4240: 0x8e4203a4  lw          $v0, 0x3A4($s2)
    ctx->pc = 0x3f4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
label_3f4244:
    // 0x3f4244: 0x40f809  jalr        $v0
label_3f4248:
    if (ctx->pc == 0x3F4248u) {
        ctx->pc = 0x3F4248u;
            // 0x3f4248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F424Cu;
        goto label_3f424c;
    }
    ctx->pc = 0x3F4244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F424Cu);
        ctx->pc = 0x3F4248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4244u;
            // 0x3f4248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F424Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F424Cu; }
            if (ctx->pc != 0x3F424Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F424Cu;
label_3f424c:
    // 0x3f424c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3f424cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3f4250:
    // 0x3f4250: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3f4250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f4254:
    // 0x3f4254: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3f4258:
    if (ctx->pc == 0x3F4258u) {
        ctx->pc = 0x3F4258u;
            // 0x3f4258: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x3F425Cu;
        goto label_3f425c;
    }
    ctx->pc = 0x3F4254u;
    {
        const bool branch_taken_0x3f4254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f4254) {
            ctx->pc = 0x3F4258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4254u;
            // 0x3f4258: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4264u;
            goto label_3f4264;
        }
    }
    ctx->pc = 0x3F425Cu;
label_3f425c:
    // 0x3f425c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3f425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3f4260:
    // 0x3f4260: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3f4260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3f4264:
    // 0x3f4264: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3f4264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3f4268:
    // 0x3f4268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f4268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f426c:
    // 0x3f426c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f426cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f4270:
    // 0x3f4270: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3f4270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3f4274:
    // 0x3f4274: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3f4274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f4278:
    // 0x3f4278: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f427c:
    if (ctx->pc == 0x3F427Cu) {
        ctx->pc = 0x3F427Cu;
            // 0x3f427c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x3F4280u;
        goto label_3f4280;
    }
    ctx->pc = 0x3F4278u;
    {
        const bool branch_taken_0x3f4278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4278) {
            ctx->pc = 0x3F427Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4278u;
            // 0x3f427c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4294u;
            goto label_3f4294;
        }
    }
    ctx->pc = 0x3F4280u;
label_3f4280:
    // 0x3f4280: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f4280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f4284:
    // 0x3f4284: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f4284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f4288:
    // 0x3f4288: 0x320f809  jalr        $t9
label_3f428c:
    if (ctx->pc == 0x3F428Cu) {
        ctx->pc = 0x3F428Cu;
            // 0x3f428c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F4290u;
        goto label_3f4290;
    }
    ctx->pc = 0x3F4288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4290u);
        ctx->pc = 0x3F428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4288u;
            // 0x3f428c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4290u; }
            if (ctx->pc != 0x3F4290u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4290u;
label_3f4290:
    // 0x3f4290: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3f4290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3f4294:
    // 0x3f4294: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f4294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f4298:
    // 0x3f4298: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f429c:
    if (ctx->pc == 0x3F429Cu) {
        ctx->pc = 0x3F429Cu;
            // 0x3f429c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3F42A0u;
        goto label_3f42a0;
    }
    ctx->pc = 0x3F4298u;
    {
        const bool branch_taken_0x3f4298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4298) {
            ctx->pc = 0x3F429Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4298u;
            // 0x3f429c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F42B4u;
            goto label_3f42b4;
        }
    }
    ctx->pc = 0x3F42A0u;
label_3f42a0:
    // 0x3f42a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f42a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f42a4:
    // 0x3f42a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f42a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f42a8:
    // 0x3f42a8: 0x320f809  jalr        $t9
label_3f42ac:
    if (ctx->pc == 0x3F42ACu) {
        ctx->pc = 0x3F42ACu;
            // 0x3f42ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F42B0u;
        goto label_3f42b0;
    }
    ctx->pc = 0x3F42A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F42B0u);
        ctx->pc = 0x3F42ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F42A8u;
            // 0x3f42ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F42B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F42B0u; }
            if (ctx->pc != 0x3F42B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F42B0u;
label_3f42b0:
    // 0x3f42b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3f42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3f42b4:
    // 0x3f42b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3f42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f42b8:
    // 0x3f42b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f42bc:
    if (ctx->pc == 0x3F42BCu) {
        ctx->pc = 0x3F42BCu;
            // 0x3f42bc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x3F42C0u;
        goto label_3f42c0;
    }
    ctx->pc = 0x3F42B8u;
    {
        const bool branch_taken_0x3f42b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f42b8) {
            ctx->pc = 0x3F42BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F42B8u;
            // 0x3f42bc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F42D4u;
            goto label_3f42d4;
        }
    }
    ctx->pc = 0x3F42C0u;
label_3f42c0:
    // 0x3f42c0: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3f42c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3f42c4:
    // 0x3f42c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f42c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f42c8:
    // 0x3f42c8: 0x320f809  jalr        $t9
label_3f42cc:
    if (ctx->pc == 0x3F42CCu) {
        ctx->pc = 0x3F42CCu;
            // 0x3f42cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F42D0u;
        goto label_3f42d0;
    }
    ctx->pc = 0x3F42C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F42D0u);
        ctx->pc = 0x3F42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F42C8u;
            // 0x3f42cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F42D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F42D0u; }
            if (ctx->pc != 0x3F42D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F42D0u;
label_3f42d0:
    // 0x3f42d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3f42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3f42d4:
    // 0x3f42d4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3f42d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3f42d8:
    // 0x3f42d8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3f42dc:
    if (ctx->pc == 0x3F42DCu) {
        ctx->pc = 0x3F42DCu;
            // 0x3f42dc: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x3F42E0u;
        goto label_3f42e0;
    }
    ctx->pc = 0x3F42D8u;
    {
        const bool branch_taken_0x3f42d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f42d8) {
            ctx->pc = 0x3F42DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F42D8u;
            // 0x3f42dc: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F42F4u;
            goto label_3f42f4;
        }
    }
    ctx->pc = 0x3F42E0u;
label_3f42e0:
    // 0x3f42e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f42e4:
    // 0x3f42e4: 0xc0fe48c  jal         func_3F9230
label_3f42e8:
    if (ctx->pc == 0x3F42E8u) {
        ctx->pc = 0x3F42E8u;
            // 0x3f42e8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3F42ECu;
        goto label_3f42ec;
    }
    ctx->pc = 0x3F42E4u;
    SET_GPR_U32(ctx, 31, 0x3F42ECu);
    ctx->pc = 0x3F42E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F42E4u;
            // 0x3f42e8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F42ECu; }
        if (ctx->pc != 0x3F42ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F42ECu; }
        if (ctx->pc != 0x3F42ECu) { return; }
    }
    ctx->pc = 0x3F42ECu;
label_3f42ec:
    // 0x3f42ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3f42ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3f42f0:
    // 0x3f42f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3f42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3f42f4:
    // 0x3f42f4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3f42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_3f42f8:
    // 0x3f42f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3f42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3f42fc:
    // 0x3f42fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f42fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f4300:
    // 0x3f4300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f4300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f4304:
    // 0x3f4304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4308:
    // 0x3f4308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f430c:
    // 0x3f430c: 0x3e00008  jr          $ra
label_3f4310:
    if (ctx->pc == 0x3F4310u) {
        ctx->pc = 0x3F4310u;
            // 0x3f4310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F4314u;
        goto label_3f4314;
    }
    ctx->pc = 0x3F430Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F430Cu;
            // 0x3f4310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4314u;
label_3f4314:
    // 0x3f4314: 0x0  nop
    ctx->pc = 0x3f4314u;
    // NOP
label_3f4318:
    // 0x3f4318: 0x0  nop
    ctx->pc = 0x3f4318u;
    // NOP
label_3f431c:
    // 0x3f431c: 0x0  nop
    ctx->pc = 0x3f431cu;
    // NOP
}
